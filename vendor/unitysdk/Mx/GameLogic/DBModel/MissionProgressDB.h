#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionProgressDB; }

#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1003D60)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1003D70)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1003D80)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1003D90)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003DA0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003DB0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1003DC0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1003DD0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1003DE0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1003DF0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_PROGRESSPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1003E00)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_PROGRESSPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1003E10)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SHOULDSERIALIZEPROGRESSPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1003E20)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1003E60)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003F10)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003F90)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1003FC0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1003FD0)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1004290)
#define MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1004420)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MissionProgressDB_TypeDefinitionIndex = 12664;

	class MissionProgressDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _AccountServerId_k__BackingField; // 0x18
		::System::Int64 _MissionUniqueId_k__BackingField; // 0x20
		::System::Boolean _Complete_k__BackingField; // 0x28
		::System::DateTime* _StartTime_k__BackingField; // 0x30
		Il2CppObject* _ProgressParameters_k__BackingField; // 0x38

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MissionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_MISSIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MissionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_MISSIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_Complete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_StartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProgressParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_GET_PROGRESSPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_ProgressParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SET_PROGRESSPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeProgressParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SHOULDSERIALIZEPROGRESSPARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::MissionProgressDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MissionProgressDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::MissionProgressDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::MissionProgressDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::MissionProgressDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::MissionProgressDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MISSIONPROGRESSDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

