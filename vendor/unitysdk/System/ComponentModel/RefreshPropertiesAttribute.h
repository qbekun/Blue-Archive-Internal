#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7C020)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GET_REFRESHPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B7C040)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7C050)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7C0A0)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B7C0B0)
#define SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7C120)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshPropertiesAttribute_TypeDefinitionIndex = 29532;

	class RefreshPropertiesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::RefreshPropertiesAttribute* All; // 0x0
		::System::ComponentModel::RefreshPropertiesAttribute* Repaint; // 0x8
		::System::ComponentModel::RefreshPropertiesAttribute* Default; // 0x10
		::System::ComponentModel::RefreshProperties* refresh; // 0x10

		::System::Void .ctor(::System::ComponentModel::RefreshProperties* arg)
		{
			((::System::Void(*)(::System::ComponentModel::RefreshProperties*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::RefreshProperties* get_RefreshProperties()
		{
			return (return (::System::ComponentModel::RefreshProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GET_REFRESHPROPERTIES_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHPROPERTIESATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

