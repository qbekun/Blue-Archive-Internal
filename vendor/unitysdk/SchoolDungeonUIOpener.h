#pragma once
#include "unitysdk.h"

namespace FlatData { class SchoolDungeonType; }
class UISchoolDungeonStageSelect;

#define SCHOOLDUNGEONUIOPENER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C1BB0)
#define SCHOOLDUNGEONUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C1BC0)
#define SCHOOLDUNGEONUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C1CA0)
#define SCHOOLDUNGEONUIOPENER__OPENUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x26C1CC0)
#define SCHOOLDUNGEONUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C1D70)
#define SCHOOLDUNGEONUIOPENER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C1D80)

	inline static constexpr unsigned int SchoolDungeonUIOpener_TypeDefinitionIndex = 6951;

	class SchoolDungeonUIOpener : public Il2CppObject
	{
	public:
		::FlatData::SchoolDungeonType* _Type_k__BackingField; // 0x18

		::System::Void set_Type(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__6_0(UISchoolDungeonStageSelect* arg)
		{
			((::System::Void(*)(UISchoolDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER__OPENUI_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::FlatData::SchoolDungeonType* get_Type()
		{
			return ((::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONUIOPENER_GET_TYPE_OFFSET))(nullptr);
		}

	};

