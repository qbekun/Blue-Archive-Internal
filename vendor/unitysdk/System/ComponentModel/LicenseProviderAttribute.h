#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B350F0)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35120)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35150)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_LICENSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B34C80)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B35180)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B35240)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B35340)
#define SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B35350)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseProviderAttribute_TypeDefinitionIndex = 29423;

	class LicenseProviderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::LicenseProviderAttribute* Default; // 0x0
		::System::Type* _licenseProviderType; // 0x10
		::System::String* _licenseProviderName; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_LicenseProvider()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_LICENSEPROVIDER_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEPROVIDERATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

