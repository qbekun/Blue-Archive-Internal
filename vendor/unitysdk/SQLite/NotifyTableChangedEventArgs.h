#pragma once
#include "../unitysdk.h"

namespace SQLite { class TableMapping; }
namespace SQLite { class NotifyTableChangedAction; }

#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xA21070)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xA21080)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_TABLE_OFFSET UNITYSDK_OFFSET(0xA21090)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_TABLE_OFFSET UNITYSDK_OFFSET(0xA210A0)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1FD80)

namespace SQLite
{
	inline static constexpr unsigned int NotifyTableChangedEventArgs_TypeDefinitionIndex = 36591;

	class NotifyTableChangedEventArgs : public Il2CppObject
	{
	public:
		::SQLite::TableMapping* _Table_k__BackingField; // 0x10
		::SQLite::NotifyTableChangedAction* _Action_k__BackingField; // 0x18

		::System::Void set_Action(::SQLite::NotifyTableChangedAction* arg)
		{
			((::System::Void(*)(::SQLite::NotifyTableChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_ACTION_OFFSET))(arg, nullptr);
		}

		::SQLite::NotifyTableChangedAction* get_Action()
		{
			return (return (::SQLite::NotifyTableChangedAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

		::SQLite::TableMapping* get_Table()
		{
			return (return (::SQLite::TableMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void set_Table(::SQLite::TableMapping* arg)
		{
			((::System::Void(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_TABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::SQLite::TableMapping* arg, ::SQLite::NotifyTableChangedAction* arg)
		{
			((::System::Void(*)(::SQLite::TableMapping*, ::SQLite::NotifyTableChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

