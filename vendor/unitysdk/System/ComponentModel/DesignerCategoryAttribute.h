#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1F9A0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1FA00)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9B1FA30)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1FA40)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1FAB0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B1FAE0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B1FB80)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1FBD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerCategoryAttribute_TypeDefinitionIndex = 29325;

	class DesignerCategoryAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::DesignerCategoryAttribute* Component; // 0x0
		::System::ComponentModel::DesignerCategoryAttribute* Default; // 0x8
		::System::ComponentModel::DesignerCategoryAttribute* Form; // 0x10
		::System::ComponentModel::DesignerCategoryAttribute* Generic; // 0x18
		::System::String* _Category_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Category()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

