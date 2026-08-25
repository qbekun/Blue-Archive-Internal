#pragma once
#include "../unitysdk.h"

#define SQLITE_SQLITE3_THREADSAFE_OFFSET UNITYSDK_OFFSET(0xA27770)
#define SQLITE_SQLITE3_OPEN_OFFSET UNITYSDK_OFFSET(0xA1F240)
#define SQLITE_SQLITE3_OPEN_OFFSET UNITYSDK_OFFSET(0xA277F0)
#define SQLITE_SQLITE3_OPEN_OFFSET UNITYSDK_OFFSET(0xA16220)
#define SQLITE_SQLITE3_OPEN16_OFFSET UNITYSDK_OFFSET(0xA278B0)
#define SQLITE_SQLITE3_ENABLELOADEXTENSION_OFFSET UNITYSDK_OFFSET(0xA16B30)
#define SQLITE_SQLITE3_CLOSE_OFFSET UNITYSDK_OFFSET(0xA1F3A0)
#define SQLITE_SQLITE3_CLOSE2_OFFSET UNITYSDK_OFFSET(0xA1FD00)
#define SQLITE_SQLITE3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA27940)
#define SQLITE_SQLITE3_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0xA279C0)
#define SQLITE_SQLITE3_CONFIG_OFFSET UNITYSDK_OFFSET(0xA27A40)
#define SQLITE_SQLITE3_SETDIRECTORY_OFFSET UNITYSDK_OFFSET(0xA27AC0)
#define SQLITE_SQLITE3_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA16C80)
#define SQLITE_SQLITE3_CHANGES_OFFSET UNITYSDK_OFFSET(0xA24910)
#define SQLITE_SQLITE3_PREPARE2_OFFSET UNITYSDK_OFFSET(0xA27B50)
#define SQLITE_SQLITE3_PREPARE2_OFFSET UNITYSDK_OFFSET(0xA24C90)
#define SQLITE_SQLITE3_STEP_OFFSET UNITYSDK_OFFSET(0xA24810)
#define SQLITE_SQLITE3_RESET_OFFSET UNITYSDK_OFFSET(0xA274C0)
#define SQLITE_SQLITE3_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA250B0)
#define SQLITE_SQLITE3_LASTINSERTROWID_OFFSET UNITYSDK_OFFSET(0xA1D580)
#define SQLITE_SQLITE3_ERRMSG_OFFSET UNITYSDK_OFFSET(0xA27C10)
#define SQLITE_SQLITE3_GETERRMSG_OFFSET UNITYSDK_OFFSET(0xA16BB0)
#define SQLITE_SQLITE3_BINDPARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0xA25130)
#define SQLITE_SQLITE3_BINDNULL_OFFSET UNITYSDK_OFFSET(0xA25BC0)
#define SQLITE_SQLITE3_BINDINT_OFFSET UNITYSDK_OFFSET(0xA25C40)
#define SQLITE_SQLITE3_BINDINT64_OFFSET UNITYSDK_OFFSET(0xA25D80)
#define SQLITE_SQLITE3_BINDDOUBLE_OFFSET UNITYSDK_OFFSET(0xA25E10)
#define SQLITE_SQLITE3_BINDTEXT_OFFSET UNITYSDK_OFFSET(0xA25CD0)
#define SQLITE_SQLITE3_BINDBLOB_OFFSET UNITYSDK_OFFSET(0xA25EA0)
#define SQLITE_SQLITE3_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xA27C90)
#define SQLITE_SQLITE3_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0xA27D10)
#define SQLITE_SQLITE3_COLUMNNAME16INTERNAL_OFFSET UNITYSDK_OFFSET(0xA27D90)
#define SQLITE_SQLITE3_COLUMNNAME16_OFFSET UNITYSDK_OFFSET(0xA27E10)
#define SQLITE_SQLITE3_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0xA27ED0)
#define SQLITE_SQLITE3_COLUMNINT_OFFSET UNITYSDK_OFFSET(0xA26FA0)
#define SQLITE_SQLITE3_COLUMNINT64_OFFSET UNITYSDK_OFFSET(0xA270A0)
#define SQLITE_SQLITE3_COLUMNDOUBLE_OFFSET UNITYSDK_OFFSET(0xA27020)
#define SQLITE_SQLITE3_COLUMNTEXT_OFFSET UNITYSDK_OFFSET(0xA27F50)
#define SQLITE_SQLITE3_COLUMNTEXT16_OFFSET UNITYSDK_OFFSET(0xA27FD0)
#define SQLITE_SQLITE3_COLUMNBLOB_OFFSET UNITYSDK_OFFSET(0xA28050)
#define SQLITE_SQLITE3_COLUMNBYTES_OFFSET UNITYSDK_OFFSET(0xA280D0)
#define SQLITE_SQLITE3_COLUMNSTRING_OFFSET UNITYSDK_OFFSET(0xA26EE0)
#define SQLITE_SQLITE3_COLUMNBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA27120)
#define SQLITE_SQLITE3_GETRESULT_OFFSET UNITYSDK_OFFSET(0xA1F520)
#define SQLITE_SQLITE3_EXTENDEDERRCODE_OFFSET UNITYSDK_OFFSET(0xA1D500)
#define SQLITE_SQLITE3_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA160F0)
#define SQLITE_SQLITE3_BACKUPINIT_OFFSET UNITYSDK_OFFSET(0xA1F2E0)
#define SQLITE_SQLITE3_BACKUPSTEP_OFFSET UNITYSDK_OFFSET(0xA1F420)
#define SQLITE_SQLITE3_BACKUPFINISH_OFFSET UNITYSDK_OFFSET(0xA1F4A0)

