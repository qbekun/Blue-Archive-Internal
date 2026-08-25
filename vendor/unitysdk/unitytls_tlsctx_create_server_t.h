#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_CREATE_SERVER_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB180)
#define UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB250)

	inline static constexpr unsigned int unitytls_tlsctx_create_server_t_TypeDefinitionIndex = 29031;

	class unitytls_tlsctx_create_server_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CREATE_SERVER_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Invoke(unitytls_tlsctx_protocolrange* arg, unitytls_tlsctx_callbacks* arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::Object** arg)
		{
			return (return (::System::Object**(*)(unitytls_tlsctx_protocolrange*, unitytls_tlsctx_callbacks*, ::System::UInt64, ::System::UInt64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

