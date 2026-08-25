#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class SQLiteConnectionManager; }
namespace MX::Data::Excel { class ISQLiteConnector; }
namespace SQLite { class SQLiteConnection; }
namespace MX::Data::Excel { class ISQLiteRepository; }

#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_ALLOCATECONNECTION_OFFSET UNITYSDK_OFFSET(0x1985A10)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1985C80)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_LOGACCESS_OFFSET UNITYSDK_OFFSET(0x1985D30)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1985DE0)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1985E90)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1985F00)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1985F80)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1985FF0)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_DEALLOCATECONNECTION_OFFSET UNITYSDK_OFFSET(0x19863D0)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19865D0)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_CLEARCONNECTION_OFFSET UNITYSDK_OFFSET(0x1986020)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1986620)
#define MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1986630)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SQLiteConnectionManager_TypeDefinitionIndex = 16554;

	class SQLiteConnectionManager : public Il2CppObject
	{
	public:
		::MX::Data::Excel::SQLiteConnectionManager* _Instance_k__BackingField; // 0x0
		::System::Boolean initialized; // 0x10
		::MX::Data::Excel::ISQLiteConnector* connector; // 0x18
		Il2CppObject* connectionPools; // 0x20

		::SQLite::SQLiteConnection* AllocateConnection(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			return (return (::SQLite::SQLiteConnection*(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_ALLOCATECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_PREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void LogAccess(::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_LOGACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg, ::MX::Data::Excel::ISQLiteRepository* arg)
		{
			((::System::Void(*)(::System::Exception*, ::MX::Data::Excel::ISQLiteRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Instance(::MX::Data::Excel::SQLiteConnectionManager* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SQLiteConnectionManager*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void UnInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void DeallocateConnection(::MX::Data::Excel::ISQLiteRepository* arg, ::SQLite::SQLiteConnection* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteRepository*, ::SQLite::SQLiteConnection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_DEALLOCATECONNECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::Excel::SQLiteConnectionManager* get_Instance()
		{
			return (return (::MX::Data::Excel::SQLiteConnectionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ClearConnection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_CLEARCONNECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::Excel::ISQLiteConnector* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ISQLiteConnector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SQLITECONNECTIONMANAGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

