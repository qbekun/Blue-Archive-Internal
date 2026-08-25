#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SessionKey; }

#define MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_CONNECTIONTIME_OFFSET UNITYSDK_OFFSET(0x100B070)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B080)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_LASTCONNECT_OFFSET UNITYSDK_OFFSET(0x100B090)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_CONNECTIONTIME_OFFSET UNITYSDK_OFFSET(0x100B0A0)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0x100B0B0)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0x100B0C0)
#define MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_LASTCONNECT_OFFSET UNITYSDK_OFFSET(0x100B0D0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SessionDB_TypeDefinitionIndex = 12721;

	class SessionDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SessionKey* _SessionKey_k__BackingField; // 0x10
		::System::DateTime* _LastConnect_k__BackingField; // 0x18
		::System::Int32 _ConnectionTime_k__BackingField; // 0x20

		::System::Void set_ConnectionTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_CONNECTIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastConnect()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_LASTCONNECT_OFFSET))(nullptr);
		}

		::System::Int32 get_ConnectionTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_CONNECTIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_SessionKey(::MX::GameLogic::DBModel::SessionKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_SESSIONKEY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::SessionKey* get_SessionKey()
		{
			return ((::MX::GameLogic::DBModel::SessionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_GET_SESSIONKEY_OFFSET))(nullptr);
		}

		::System::Void set_LastConnect(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SESSIONDB_SET_LASTCONNECT_OFFSET))(arg, nullptr);
		}

	};
}

