#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidMemberCollection; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }

#define MX_LOGIC_DATA_RAIDSETTING_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x11E4300)
#define MX_LOGIC_DATA_RAIDSETTING_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x11E4310)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x11E4320)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x11E4330)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x11E4340)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x11E4350)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x11E4360)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x11E4370)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDGROUPID_OFFSET UNITYSDK_OFFSET(0x11E4380)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDGROUPID_OFFSET UNITYSDK_OFFSET(0x11E4390)
#define MX_LOGIC_DATA_RAIDSETTING_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x11E43A0)
#define MX_LOGIC_DATA_RAIDSETTING_SET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x11E43B0)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x11E43C0)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x11E43D0)
#define MX_LOGIC_DATA_RAIDSETTING_GET_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x11E43E0)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSHP_OFFSET UNITYSDK_OFFSET(0x11E43F0)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSHP_OFFSET UNITYSDK_OFFSET(0x11E4400)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSINITIALPHASE_OFFSET UNITYSDK_OFFSET(0x11E4410)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSINITIALPHASE_OFFSET UNITYSDK_OFFSET(0x11E4420)
#define MX_LOGIC_DATA_RAIDSETTING_GET_GROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E4430)
#define MX_LOGIC_DATA_RAIDSETTING_SET_GROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E4440)
#define MX_LOGIC_DATA_RAIDSETTING_GET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x11E4450)
#define MX_LOGIC_DATA_RAIDSETTING_SET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x11E4460)
#define MX_LOGIC_DATA_RAIDSETTING_GET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x11E4470)
#define MX_LOGIC_DATA_RAIDSETTING_SET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x11E4480)
#define MX_LOGIC_DATA_RAIDSETTING_GET_RAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x11E4490)
#define MX_LOGIC_DATA_RAIDSETTING_SET_RAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x11E44A0)
#define MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E44B0)
#define MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4550)
#define MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E46E0)
#define MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4880)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidSetting_TypeDefinitionIndex = 13445;

	class RaidSetting : public Il2CppObject
	{
	public:
		::System::Boolean _IsPractice_k__BackingField; // 0x10
		::System::Int64 _RaidServerId_k__BackingField; // 0x18
		::System::Int64 _RaidSeasonId_k__BackingField; // 0x20
		::System::Int64 _RaidPhaseId_k__BackingField; // 0x28
		::System::Int64 _RaidGroupId_k__BackingField; // 0x30
		::System::String* _SecretCode_k__BackingField; // 0x38
		::System::Int32 _RaidBossIndex_k__BackingField; // 0x40
		::System::Int32 _LastBossIndex_k__BackingField; // 0x44
		::System::Int64 _RaidBossHP_k__BackingField; // 0x48
		::System::Int32 _RaidBossInitialPhase_k__BackingField; // 0x50
		::System::Int64 _GroggyPoint_k__BackingField; // 0x58
		Il2CppObject* _SubPartsHPs_k__BackingField; // 0x60
		::System::Boolean _IsTicket_k__BackingField; // 0x68
		::MX::Logic::Data::RaidMemberCollection* _RaidMembers_k__BackingField; // 0x70

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_RaidSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidPhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDPHASEID_OFFSET))(nullptr);
		}

		::System::Void set_RaidPhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDPHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_RaidGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_SECRETCODE_OFFSET))(nullptr);
		}

		::System::Void set_SecretCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_SECRETCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 get_RaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_LASTBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidBossHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSHP_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossHP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSHP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RaidBossInitialPhase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDBOSSINITIALPHASE_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossInitialPhase(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDBOSSINITIALPHASE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_GROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void set_GroggyPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_GROGGYPOINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SubPartsHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_SUBPARTSHPS_OFFSET))(nullptr);
		}

		::System::Void set_SubPartsHPs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_SUBPARTSHPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_ISTICKET_OFFSET))(nullptr);
		}

		::System::Void set_IsTicket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_ISTICKET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RaidMemberCollection* get_RaidMembers()
		{
			return ((::MX::Logic::Data::RaidMemberCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_GET_RAIDMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_RaidMembers(::MX::Logic::Data::RaidMemberCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidMemberCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_SET_RAIDMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::MX::GameLogic::DBModel::RaidBattleDB* arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int64 arg7)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::System::Boolean, ::System::Boolean, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDSETTING_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

