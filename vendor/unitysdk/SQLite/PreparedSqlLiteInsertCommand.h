#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteConnection; }

#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DD40)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_EXECUTENONQUERY_OFFSET UNITYSDK_OFFSET(0xA1D130)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1DCE0)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA27540)
#define SQLITE_PREPAREDSQLLITEINSERTCOMMAND_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA27630)

namespace SQLite
{
	inline static constexpr unsigned int PreparedSqlLiteInsertCommand_TypeDefinitionIndex = 36628;

	class PreparedSqlLiteInsertCommand : public Il2CppObject
	{
	public:
		::System::Boolean Initialized; // 0x10
		::SQLite::SQLiteConnection* Connection; // 0x18
		::System::String* CommandText; // 0x20
		::System::Int32 Statement; // 0x28
		::System::Int32 NullStatement; // 0x0

		::System::Void .ctor(::SQLite::SQLiteConnection* arg, ::System::String* str)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 ExecuteNonQuery(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_EXECUTENONQUERY_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_PREPAREDSQLLITEINSERTCOMMAND_FINALIZE_OFFSET))(nullptr);
		}

	};
}

