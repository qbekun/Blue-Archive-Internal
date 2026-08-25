#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B36120)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B36190)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET UNITYSDK_OFFSET(0x9B36210)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DISPLAYMEMBER_OFFSET UNITYSDK_OFFSET(0x9B36220)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_VALUEMEMBER_OFFSET UNITYSDK_OFFSET(0x9B36230)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_LOOKUPMEMBER_OFFSET UNITYSDK_OFFSET(0x9B36240)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B36250)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B362F0)
#define SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B36300)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LookupBindingPropertiesAttribute_TypeDefinitionIndex = 29432;

	class LookupBindingPropertiesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _DataSource_k__BackingField; // 0x10
		::System::String* _DisplayMember_k__BackingField; // 0x18
		::System::String* _ValueMember_k__BackingField; // 0x20
		::System::String* _LookupMember_k__BackingField; // 0x28
		::System::ComponentModel::LookupBindingPropertiesAttribute* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		::System::String* get_DataSource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DATASOURCE_OFFSET))(nullptr);
		}

		::System::String* get_DisplayMember()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_DISPLAYMEMBER_OFFSET))(nullptr);
		}

		::System::String* get_ValueMember()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_VALUEMEMBER_OFFSET))(nullptr);
		}

		::System::String* get_LookupMember()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GET_LOOKUPMEMBER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOOKUPBINDINGPROPERTIESATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

