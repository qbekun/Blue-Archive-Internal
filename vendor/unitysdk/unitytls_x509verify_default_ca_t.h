#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509VERIFY_DEFAULT_CA_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CAF60)
#define UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CB030)

	inline static constexpr unsigned int unitytls_x509verify_default_ca_t_TypeDefinitionIndex = 29029;

	class unitytls_x509verify_default_ca_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509VERIFY_DEFAULT_CA_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		unitytls_x509verify_result* Invoke(unitytls_x509list_ref* arg, ::System::Object** arg, ::System::Int32 arg, unitytls_x509verify_callback* arg, ::System::Object** arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(unitytls_x509list_ref*, ::System::Object**, ::System::Int32, unitytls_x509verify_callback*, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

