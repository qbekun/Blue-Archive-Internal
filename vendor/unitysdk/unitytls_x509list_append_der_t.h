#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509LIST_APPEND_DER_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CAD80)
#define UNITYTLS_X509LIST_APPEND_DER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CAE50)

	inline static constexpr unsigned int unitytls_x509list_append_der_t_TypeDefinitionIndex = 29027;

	class unitytls_x509list_append_der_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_APPEND_DER_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_APPEND_DER_T_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

