#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509LIST_APPEND_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CAC90)
#define UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CAD60)

	inline static constexpr unsigned int unitytls_x509list_append_t_TypeDefinitionIndex = 29026;

	class unitytls_x509list_append_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_APPEND_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, unitytls_x509_ref* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, unitytls_x509_ref*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

