#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class UIWeekDungeonLobby_Chase;
class UIWeekDungeonLobby;

#define WEEKDUNGEONCATEGORYUIOPENER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x26BF0B0)
#define WEEKDUNGEONCATEGORYUIOPENER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x26BF0C0)
#define WEEKDUNGEONCATEGORYUIOPENER_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x26BF0D0)
#define WEEKDUNGEONCATEGORYUIOPENER_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x26BF0E0)
#define WEEKDUNGEONCATEGORYUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BF0F0)
#define WEEKDUNGEONCATEGORYUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BF130)
#define WEEKDUNGEONCATEGORYUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BF170)
#define WEEKDUNGEONCATEGORYUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BF190)
#define WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_0_OFFSET UNITYSDK_OFFSET(0x26BF370)
#define WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_1_OFFSET UNITYSDK_OFFSET(0x26BF3A0)
#define WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_2_OFFSET UNITYSDK_OFFSET(0x26BF3C0)
#define WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_3_OFFSET UNITYSDK_OFFSET(0x26BF3F0)

	inline static constexpr unsigned int WeekDungeonCategoryUIOpener_TypeDefinitionIndex = 6933;

	class WeekDungeonCategoryUIOpener : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _Type_k__BackingField; // 0x18
		::System::Action* _Callback_k__BackingField; // 0x20

		::FlatData::ContentType* get_Type()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_Callback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_SET_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__11_0(UIWeekDungeonLobby_Chase* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby_Chase*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__11_1(UIWeekDungeonLobby_Chase* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby_Chase*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__11_2(UIWeekDungeonLobby* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_2_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__11_3(UIWeekDungeonLobby* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONCATEGORYUIOPENER__OPENUI_B__11_3_OFFSET))(arg, nullptr);
		}

	};

