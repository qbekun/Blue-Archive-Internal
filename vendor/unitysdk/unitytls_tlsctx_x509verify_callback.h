#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA260)
#define UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA330)

	inline static constexpr unsigned int unitytls_tlsctx_x509verify_callback_TypeDefinitionIndex = 29014;

	class unitytls_tlsctx_x509verify_callback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509verify_result* Invoke(::System::Object** arg, unitytls_x509list_ref* arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(::System::Object**, unitytls_x509list_ref*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

