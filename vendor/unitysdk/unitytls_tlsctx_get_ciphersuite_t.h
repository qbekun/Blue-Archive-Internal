#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB8B0)
#define UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB980)

	inline static constexpr unsigned int unitytls_tlsctx_get_ciphersuite_t_TypeDefinitionIndex = 29038;

	class unitytls_tlsctx_get_ciphersuite_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_ciphersuite* Invoke(::System::Object** arg, ::System::Object** arg)
		{
			return (return (unitytls_ciphersuite*(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

