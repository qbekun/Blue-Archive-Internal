#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B2ED70)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2EDE0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2EE40)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2EEC0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPE_OFFSET UNITYSDK_OFFSET(0x9B2EF20)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPENAME_OFFSET UNITYSDK_OFFSET(0x9B2F0F0)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2F150)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2F240)
#define SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2F270)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ToolboxItemAttribute_TypeDefinitionIndex = 29383;

	class ToolboxItemAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _toolboxItemType; // 0x10
		::System::String* _toolboxItemTypeName; // 0x18
		::System::ComponentModel::ToolboxItemAttribute* Default; // 0x0
		::System::ComponentModel::ToolboxItemAttribute* None; // 0x8

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ToolboxItemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ToolboxItemTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GET_TOOLBOXITEMTYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TOOLBOXITEMATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

