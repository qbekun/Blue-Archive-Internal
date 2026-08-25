#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509LIST_GET_REF_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA9E0)
#define UNITYTLS_X509LIST_GET_REF_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CAAB0)

	inline static constexpr unsigned int unitytls_x509list_get_ref_t_TypeDefinitionIndex = 29023;

	class unitytls_x509list_get_ref_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_GET_REF_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509list_ref* Invoke(::System::Object** arg, ::System::Object** arg)
		{
			return (return (unitytls_x509list_ref*(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_GET_REF_T_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