namespace SQLite
{
	inline static constexpr unsigned int SQLite3_TypeDefinitionIndex = 36640;

	class SQLite3 : public Il2CppObject
	{
	public:
		::System::String* LibraryPath; // 0x0

		::System::Int32 Threadsafe()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_THREADSAFE_OFFSET))(nullptr);
		}

		Result* Open(::System::String* str, int32_t&* arg)
		{
			return (return (Result*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_OPEN_OFFSET))(str, arg, nullptr);
		}

		Result* Open(::System::String* str, int32_t&* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (Result*(*)(::System::String*, int32_t&*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_OPEN_OFFSET))(str, arg, arg, str, nullptr);
		}

		Result* Open(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (Result*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_OPEN_OFFSET))(arg, arg, arg, str, nullptr);
		}

		Result* Open16(::System::String* str, int32_t&* arg)
		{
			return (return (Result*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_OPEN16_OFFSET))(str, arg, nullptr);
		}

		Result* EnableLoadExtension(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_ENABLELOADEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		Result* Close(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_CLOSE_OFFSET))(arg, nullptr);
		}

		Result* Close2(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_CLOSE2_OFFSET))(arg, nullptr);
		}

		Result* Initialize()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_INITIALIZE_OFFSET))(nullptr);
		}

		Result* Shutdown()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_SHUTDOWN_OFFSET))(nullptr);
		}

		Result* Config(ConfigOption* arg)
		{
			return (return (Result*(*)(ConfigOption*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_CONFIG_OFFSET))(arg, nullptr);
		}

		::System::Int32 SetDirectory(::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_SETDIRECTORY_OFFSET))(arg, str, nullptr);
		}

		Result* BusyTimeout(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BUSYTIMEOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Changes(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_CHANGES_OFFSET))(arg, nullptr);
		}

		Result* Prepare2(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::System::String*, ::System::Int32, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_PREPARE2_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Int32 Prepare2(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_PREPARE2_OFFSET))(arg, str, nullptr);
		}

		Result* Step(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_STEP_OFFSET))(arg, nullptr);
		}

		Result* Reset(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_RESET_OFFSET))(arg, nullptr);
		}

		Result* Finalize(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_FINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 LastInsertRowid(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_LASTINSERTROWID_OFFSET))(arg, nullptr);
		}

		::System::Int32 Errmsg(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_ERRMSG_OFFSET))(arg, nullptr);
		}

		::System::String* GetErrmsg(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_GETERRMSG_OFFSET))(arg, nullptr);
		}

		::System::Int32 BindParameterIndex(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDPARAMETERINDEX_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 BindNull(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDNULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 BindInt(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BindInt64(::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDINT64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BindDouble(::System::Int32 arg, ::System::Int32 arg, ::System::Double arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDDOUBLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BindText(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDTEXT_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Int32 BindBlob(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BINDBLOB_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ColumnCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 ColumnName(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnName16Internal(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNNAME16INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ColumnName16(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNNAME16_OFFSET))(arg, arg, nullptr);
		}

		ColType* ColumnType(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (ColType*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnInt(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ColumnInt64(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNINT64_OFFSET))(arg, arg, nullptr);
		}

		::System::Double ColumnDouble(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnText(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnText16(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNTEXT16_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnBlob(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNBLOB_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ColumnBytes(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNBYTES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ColumnString(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNSTRING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ColumnByteArray(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_COLUMNBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		Result* GetResult(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_GETRESULT_OFFSET))(arg, nullptr);
		}

		ExtendedResult* ExtendedErrCode(::System::Int32 arg)
		{
			return (return (ExtendedResult*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_EXTENDEDERRCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 LibVersionNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_LIBVERSIONNUMBER_OFFSET))(nullptr);
		}

		::System::Int32 BackupInit(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BACKUPINIT_OFFSET))(arg, str, arg, str, nullptr);
		}

		Result* BackupStep(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BACKUPSTEP_OFFSET))(arg, arg, nullptr);
		}

		Result* BackupFinish(::System::Int32 arg)
		{
			return (return (Result*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITE3_BACKUPFINISH_OFFSET))(arg, nullptr);
		}

	};
}

