#pragma once
#include "unitysdk.h"

#define UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA140)
#define UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA210)

	inline static constexpr unsigned int unitytls_tlsctx_certificate_callback_TypeDefinitionIndex = 29013;

	class unitytls_tlsctx_certificate_callback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

