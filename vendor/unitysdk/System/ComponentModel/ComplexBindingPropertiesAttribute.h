#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B250C0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B250D0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B25100)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0x9B25150)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATAMEMBER_OFFSET UNITYSDK_OFFSET(0x9B25160)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B25170)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B251E0)
#define SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B251F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComplexBindingPropertiesAttribute_TypeDefinitionIndex = 29362;

	class ComplexBindingPropertiesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _DataSource_k__BackingField; // 0x10
		::System::String* _DataMember_k__BackingField; // 0x18
		::System::ComponentModel::ComplexBindingPropertiesAttribute* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_DataSource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET))(nullptr);
		}

		::System::String* get_DataMember()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GET_DATAMEMBER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPLEXBINDINGPROPERTIESATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

