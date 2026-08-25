#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9B4B080)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0x9B4B190)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ASYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x9B4B270)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9B4B350)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9B4B430)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9B4B510)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DESIGN_OFFSET UNITYSDK_OFFSET(0x9B4B660)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DRAGDROP_OFFSET UNITYSDK_OFFSET(0x9B4B740)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FOCUS_OFFSET UNITYSDK_OFFSET(0x9B4B820)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9B4B900)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9B4B9E0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9B4BAC0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_MOUSE_OFFSET UNITYSDK_OFFSET(0x9B4BBA0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_WINDOWSTYLE_OFFSET UNITYSDK_OFFSET(0x9B4BC80)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4B600)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4B160)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9B4BD60)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B4BDB0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B4BEF0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x9B4BF60)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B4C1F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CategoryAttribute_TypeDefinitionIndex = 29487;

	class CategoryAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::CategoryAttribute* appearance; // 0x0
		::System::ComponentModel::CategoryAttribute* asynchronous; // 0x8
		::System::ComponentModel::CategoryAttribute* behavior; // 0x10
		::System::ComponentModel::CategoryAttribute* data; // 0x18
		::System::ComponentModel::CategoryAttribute* design; // 0x20
		::System::ComponentModel::CategoryAttribute* action; // 0x28
		::System::ComponentModel::CategoryAttribute* format; // 0x30
		::System::ComponentModel::CategoryAttribute* layout; // 0x38
		::System::ComponentModel::CategoryAttribute* mouse; // 0x40
		::System::ComponentModel::CategoryAttribute* key; // 0x48
		::System::ComponentModel::CategoryAttribute* focus; // 0x50
		::System::ComponentModel::CategoryAttribute* windowStyle; // 0x58
		::System::ComponentModel::CategoryAttribute* dragDrop; // 0x60
		::System::ComponentModel::CategoryAttribute* defAttr; // 0x68
		::System::Boolean localized; // 0x10
		::System::String* categoryValue; // 0x18

		::System::ComponentModel::CategoryAttribute* get_Action()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ACTION_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Appearance()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_APPEARANCE_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Asynchronous()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ASYNCHRONOUS_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Behavior()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Data()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DATA_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Default()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Design()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DESIGN_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_DragDrop()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DRAGDROP_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Focus()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FOCUS_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Format()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Key()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_KEY_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Layout()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_Mouse()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_MOUSE_OFFSET))(nullptr);
		}

		::System::ComponentModel::CategoryAttribute* get_WindowStyle()
		{
			return (return (::System::ComponentModel::CategoryAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_WINDOWSTYLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Category()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* GetLocalizedString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

	};
}

