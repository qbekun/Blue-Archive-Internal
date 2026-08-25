#pragma once
#include "unitysdk.h"

#define UNITYTLS_INTERFACE_STRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA350)

	inline static constexpr unsigned int unitytls_interface_struct_TypeDefinitionIndex = 29046;

	class unitytls_interface_struct : public Il2CppObject
	{
	public:
		::System::UInt64 UNITYTLS_INVALID_HANDLE; // 0x10
		unitytls_tlsctx_protocolrange* UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT; // 0x18
		unitytls_errorstate_create_t* unitytls_errorstate_create; // 0x20
		unitytls_errorstate_raise_error_t* unitytls_errorstate_raise_error; // 0x28
		unitytls_key_get_ref_t* unitytls_key_get_ref; // 0x30
		unitytls_key_parse_der_t* unitytls_key_parse_der; // 0x38
		unitytls_key_parse_pem_t* unitytls_key_parse_pem; // 0x40
		unitytls_key_free_t* unitytls_key_free; // 0x48
		unitytls_x509_export_der_t* unitytls_x509_export_der; // 0x50
		unitytls_x509list_get_ref_t* unitytls_x509list_get_ref; // 0x58
		unitytls_x509list_get_x509_t* unitytls_x509list_get_x509; // 0x60
		unitytls_x509list_create_t* unitytls_x509list_create; // 0x68
		unitytls_x509list_append_t* unitytls_x509list_append; // 0x70
		unitytls_x509list_append_der_t* unitytls_x509list_append_der; // 0x78
		unitytls_x509list_append_der_t* unitytls_x509list_append_pem; // 0x80
		unitytls_x509list_free_t* unitytls_x509list_free; // 0x88
		unitytls_x509verify_default_ca_t* unitytls_x509verify_default_ca; // 0x90
		unitytls_x509verify_explicit_ca_t* unitytls_x509verify_explicit_ca; // 0x98
		unitytls_tlsctx_create_server_t* unitytls_tlsctx_create_server; // 0xA0
		unitytls_tlsctx_create_client_t* unitytls_tlsctx_create_client; // 0xA8
		unitytls_tlsctx_server_require_client_authentication_t* unitytls_tlsctx_server_require_client_authentication; // 0xB0
		unitytls_tlsctx_set_certificate_callback_t* unitytls_tlsctx_set_certificate_callback; // 0xB8
		unitytls_tlsctx_set_trace_callback_t* unitytls_tlsctx_set_trace_callback; // 0xC0
		unitytls_tlsctx_set_x509verify_callback_t* unitytls_tlsctx_set_x509verify_callback; // 0xC8
		unitytls_tlsctx_set_supported_ciphersuites_t* unitytls_tlsctx_set_supported_ciphersuites; // 0xD0
		unitytls_tlsctx_get_ciphersuite_t* unitytls_tlsctx_get_ciphersuite; // 0xD8
		unitytls_tlsctx_get_protocol_t* unitytls_tlsctx_get_protocol; // 0xE0
		unitytls_tlsctx_process_handshake_t* unitytls_tlsctx_process_handshake; // 0xE8
		unitytls_tlsctx_read_t* unitytls_tlsctx_read; // 0xF0
		unitytls_tlsctx_write_t* unitytls_tlsctx_write; // 0xF8
		unitytls_tlsctx_notify_close_t* unitytls_tlsctx_notify_close; // 0x100
		unitytls_tlsctx_free_t* unitytls_tlsctx_free; // 0x108
		unitytls_random_generate_bytes_t* unitytls_random_generate_bytes; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_INTERFACE_STRUCT_.CTOR_OFFSET))(nullptr);
		}

	};

