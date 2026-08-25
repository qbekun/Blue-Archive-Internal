#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB3C0)
#define UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB490)

	inline static constexpr unsigned int unitytls_tlsctx_server_require_client_authentication_t_TypeDefinitionIndex = 29033;

	class unitytls_tlsctx_server_require_client_authentication_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, unitytls_x509list_ref* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, unitytls_x509list_ref*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SERVER_REQUIRE_CLIENT_AUTHENTICATION_T_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

