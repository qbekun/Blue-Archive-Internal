#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class ClearDeckDB; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1008BF0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1008C00)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x1008C10)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x1008C20)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1008C30)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1008C40)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1008C50)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1008C60)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_MAINCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1008C70)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_MAINCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1008C80)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_SUPPORTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1008C90)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_SUPPORTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1008CA0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1008CB0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1008CC0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008CD0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008CE0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_LEADERCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008CF0)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_LEADERCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008D00)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1008510)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1008D10)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1009250)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1008770)
#define MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB__.CTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1009660)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidTeamSettingDB_TypeDefinitionIndex = 12698;

	class RaidTeamSettingDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _TryNumber_k__BackingField; // 0x18
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x20
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0x24
		Il2CppObject* _MainCharacterDBs_k__BackingField; // 0x28
		Il2CppObject* _SupportCharacterDBs_k__BackingField; // 0x30
		Il2CppObject* _SkillCardMulliganCharacterIds_k__BackingField; // 0x38
		::System::Int64 _TSSInteractionUniqueId_k__BackingField; // 0x40
		::System::Int64 _LeaderCharacterUniqueId_k__BackingField; // 0x48

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TryNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_TRYNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_TryNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_TRYNUMBER_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MainCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_MAINCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_MainCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_MAINCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SupportCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_SUPPORTCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_SupportCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_SUPPORTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillCardMulliganCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardMulliganCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_TSSINTERACTIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_TSSINTERACTIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_GET_LEADERCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_LeaderCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_SET_LEADERCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClearDeckDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::RaidTeamSettingDB* Clone(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_CLONE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidTeamSettingDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__37_0(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDTEAMSETTINGDB__.CTOR_B__37_0_OFFSET))(arg, nullptr);
		}

	};
}

