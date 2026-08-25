#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionHistoryDB; }

#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003480)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1003490)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_COMPLETETIME_OFFSET UNITYSDK_OFFSET(0x1003520)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1003530)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1003540)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1003550)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1003560)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003760)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1003770)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003B10)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1003B20)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1003C70)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1003C80)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1003C90)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_COMPLETETIME_OFFSET UNITYSDK_OFFSET(0x1003CA0)
#define MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1003CB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MissionHistoryDB_TypeDefinitionIndex = 12662;

	class MissionHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _AccountServerId_k__BackingField; // 0x18
		::System::Int64 _MissionUniqueId_k__BackingField; // 0x20
		::System::DateTime* _CompleteTime_k__BackingField; // 0x28
		::System::Boolean _Expired_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::MissionHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MissionHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CompleteTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_COMPLETETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_EXPIRED_OFFSET))(nullptr);
		}

		::System::Void set_Expired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_MissionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_MISSIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::MissionHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::MissionHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_MissionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_MISSIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::MissionHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::MissionHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::DateTime* get_CompleteTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_GET_COMPLETETIME_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONHISTORYDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

	};
}

