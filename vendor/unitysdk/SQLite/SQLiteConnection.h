#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteOpenFlags; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class TableMapping; }
namespace SQLite { class CreateFlags; }
namespace SQLite { class CreateTableResult; }
namespace SQLite { class CreateTablesResult; }
namespace SQLite { class SQLiteCommand; }
namespace SQLite { class PreparedSqlLiteInsertCommand; }
namespace SQLite { class NotifyTableChangedAction; }

#define SQLITE_SQLITECONNECTION_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA156A0)
#define SQLITE_SQLITECONNECTION_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA156B0)
#define SQLITE_SQLITECONNECTION_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0xA156C0)
#define SQLITE_SQLITECONNECTION_SET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0xA156D0)
#define SQLITE_SQLITECONNECTION_GET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA156E0)
#define SQLITE_SQLITECONNECTION_SET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA156F0)
#define SQLITE_SQLITECONNECTION_GET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0xA15700)
#define SQLITE_SQLITECONNECTION_SET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0xA15710)
#define SQLITE_SQLITECONNECTION_GET_TRACE_OFFSET UNITYSDK_OFFSET(0xA15720)
#define SQLITE_SQLITECONNECTION_SET_TRACE_OFFSET UNITYSDK_OFFSET(0xA15730)
#define SQLITE_SQLITECONNECTION_GET_TRACER_OFFSET UNITYSDK_OFFSET(0xA15740)
#define SQLITE_SQLITECONNECTION_SET_TRACER_OFFSET UNITYSDK_OFFSET(0xA15750)
#define SQLITE_SQLITECONNECTION_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0xA15760)
#define SQLITE_SQLITECONNECTION_SET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0xA15770)
#define SQLITE_SQLITECONNECTION_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0xA15780)
#define SQLITE_SQLITECONNECTION_SET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0xA15790)
#define SQLITE_SQLITECONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0xA157A0)
#define SQLITE_SQLITECONNECTION_SET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0xA157B0)
#define SQLITE_SQLITECONNECTION_GET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0xA157C0)
#define SQLITE_SQLITECONNECTION_SET_DATETIMESTYLE_OFFSET UNITYSDK_OFFSET(0xA157D0)
#define SQLITE_SQLITECONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA157E0)
#define SQLITE_SQLITECONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16050)
#define SQLITE_SQLITECONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA15B00)
#define SQLITE_SQLITECONNECTION_ENABLEWRITEAHEADLOGGING_OFFSET UNITYSDK_OFFSET(0xA168A0)
#define SQLITE_SQLITECONNECTION_QUOTE_OFFSET UNITYSDK_OFFSET(0xA16970)
#define SQLITE_SQLITECONNECTION_SETKEY_OFFSET UNITYSDK_OFFSET(0xA16400)
#define SQLITE_SQLITECONNECTION_SETKEY_OFFSET UNITYSDK_OFFSET(0xA165D0)
#define SQLITE_SQLITECONNECTION_ENABLELOADEXTENSION_OFFSET UNITYSDK_OFFSET(0xA16A00)
#define SQLITE_SQLITECONNECTION_GETNULLTERMINATEDUTF8_OFFSET UNITYSDK_OFFSET(0xA16170)
#define SQLITE_SQLITECONNECTION_GET_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA16C70)
#define SQLITE_SQLITECONNECTION_SET_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA162E0)
#define SQLITE_SQLITECONNECTION_GET_TABLEMAPPINGS_OFFSET UNITYSDK_OFFSET(0xA16D00)
#define SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET UNITYSDK_OFFSET(0xA16EB0)
#define SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET UNITYSDK_OFFSET(0xA179F0)
#define SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET UNITYSDK_OFFSET(0xA17CA0)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET UNITYSDK_OFFSET(0xA19750)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0xA194C0)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0xA198A0)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0xA19970)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0xA199E0)
#define SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_GETTABLEINFO_OFFSET UNITYSDK_OFFSET(0xA18EB0)
#define SQLITE_SQLITECONNECTION_MIGRATETABLE_OFFSET UNITYSDK_OFFSET(0xA18FA0)
#define SQLITE_SQLITECONNECTION_NEWCOMMAND_OFFSET UNITYSDK_OFFSET(0xA19D50)
#define SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET UNITYSDK_OFFSET(0xA19E60)
#define SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET UNITYSDK_OFFSET(0xA19F20)
#define SQLITE_SQLITECONNECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA17AD0)
#define SQLITE_SQLITECONNECTION_EXECUTESCALAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_QUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_QUERYSCALARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_QUERY_OFFSET UNITYSDK_OFFSET(0xA1A4E0)
#define SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET UNITYSDK_OFFSET(0xA1A550)
#define SQLITE_SQLITECONNECTION_TABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_GET_OFFSET UNITYSDK_OFFSET(0xA1A5C0)
#define SQLITE_SQLITECONNECTION_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_FIND_OFFSET UNITYSDK_OFFSET(0xA1A6D0)
#define SQLITE_SQLITECONNECTION_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET UNITYSDK_OFFSET(0xA1A7E0)
#define SQLITE_SQLITECONNECTION_GET_ISINTRANSACTION_OFFSET UNITYSDK_OFFSET(0xA1A870)
#define SQLITE_SQLITECONNECTION_BEGINTRANSACTION_OFFSET UNITYSDK_OFFSET(0xA1A880)
#define SQLITE_SQLITECONNECTION_SAVETRANSACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xA1AC40)
#define SQLITE_SQLITECONNECTION_ROLLBACK_OFFSET UNITYSDK_OFFSET(0xA1AEB0)
#define SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET UNITYSDK_OFFSET(0xA1AEC0)
#define SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET UNITYSDK_OFFSET(0xA1AAB0)
#define SQLITE_SQLITECONNECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0xA1B070)
#define SQLITE_SQLITECONNECTION_DOSAVEPOINTEXECUTE_OFFSET UNITYSDK_OFFSET(0xA1AED0)
#define SQLITE_SQLITECONNECTION_COMMIT_OFFSET UNITYSDK_OFFSET(0xA1B220)
#define SQLITE_SQLITECONNECTION_RUNINTRANSACTION_OFFSET UNITYSDK_OFFSET(0xA1B420)
#define SQLITE_SQLITECONNECTION_INSERTALL_OFFSET UNITYSDK_OFFSET(0xA1B510)
#define SQLITE_SQLITECONNECTION_INSERTALL_OFFSET UNITYSDK_OFFSET(0xA1BA00)
#define SQLITE_SQLITECONNECTION_INSERTALL_OFFSET UNITYSDK_OFFSET(0xA1BEC0)
#define SQLITE_SQLITECONNECTION_INSERT_OFFSET UNITYSDK_OFFSET(0xA1B9A0)
#define SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET UNITYSDK_OFFSET(0xA1CAA0)
#define SQLITE_SQLITECONNECTION_INSERT_OFFSET UNITYSDK_OFFSET(0xA1C350)
#define SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET UNITYSDK_OFFSET(0xA1CB00)
#define SQLITE_SQLITECONNECTION_INSERT_OFFSET UNITYSDK_OFFSET(0xA1BE80)
#define SQLITE_SQLITECONNECTION_INSERT_OFFSET UNITYSDK_OFFSET(0xA1C4C0)
#define SQLITE_SQLITECONNECTION_GETINSERTCOMMAND_OFFSET UNITYSDK_OFFSET(0xA1CD60)
#define SQLITE_SQLITECONNECTION_CREATEINSERTCOMMAND_OFFSET UNITYSDK_OFFSET(0xA1D7A0)
#define SQLITE_SQLITECONNECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA1DD90)
#define SQLITE_SQLITECONNECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA1DDD0)
#define SQLITE_SQLITECONNECTION_UPDATEALL_OFFSET UNITYSDK_OFFSET(0xA1E490)
#define SQLITE_SQLITECONNECTION_DELETE_OFFSET UNITYSDK_OFFSET(0xA1E8F0)
#define SQLITE_SQLITECONNECTION_DELETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_DELETE_OFFSET UNITYSDK_OFFSET(0xA1EAC0)
#define SQLITE_SQLITECONNECTION_DELETEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_SQLITECONNECTION_DELETEALL_OFFSET UNITYSDK_OFFSET(0xA1EC70)
#define SQLITE_SQLITECONNECTION_BACKUP_OFFSET UNITYSDK_OFFSET(0xA1ED70)
#define SQLITE_SQLITECONNECTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1F5A0)
#define SQLITE_SQLITECONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1F670)
#define SQLITE_SQLITECONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0xA1F6D0)
#define SQLITE_SQLITECONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1F6F0)
#define SQLITE_SQLITECONNECTION_ONTABLECHANGED_OFFSET UNITYSDK_OFFSET(0xA1D6C0)
#define SQLITE_SQLITECONNECTION_ADD_TABLECHANGED_OFFSET UNITYSDK_OFFSET(0xA1FDF0)
#define SQLITE_SQLITECONNECTION_REMOVE_TABLECHANGED_OFFSET UNITYSDK_OFFSET(0xA1FE90)
#define SQLITE_SQLITECONNECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1FF30)
#define SQLITE_SQLITECONNECTION__CREATETABLE_B__70_0_OFFSET UNITYSDK_OFFSET(0xA1FFF0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnection_TypeDefinitionIndex = 36590;

	class SQLiteConnection : public Il2CppObject
	{
	public:
		::System::Boolean _open; // 0x10
		::System::TimeSpan* _busyTimeout; // 0x18
		Il2CppObject* _mappings; // 0x0
		::System::Diagnostics::Stopwatch* _sw; // 0x20
		::System::Int64 _elapsedMilliseconds; // 0x28
		::System::Int32 _transactionDepth; // 0x30
		::System::Random* _rand; // 0x38
		::System::Int32 _Handle_k__BackingField; // 0x40
		::System::Int32 NullHandle; // 0x8
		::System::Int32 NullBackupHandle; // 0x10
		::System::String* _DatabasePath_k__BackingField; // 0x48
		::System::Int32 _LibVersionNumber_k__BackingField; // 0x50
		::System::Boolean _TimeExecution_k__BackingField; // 0x54
		::System::Boolean _Trace_k__BackingField; // 0x55
		Il2CppObject* _Tracer_k__BackingField; // 0x58
		::System::Boolean _StoreDateTimeAsTicks_k__BackingField; // 0x60
		::System::Boolean _StoreTimeSpanAsTicks_k__BackingField; // 0x61
		::System::String* _DateTimeStringFormat_k__BackingField; // 0x68
		::System::Globalization::DateTimeStyles* _DateTimeStyle_k__BackingField; // 0x70
		Il2CppObject* _insertCommandMap; // 0x78
		Il2CppObject* TableChanged; // 0x80

		::System::Int32 get_Handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void set_Handle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_HANDLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_DatabasePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATABASEPATH_OFFSET))(nullptr);
		}

		::System::Void set_DatabasePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATABASEPATH_OFFSET))(str, nullptr);
		}

		::System::Int32 get_LibVersionNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_LIBVERSIONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_LibVersionNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_LIBVERSIONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TimeExecution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TIMEEXECUTION_OFFSET))(nullptr);
		}

		::System::Void set_TimeExecution(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TIMEEXECUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Trace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TRACE_OFFSET))(nullptr);
		}

		::System::Void set_Trace(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TRACE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tracer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TRACER_OFFSET))(nullptr);
		}

		::System::Void set_Tracer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_TRACER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_STOREDATETIMEASTICKS_OFFSET))(nullptr);
		}

		::System::Void set_StoreDateTimeAsTicks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_STOREDATETIMEASTICKS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_STORETIMESPANASTICKS_OFFSET))(nullptr);
		}

		::System::Void set_StoreTimeSpanAsTicks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_STORETIMESPANASTICKS_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeStringFormat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATETIMESTRINGFORMAT_OFFSET))(str, nullptr);
		}

		::System::Globalization::DateTimeStyles* get_DateTimeStyle()
		{
			return (return (::System::Globalization::DateTimeStyles*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_DATETIMESTYLE_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeStyle(::System::Globalization::DateTimeStyles* arg)
		{
			((::System::Void(*)(::System::Globalization::DateTimeStyles*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_DATETIMESTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::SQLite::SQLiteOpenFlags* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::SQLite::SQLiteOpenFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::SQLite::SQLiteConnectionString* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnectionString*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void EnableWriteAheadLogging()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ENABLEWRITEAHEADLOGGING_OFFSET))(nullptr);
		}

		::System::String* Quote(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUOTE_OFFSET))(str, nullptr);
		}

		::System::Void SetKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SETKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void EnableLoadExtension(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ENABLELOADEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNullTerminatedUtf8(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETNULLTERMINATEDUTF8_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* get_BusyTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_BUSYTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_BusyTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SET_BUSYTIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TableMappings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_TABLEMAPPINGS_OFFSET))(nullptr);
		}

		::SQLite::TableMapping* GetMapping(::System::Type* arg, ::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::TableMapping*(*)(::System::Type*, ::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET))(arg, arg, nullptr);
		}

		::SQLite::TableMapping* GetMapping(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::TableMapping*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Int32 DropTable()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET))(nullptr);
		}

		::System::Int32 DropTable(::SQLite::TableMapping* arg)
		{
			return (return (::System::Int32(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DROPTABLE_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTableResult* CreateTable(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTableResult*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTableResult* CreateTable(::System::Type* arg, ::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTableResult*(*)(::System::Type*, ::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLE_OFFSET))(arg, arg, nullptr);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTablesResult*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTablesResult*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTablesResult*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags* arg)
		{
			return (return (::SQLite::CreateTablesResult*(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateTablesResult* CreateTables(::SQLite::CreateFlags* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::SQLite::CreateTablesResult*(*)(::SQLite::CreateFlags*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATETABLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CreateIndex(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Int32 CreateIndex(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Int32 CreateIndex(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 CreateIndex(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 CreateIndex(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINDEX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetTableInfo(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETTABLEINFO_OFFSET))(str, nullptr);
		}

		::System::Void MigrateTable(::SQLite::TableMapping* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::SQLite::TableMapping*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_MIGRATETABLE_OFFSET))(arg, arg, nullptr);
		}

		::SQLite::SQLiteCommand* NewCommand()
		{
			return (return (::SQLite::SQLiteCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_NEWCOMMAND_OFFSET))(nullptr);
		}

		::SQLite::SQLiteCommand* CreateCommand(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::SQLite::SQLiteCommand*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET))(str, arg, nullptr);
		}

		::SQLite::SQLiteCommand* CreateCommand(::System::String* str, Il2CppObject* arg)
		{
			return (return (::SQLite::SQLiteCommand*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATECOMMAND_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Execute(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_EXECUTE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* ExecuteScalar(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_EXECUTESCALAR_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Query(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUERY_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* QueryScalars(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUERYSCALARS_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* DeferredQuery(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Query(::SQLite::TableMapping* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_QUERY_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* DeferredQuery(::SQLite::TableMapping* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DEFERREDQUERY_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* Table()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_TABLE_OFFSET))(nullptr);
		}

		Il2CppObject* Get(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(::System::Object* arg, ::SQLite::TableMapping* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Get(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Find(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FIND_OFFSET))(arg, nullptr);
		}

		::System::Object* Find(::System::Object* arg, ::SQLite::TableMapping* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FIND_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FIND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindWithQuery(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FindWithQuery(::SQLite::TableMapping* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FINDWITHQUERY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean get_IsInTransaction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GET_ISINTRANSACTION_OFFSET))(nullptr);
		}

		::System::Void BeginTransaction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_BEGINTRANSACTION_OFFSET))(nullptr);
		}

		::System::String* SaveTransactionPoint()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_SAVETRANSACTIONPOINT_OFFSET))(nullptr);
		}

		::System::Void Rollback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACK_OFFSET))(nullptr);
		}

		::System::Void RollbackTo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET))(str, nullptr);
		}

		::System::Void RollbackTo(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ROLLBACKTO_OFFSET))(str, arg, nullptr);
		}

		::System::Void Release(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_RELEASE_OFFSET))(str, nullptr);
		}

		::System::Void DoSavePointExecute(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DOSAVEPOINTEXECUTE_OFFSET))(str, str, nullptr);
		}

		::System::Void Commit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_COMMIT_OFFSET))(nullptr);
		}

		::System::Void RunInTransaction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_RUNINTRANSACTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 InsertAll(::System::Collections::IEnumerable* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEnumerable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 InsertAll(::System::Collections::IEnumerable* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEnumerable*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 InsertAll(::System::Collections::IEnumerable* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEnumerable*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Insert(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Int32 InsertOrReplace(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Insert(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 InsertOrReplace(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERTORREPLACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Insert(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 Insert(::System::Object* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_INSERT_OFFSET))(arg, str, arg, nullptr);
		}

		::SQLite::PreparedSqlLiteInsertCommand* GetInsertCommand(::SQLite::TableMapping* arg, ::System::String* str)
		{
			return (return (::SQLite::PreparedSqlLiteInsertCommand*(*)(::SQLite::TableMapping*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_GETINSERTCOMMAND_OFFSET))(arg, str, nullptr);
		}

		::SQLite::PreparedSqlLiteInsertCommand* CreateInsertCommand(::SQLite::TableMapping* arg, ::System::String* str)
		{
			return (return (::SQLite::PreparedSqlLiteInsertCommand*(*)(::SQLite::TableMapping*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CREATEINSERTCOMMAND_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 Update(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Update(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 UpdateAll(::System::Collections::IEnumerable* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEnumerable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_UPDATEALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Delete(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Delete(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Delete(::System::Object* arg, ::SQLite::TableMapping* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 DeleteAll()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETEALL_OFFSET))(nullptr);
		}

		::System::Int32 DeleteAll(::SQLite::TableMapping* arg)
		{
			return (return (::System::Int32(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DELETEALL_OFFSET))(arg, nullptr);
		}

		::System::Void Backup(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_BACKUP_OFFSET))(str, str, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTableChanged(::SQLite::TableMapping* arg, ::SQLite::NotifyTableChangedAction* arg)
		{
			((::System::Void(*)(::SQLite::TableMapping*, ::SQLite::NotifyTableChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ONTABLECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void add_TableChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_ADD_TABLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_TableChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_REMOVE_TABLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* _CreateTable_b__70_0(Column* arg)
		{
			return (return (::System::String*(*)(Column*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTION__CREATETABLE_B__70_0_OFFSET))(arg, nullptr);
		}

	};
}

