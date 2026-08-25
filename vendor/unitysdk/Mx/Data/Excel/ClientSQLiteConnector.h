#pragma once
#include "../../../unitysdk.h"

namespace SQLite { class SQLiteConnection; }
namespace MX::Data::Excel { class ISQLiteRepository; }

#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1984680)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATHINBUILDORIGINAL_OFFSET UNITYSDK_OFFSET(0x19846A0)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET UNITYSDK_OFFSET(0x1984760)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x19848D0)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATH_OFFSET UNITYSDK_OFFSET(0x19848E0)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CREATECONNECTION_OFFSET UNITYSDK_OFFSET(0x1984B70)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CONVERTBYTESTOHEX_OFFSET UNITYSDK_OFFSET(0x1985090)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGALLOCATION_OFFSET UNITYSDK_OFFSET(0x1985170)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1985180)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATHINBUILDCOPY_OFFSET UNITYSDK_OFFSET(0x1984A90)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGACCESS_OFFSET UNITYSDK_OFFSET(0x1985190)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x19851A0)
#define MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGDEALLOCATION_OFFSET UNITYSDK_OFFSET(0x1985290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClientSQLiteConnector_TypeDefinitionIndex = 16535;

	class ClientSQLiteConnector : public Il2CppObject
	{
	public:
		::System::Void CloseConnection(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CLOSECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetDatabaseFilePathInBuildOriginal(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATHINBUILDORIGINAL_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertTableNameToDatabaseName(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetDatabaseFilePath(::System::String* str, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATH_OFFSET))(str, arg, nullptr);
		}

		::SQLite::SQLiteConnection* CreateConnection(::System::String* str, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::SQLite::SQLiteConnection*(*)(::System::String*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CREATECONNECTION_OFFSET))(str, arg, nullptr);
		}

		::System::String* ConvertBytesToHex(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_CONVERTBYTESTOHEX_OFFSET))(arg, nullptr);
		}

		::System::Void LogAllocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGALLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::System::Exception*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetDatabaseFilePathInBuildCopy(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_GETDATABASEFILEPATHINBUILDCOPY_OFFSET))(arg, nullptr);
		}

		::System::Void LogAccess(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_PREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void LogDeallocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLIENTSQLITECONNECTOR_LOGDEALLOCATION_OFFSET))(arg, nullptr);
		}

	};
}

