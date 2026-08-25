#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_CREATE_CLIENT_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB2A0)
#define UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB370)

	inline static constexpr unsigned int unitytls_tlsctx_create_client_t_TypeDefinitionIndex = 29032;

	class unitytls_tlsctx_create_client_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CREATE_CLIENT_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Invoke(unitytls_tlsctx_protocolrange* arg, unitytls_tlsctx_callbacks* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Object**(*)(unitytls_tlsctx_protocolrange*, unitytls_tlsctx_callbacks*, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

