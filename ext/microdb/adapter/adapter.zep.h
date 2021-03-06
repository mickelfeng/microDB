
extern zend_class_entry *microdb_adapter_adapter_ce;

ZEPHIR_INIT_CLASS(Microdb_Adapter_Adapter);

PHP_METHOD(Microdb_Adapter_Adapter, getError);
PHP_METHOD(Microdb_Adapter_Adapter, getPrefix);
PHP_METHOD(Microdb_Adapter_Adapter, setPrefix);
PHP_METHOD(Microdb_Adapter_Adapter, connect);
PHP_METHOD(Microdb_Adapter_Adapter, parseConfig);
PHP_METHOD(Microdb_Adapter_Adapter, dbVersion);
PHP_METHOD(Microdb_Adapter_Adapter, error);

ZEND_BEGIN_ARG_INFO_EX(arginfo_microdb_adapter_adapter_setprefix, 0, 0, 1)
	ZEND_ARG_INFO(0, prefix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_microdb_adapter_adapter_connect, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, config, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_microdb_adapter_adapter_parseconfig, 0, 0, 1)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(microdb_adapter_adapter_method_entry) {
	PHP_ME(Microdb_Adapter_Adapter, getError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Microdb_Adapter_Adapter, getPrefix, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Microdb_Adapter_Adapter, setPrefix, arginfo_microdb_adapter_adapter_setprefix, ZEND_ACC_PUBLIC)
	PHP_ME(Microdb_Adapter_Adapter, connect, arginfo_microdb_adapter_adapter_connect, ZEND_ACC_ABSTRACT|ZEND_ACC_PROTECTED)
	PHP_ME(Microdb_Adapter_Adapter, parseConfig, arginfo_microdb_adapter_adapter_parseconfig, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC)
	PHP_ME(Microdb_Adapter_Adapter, dbVersion, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PROTECTED)
	PHP_ME(Microdb_Adapter_Adapter, error, NULL, ZEND_ACC_ABSTRACT|ZEND_ACC_PROTECTED)
	PHP_FE_END
};
