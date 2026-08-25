#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D290)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D2A0)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2D2D0)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2D2E0)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2D340)
#define SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2D350)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultBindingPropertyAttribute_TypeDefinitionIndex = 29375;

	class DefaultBindingPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::ComponentModel::DefaultBindingPropertyAttribute* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTBINDINGPROPERTYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

