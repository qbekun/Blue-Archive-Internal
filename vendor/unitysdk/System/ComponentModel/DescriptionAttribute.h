#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1F3E0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1F440)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9B1F470)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x9B1F480)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x9B1F490)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1F4A0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1F550)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B1F590)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1F600)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DescriptionAttribute_TypeDefinitionIndex = 29323;

	class DescriptionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::DescriptionAttribute* Default; // 0x0
		::System::String* _DescriptionValue_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DescriptionValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

