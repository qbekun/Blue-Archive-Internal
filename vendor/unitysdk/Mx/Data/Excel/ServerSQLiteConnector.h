#pragma once
#include "../../../unitysdk.h"

namespace SQLite { class SQLiteConnection; }
namespace MX::Data::Excel { class ISQLiteRepository; }

#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x19852F0)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET UNITYSDK_OFFSET(0x1985310)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGDEALLOCATION_OFFSET UNITYSDK_OFFSET(0x1985340)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x1985350)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_GETDATABASEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1985360)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1985400)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGALLOCATION_OFFSET UNITYSDK_OFFSET(0x1985500)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGACCESS_OFFSET UNITYSDK_OFFSET(0x1985510)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CREATECONNECTION_OFFSET UNITYSDK_OFFSET(0x1985520)
#define MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19858F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ServerSQLiteConnector_TypeDefinitionIndex = 16552;

	class ServerSQLiteConnector : public Il2CppObject
	{
	public:
		::System::String* _dbPath; // 0x10

		::System::Void CloseConnection(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CLOSECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertTableNameToDatabaseName(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET))(arg, nullptr);
		}

		::System::Void LogDeallocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGDEALLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_PREPARE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDataBaseFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_GETDATABASEFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void LogAllocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGALLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void LogAccess(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGACCESS_OFFSET))(arg, nullptr);
		}

		::SQLite::SQLiteConnection* CreateConnection(::System::String* str, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::SQLite::SQLiteConnection*(*)(::System::String*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_CREATECONNECTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::System::Exception*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVERSQLITECONNECTOR_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

