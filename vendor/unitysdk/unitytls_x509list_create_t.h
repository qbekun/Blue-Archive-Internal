#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509LIST_CREATE_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CABB0)
#define UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CAC80)

	inline static constexpr unsigned int unitytls_x509list_create_t_TypeDefinitionIndex = 29025;

	class unitytls_x509list_create_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_CREATE_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** Invoke(::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET))(arg, nullptr);
		}

	};

