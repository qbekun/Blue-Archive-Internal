#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509VERIFY_CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C9D40)
#define UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x96C9E10)

	inline static constexpr unsigned int unitytls_x509verify_callback_TypeDefinitionIndex = 29004;

	class unitytls_x509verify_callback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509VERIFY_CALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509verify_result* Invoke(::System::Object** arg, unitytls_x509_ref* arg, unitytls_x509verify_result* arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(::System::Object**, unitytls_x509_ref*, unitytls_x509verify_result*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

