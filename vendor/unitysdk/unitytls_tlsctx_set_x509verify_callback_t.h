#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CB6B0)
#define UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB780)

	inline static constexpr unsigned int unitytls_tlsctx_set_x509verify_callback_t_TypeDefinitionIndex = 29036;

	class unitytls_tlsctx_set_x509verify_callback_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, unitytls_tlsctx_x509verify_callback* arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, unitytls_tlsctx_x509verify_callback*, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_SET_X509VERIFY_CALLBACK_T_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

