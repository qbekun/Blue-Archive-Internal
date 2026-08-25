#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2DB70)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2DBE0)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GET_INHERITANCELEVEL_OFFSET UNITYSDK_OFFSET(0x9B2DC00)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2DC10)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2DC70)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B2DC80)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B2DCF0)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2DDC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InheritanceAttribute_TypeDefinitionIndex = 29379;

	class InheritanceAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::InheritanceAttribute* Inherited; // 0x0
		::System::ComponentModel::InheritanceAttribute* InheritedReadOnly; // 0x8
		::System::ComponentModel::InheritanceAttribute* NotInherited; // 0x10
		::System::ComponentModel::InheritanceAttribute* Default; // 0x18
		::System::ComponentModel::InheritanceLevel* _InheritanceLevel_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::InheritanceLevel* arg)
		{
			((::System::Void(*)(::System::ComponentModel::InheritanceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::InheritanceLevel* get_InheritanceLevel()
		{
			return (return (::System::ComponentModel::InheritanceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GET_INHERITANCELEVEL_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

