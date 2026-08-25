#pragma once
#include "unitysdk.h"

#define UNITYTLS_X509_EXPORT_DER_T_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CA8E0)
#define UNITYTLS_X509_EXPORT_DER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CA9B0)

	inline static constexpr unsigned int unitytls_x509_export_der_t_TypeDefinitionIndex = 29022;

	class unitytls_x509_export_der_t : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509_EXPORT_DER_T_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(unitytls_x509_ref* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(unitytls_x509_ref*, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYTLS_X509_EXPORT_DER_T_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

