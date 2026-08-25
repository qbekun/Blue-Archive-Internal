#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x9B33370)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x9B33380)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B33390)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x9B333A0)
#define SYSTEM_COMPONENTMODEL_LICENSECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B333B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseContext_TypeDefinitionIndex = 29420;

	class LicenseContext : public Il2CppObject
	{
	public:
		::System::ComponentModel::LicenseUsageMode* get_UsageMode()
		{
			return (return (::System::ComponentModel::LicenseUsageMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GET_USAGEMODE_OFFSET))(nullptr);
		}

		::System::String* GetSavedLicenseKey(::System::Type* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSavedLicenseKey(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_SETSAVEDLICENSEKEY_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSECONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

