#pragma once
#include "unitysdk.h"

class UIManager;
namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
class UILobby;
class UIWork;
class UIWeekDungeonLobby;
class UIWeekDungeonLobby_Chase;
namespace FlatData { class WeekDungeonType; }
class UIWeekDungeonStageSelect;

#define <>C__DISPLAYCLASS184_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x26952A0)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__1_OFFSET UNITYSDK_OFFSET(0x26952B0)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__3_OFFSET UNITYSDK_OFFSET(0x2695360)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__5_OFFSET UNITYSDK_OFFSET(0x2695410)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__7_OFFSET UNITYSDK_OFFSET(0x26954D0)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__8_OFFSET UNITYSDK_OFFSET(0x2695590)
#define <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__10_OFFSET UNITYSDK_OFFSET(0x26955B0)

	inline static constexpr unsigned int <>c__DisplayClass184_0_TypeDefinitionIndex = 6802;

	class <>c__DisplayClass184_0 : public Il2CppObject
	{
	public:
		UIManager* __4__this; // 0x10
		::System::Boolean addLobby; // 0x18
		::System::Boolean addUIWork; // 0x19
		::FlatData::ContentType* category; // 0x1C
		::System::Boolean addWeekDungeonLobby; // 0x20
		::System::Boolean addChaseDungeonLobby; // 0x21
		::MX::Data::Excel::WeekDungeonExcel* weekDungeonExcel; // 0x28
		Il2CppObject* types; // 0x38
		::System::Boolean addStageSelect; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _co_AddStackWeekDungeonUIs_b__1(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _co_AddStackWeekDungeonUIs_b__3(UIWork* arg)
		{
			((::System::Void(*)(UIWork*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__3_OFFSET))(arg, nullptr);
		}

		::System::Void _co_AddStackWeekDungeonUIs_b__5(UIWeekDungeonLobby* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__5_OFFSET))(arg, nullptr);
		}

		::System::Void _co_AddStackWeekDungeonUIs_b__7(UIWeekDungeonLobby_Chase* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby_Chase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__7_OFFSET))(arg, nullptr);
		}

		::System::Boolean _co_AddStackWeekDungeonUIs_b__8(::FlatData::WeekDungeonType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__8_OFFSET))(arg, nullptr);
		}

		::System::Void _co_AddStackWeekDungeonUIs_b__10(UIWeekDungeonStageSelect* arg)
		{
			((::System::Void(*)(UIWeekDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS184_0__CO_ADDSTACKWEEKDUNGEONUIS_B__10_OFFSET))(arg, nullptr);
		}

	};

