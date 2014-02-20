
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Test_TryTest) {

	ZEPHIR_REGISTER_CLASS(Test, TryTest, test, trytest, test_trytest_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_TryTest, testTry1) {



	/* try_start_1: */


	try_end_1:
	do { } while(0);


}

PHP_METHOD(Test_TryTest, testTry2) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();


	/* try_start_1: */

		ZEPHIR_INIT_VAR(_0);
		object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(_1);
		ZVAL_STRING(_1, "error!", 1);
		zephir_call_method_p1_noret(_0, "__construct", _1);
		goto try_end_1;


	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry3) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();


	/* try_start_1: */

		ZEPHIR_INIT_VAR(_0);
		object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(_1);
		ZVAL_STRING(_1, "error!", 1);
		zephir_call_method_p1_noret(_0, "__construct", _1);
		goto try_end_1;


	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry4) {

	zval *a_param = NULL, *_0 = NULL, *_1 = NULL;
	zend_bool a;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	a = zephir_get_boolval(a_param);



	/* try_start_1: */

		if (a) {
			ZEPHIR_INIT_VAR(_0);
			object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_VAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		} else {
			ZEPHIR_INIT_LNVAR(_0);
			object_init_ex(_0, spl_ce_RuntimeException);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		}

	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry5) {

	zval *a_param = NULL, *_0 = NULL, *_1 = NULL;
	zend_bool a;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	a = zephir_get_boolval(a_param);



	/* try_start_1: */

		if (a) {
			ZEPHIR_INIT_VAR(_0);
			object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_VAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		} else {
			ZEPHIR_INIT_LNVAR(_0);
			object_init_ex(_0, spl_ce_RuntimeException);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		}

	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry6) {

	zval *a_param = NULL, e, *_0 = NULL, *_1 = NULL;
	zend_bool a;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	a = zephir_get_boolval(a_param);



	/* try_start_1: */

		if (a) {
			ZEPHIR_INIT_VAR(_0);
			object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_VAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		} else {
			ZEPHIR_INIT_LNVAR(_0);
			object_init_ex(_0, spl_ce_RuntimeException);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		}

	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry7) {

	zval *a_param = NULL, e, *_0 = NULL, *_1 = NULL;
	zend_bool a;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	a = zephir_get_boolval(a_param);



	/* try_start_1: */

		if (a) {
			ZEPHIR_INIT_VAR(_0);
			object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_INIT_VAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		} else {
			ZEPHIR_INIT_LNVAR(_0);
			object_init_ex(_0, spl_ce_RuntimeException);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_STRING(_1, "error!", 1);
			zephir_call_method_p1_noret(_0, "__construct", _1);
			goto try_end_1;

		}

	try_end_1:
	do { } while(0);

	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_TryTest, testTry8) {

	zval *_0, *_1;

	ZEPHIR_MM_GROW();


	/* try_start_1: */

		ZEPHIR_INIT_VAR(_0);
		object_init_ex(_0, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(_1);
		ZVAL_STRING(_1, "error 1!", 1);
		zephir_call_method_p1_noret(_0, "__construct", _1);
		goto try_end_1;


	try_end_1:
	do { } while(0);

	ZEPHIR_THROW_EXCEPTION_STR(zend_exception_get_default(TSRMLS_C), "error 2!");
	return;

}
