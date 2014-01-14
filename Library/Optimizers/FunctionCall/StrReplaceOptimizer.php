<?php

/*
 +--------------------------------------------------------------------------+
 | Zephir Language                                                          |
 +--------------------------------------------------------------------------+
 | Copyright (c) 2013-2014 Zephir Team and contributors                     |
 +--------------------------------------------------------------------------+
 | This source file is subject the MIT license, that is bundled with        |
 | this package in the file LICENSE, and is available through the           |
 | world-wide-web at the following url:                                     |
 | http://zephir-lang.com/license.html                                      |
 |                                                                          |
 | If you did not receive a copy of the MIT license and are unable          |
 | to obtain it through the world-wide-web, please send a note to           |
 | license@zephir-lang.com so we can mail you a copy immediately.           |
 +--------------------------------------------------------------------------+
*/

/**
 * StrReplaceOptimizer
 *
 * Optimizes calls to 'str_replace' using internal function
 */
class StrReplaceOptimizer
	extends OptimizerAbstract
{
	/**
	 * @param array $expression
	 * @param Call $call
	 * @param CompilationContext $context
	 * @return bool|CompiledExpression|mixed
	 * @throws CompilerException
	 */
	public function optimize(array $expression, Call $call, CompilationContext $context)
	{
		if (!isset($expression['parameters'])) {
			return false;
		}

		if (count($expression['parameters']) != 3) {
			throw new CompilerException("'str_replace' only accepts three parameter");
		}

		/**
		 * Process the expected symbol to be returned
		 */
		$call->processExpectedReturn($context);

		$symbolVariable = $call->getSymbolVariable();
		if ($symbolVariable->isNotVariableAndString()) {
			throw new CompilerException("Returned values by functions can only be assigned to variant variables", $expression);
		}

		if ($call->mustInitSymbolVariable()) {
			$symbolVariable->initVariant($context);
		}

		$context->headersManager->add('kernel/string');

		$symbolVariable->setDynamicTypes('string');

		$resolvedParams = $call->getReadOnlyResolvedParams($expression['parameters'], $context, $expression);
		$context->codePrinter->output('zephir_fast_str_replace(' . $symbolVariable->getName() . ', ' . $resolvedParams[0] . ', ' . $resolvedParams[1] . ', ' . $resolvedParams[2] . ');');
		return new CompiledExpression('variable', $symbolVariable->getRealName(), $expression);
	}

}