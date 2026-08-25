#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteConnection; }
namespace SQLite { class TableMapping; }

#define SQLITE_SQLITECOMMAND_GET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0xA247B0)
#define SQLITE_SQLITECOMMAND_SET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0xA247C0)
#define SQLITE_SQLITECOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19DB0)
#define SQLITE_SQLITECOMMAND_EXECUTENONQUERY_OFFSET UNITYSDK_OFFSET(0xA1A230)
#define SQLITE_SQLITECOMMAND_EXECUTEDEFERREDQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_EXECUTEQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_EXECUTEQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_ONINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xA24990)
#define SQLITE_SQLITECOMMAND_EXECUTEDEFERREDQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_EXECUTESCALAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_EXECUTEQUERYSCALARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECOMMAND_BIND_OFFSET UNITYSDK_OFFSET(0xA1A130)
#define SQLITE_SQLITECOMMAND_BIND_OFFSET UNITYSDK_OFFSET(0xA19F10)
#define SQLITE_SQLITECOMMAND_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA249B0)
#define SQLITE_SQLITECOMMAND_PREPARE_OFFSET UNITYSDK_OFFSET(0xA247D0)
#define SQLITE_SQLITECOMMAND_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA24890)
#define SQLITE_SQLITECOMMAND_BINDALL_OFFSET UNITYSDK_OFFSET(0xA24DE0)
#define SQLITE_SQLITECOMMAND_BINDPARAMETER_OFFSET UNITYSDK_OFFSET(0xA251D0)
#define SQLITE_SQLITECOMMAND_READCOL_OFFSET UNITYSDK_OFFSET(0xA25F50)
#define SQLITE_SQLITECOMMAND_CREATEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0xA27290)
#define SQLITE_SQLITECOMMAND_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA273F0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteCommand_TypeDefinitionIndex = 36622;

	class SQLiteCommand : public Il2CppObject
	{
	public:
		::SQLite::SQLiteConnection* _conn; // 0x10
		Il2CppObject* _bindings; // 0x18
		::System::String* _CommandText_k__BackingField; // 0x20
		::System::Int32 NegativePointer; // 0x0

		::System::String* get_CommandText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_GET_COMMANDTEXT_OFFSET))(nullptr);
		}

		::System::Void set_CommandText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_SET_COMMANDTEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 ExecuteNonQuery()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTENONQUERY_OFFSET))(nullptr);
		}

		Il2CppObject* ExecuteDeferredQuery()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTEDEFERREDQUERY_OFFSET))(nullptr);
		}

		Il2CppObject* ExecuteQuery()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTEQUERY_OFFSET))(nullptr);
		}

		Il2CppObject* ExecuteQuery(::SQLite::TableMapping* arg)
		{
			return (return (Il2CppObject*(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTEQUERY_OFFSET))(arg, nullptr);
		}

		::System::Void OnInstanceCreated(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_ONINSTANCECREATED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteDeferredQuery(::SQLite::TableMapping* arg)
		{
			return (return (Il2CppObject*(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTEDEFERREDQUERY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteScalar()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTESCALAR_OFFSET))(nullptr);
		}

		Il2CppObject* ExecuteQueryScalars()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_EXECUTEQUERYSCALARS_OFFSET))(nullptr);
		}

		::System::Void Bind(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BIND_OFFSET))(str, arg, nullptr);
		}

		::System::Void Bind(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BIND_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 Prepare()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_PREPARE_OFFSET))(nullptr);
		}

		::System::Void Finalize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_FINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void BindAll(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDALL_OFFSET))(arg, nullptr);
		}

		::System::Void BindParameter(::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Object*, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDPARAMETER_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Object* ReadCol(::System::Int32 arg, ::System::Int32 arg, ColType* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Int32, ColType*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_READCOL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* CreateQueryString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_CREATEQUERYSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_.CCTOR_OFFSET))(nullptr);
		}

	};
}

