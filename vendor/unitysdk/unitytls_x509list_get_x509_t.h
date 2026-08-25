#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509LIST_GET_X509_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CAAC0)
#define UNITYTLS_X509LIST_GET_X509_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CAB90)

	inline static constexpr unsigned int unitytls_x509list_get_x509_t_TypeDefinitionIndex = 29024;

	class unitytls_x509list_get_x509_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_GET_X509_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509_ref* Invoke(unitytls_x509list_ref* arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (unitytls_x509_ref*(*)(unitytls_x509list_ref*, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_GET_X509_T_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

