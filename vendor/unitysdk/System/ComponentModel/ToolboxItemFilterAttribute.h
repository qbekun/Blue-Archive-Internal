#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48820)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B488A0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERSTRING_OFFSET UNITYSDK_OFFSET(0x9B48920)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x9B48930)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B48940)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B489B0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B48A80)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_MATCH_OFFSET UNITYSDK_OFFSET(0x9B48AB0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B48B20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ToolboxItemFilterAttribute_TypeDefinitionIndex = 29461;

	class ToolboxItemFilterAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _typeId; // 0x10
		::System::String* _FilterString_k__BackingField; // 0x18
		::System::ComponentModel::ToolboxItemFilterType* _FilterType_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::ComponentModel::ToolboxItemFilterType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::ComponentModel::ToolboxItemFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_FilterString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERSTRING_OFFSET))(nullptr);
		}

		::System::ComponentModel::ToolboxItemFilterType* get_FilterType()
		{
			return (return (::System::ComponentModel::ToolboxItemFilterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_FILTERTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_MATCH_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMFILTERATTRIBUTE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

