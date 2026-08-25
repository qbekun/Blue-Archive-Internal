#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteOpenFlags; }

#define SQLITE_SQLITECONNECTIONSTRING_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0xA210B0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0xA210C0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0xA210D0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0xA210E0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0xA210F0)
#define SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0xA21100)
#define SQLITE_SQLITECONNECTIONSTRING_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA21110)
#define SQLITE_SQLITECONNECTIONSTRING_GET_OPENFLAGS_OFFSET UNITYSDK_OFFSET(0xA21120)
#define SQLITE_SQLITECONNECTIONSTRING_GET_PREKEYACTION_OFFSET UNITYSDK_OFFSET(0xA21130)
#define SQLITE_SQLITECONNECTIONSTRING_GET_POSTKEYACTION_OFFSET UNITYSDK_OFFSET(0xA21140)
#define SQLITE_SQLITECONNECTIONSTRING_GET_VFSNAME_OFFSET UNITYSDK_OFFSET(0xA21150)
#define SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21160)
#define SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA211D0)
#define SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA15880)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionString_TypeDefinitionIndex = 36593;

	class SQLiteConnectionString : public Il2CppObject
	{
	public:
		::System::String* DateTimeSqliteDefaultFormat; // 0x0
		::System::String* _UniqueKey_k__BackingField; // 0x10
		::System::String* _DatabasePath_k__BackingField; // 0x18
		::System::Boolean _StoreDateTimeAsTicks_k__BackingField; // 0x20
		::System::Boolean _StoreTimeSpanAsTicks_k__BackingField; // 0x21
		::System::String* _DateTimeStringFormat_k__BackingField; // 0x28
		::System::Globalization::DateTimeStyles* _DateTimeStyle_k__BackingField; // 0x30
		::System::Object* _Key_k__BackingField; // 0x38
		::SQLite::SQLiteOpenFlags* _OpenFlags_k__BackingField; // 0x40
		Il2CppObject* _PreKeyAction_k__BackingField; // 0x48
		Il2CppObject* _PostKeyAction_k__BackingField; // 0x50
		::System::String* _VfsName_k__BackingField; // 0x58

		::System::String* get_UniqueKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_UNIQUEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DatabasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATABASEPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_STOREDATETIMEASTICKS_OFFSET))(nullptr);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_STORETIMESPANASTICKS_OFFSET))(nullptr);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTRINGFORMAT_OFFSET))(nullptr);
		}

		::System::Globalization::DateTimeStyles* get_DateTimeStyle()
		{
			return (return (::System::Globalization::DateTimeStyles*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_DATETIMESTYLE_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_KEY_OFFSET))(nullptr);
		}

		::SQLite::SQLiteOpenFlags* get_OpenFlags()
		{
			return (return (::SQLite::SQLiteOpenFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_OPENFLAGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreKeyAction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_PREKEYACTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_PostKeyAction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_POSTKEYACTION_OFFSET))(nullptr);
		}

		::System::String* get_VfsName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_GET_VFSNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Object*, Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET))(str, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::SQLite::SQLiteOpenFlags* arg, ::System::Boolean arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::SQLite::SQLiteOpenFlags*, ::System::Boolean, ::System::Object*, Il2CppObject*, Il2CppObject*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONSTRING_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, str, str, arg, nullptr);
		}

	};
}

