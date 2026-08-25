#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D510)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2D540)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2D550)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2D5B0)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2D5C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultPropertyAttribute_TypeDefinitionIndex = 29377;

	class DefaultPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::ComponentModel::DefaultPropertyAttribute* Default; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

