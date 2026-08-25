#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1FDD0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x9B1FDF0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1FE00)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1FEB0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B1FEC0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1FF30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerSerializationVisibilityAttribute_TypeDefinitionIndex = 29327;

	class DesignerSerializationVisibilityAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::DesignerSerializationVisibilityAttribute* Content; // 0x0
		::System::ComponentModel::DesignerSerializationVisibilityAttribute* Hidden; // 0x8
		::System::ComponentModel::DesignerSerializationVisibilityAttribute* Visible; // 0x10
		::System::ComponentModel::DesignerSerializationVisibilityAttribute* Default; // 0x18
		::System::ComponentModel::DesignerSerializationVisibility* _Visibility_k__BackingField; // 0x10

		::System::Void .ctor(::System::ComponentModel::DesignerSerializationVisibility* arg)
		{
			((::System::Void(*)(::System::ComponentModel::DesignerSerializationVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::DesignerSerializationVisibility* get_Visibility()
		{
			return (return (::System::ComponentModel::DesignerSerializationVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

