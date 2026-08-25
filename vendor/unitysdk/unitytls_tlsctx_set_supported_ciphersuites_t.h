#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB7B0)
#define UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB880)

	inline static constexpr unsigned int unitytls_tlsctx_set_supported_ciphersuites_t_TypeDefinitionIndex = 29037;

	class unitytls_tlsctx_set_supported_ciphersuites_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_SUPPORTED_CIPHERSUITES_T_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

