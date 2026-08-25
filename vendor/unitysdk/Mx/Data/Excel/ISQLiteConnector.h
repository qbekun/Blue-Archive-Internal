#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class ISQLiteRepository; }
namespace SQLite { class SQLiteConnection; }

#define MX_DATA_EXCEL_ISQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_LOGDEALLOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_LOGALLOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_LOGACCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_ISQLITECONNECTOR_CREATECONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ISQLiteConnector_TypeDefinitionIndex = 16553;

	class ISQLiteConnector : public Il2CppObject
	{
	public:
		::System::String* ConvertTableNameToDatabaseName(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_CONVERTTABLENAMETODATABASENAME_OFFSET))(arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::System::Exception*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Prepare(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_PREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void LogDeallocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_LOGDEALLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void LogAllocation(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_LOGALLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void LogAccess(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_LOGACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void CloseConnection(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_CLOSECONNECTION_OFFSET))(arg, nullptr);
		}

		::SQLite::SQLiteConnection* CreateConnection(::System::String* str, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::SQLite::SQLiteConnection*(*)(::System::String*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ISQLITECONNECTOR_CREATECONNECTION_OFFSET))(str, arg, nullptr);
		}

	};
}

