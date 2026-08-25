#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
class FormationLocationKey;
namespace MX::Logic::Data { class CarrierSkillSetting; }
namespace MX::Logic::Data { class ArenaSetting; }
namespace MX::Campaign { class SkillCardHand; }
namespace MX::Logic::Data { class StatCorrection; }
namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::Data { class TeamSetting; }

#define MX_LOGIC_DATA_TEAMSETTING_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11E52A0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11E52B0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x11E52C0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x11E52D0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x11E52E0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x11E52F0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x11E5300)
#define MX_LOGIC_DATA_TEAMSETTING_SET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x11E5310)
#define MX_LOGIC_DATA_TEAMSETTING_GET_LEADERCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5320)
#define MX_LOGIC_DATA_TEAMSETTING_SET_LEADERCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5330)
#define MX_LOGIC_DATA_TEAMSETTING_GET_CHECKTSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5340)
#define MX_LOGIC_DATA_TEAMSETTING_SET_CHECKTSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5350)
#define MX_LOGIC_DATA_TEAMSETTING_GET_TSSINTERACTIONCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5360)
#define MX_LOGIC_DATA_TEAMSETTING_SET_TSSINTERACTIONCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x11E5370)
#define MX_LOGIC_DATA_TEAMSETTING_GET_TSSINTERACTIONCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E5380)
#define MX_LOGIC_DATA_TEAMSETTING_SET_TSSINTERACTIONCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E5390)
#define MX_LOGIC_DATA_TEAMSETTING_GET_FORMATIONLOCATIONKEY_OFFSET UNITYSDK_OFFSET(0x11E53A0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_FORMATIONLOCATIONKEY_OFFSET UNITYSDK_OFFSET(0x11E53B0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x11E53C0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x11E53D0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x11E53E0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x11E53F0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_STARTERS_OFFSET UNITYSDK_OFFSET(0x11E5400)
#define MX_LOGIC_DATA_TEAMSETTING_SET_STARTERS_OFFSET UNITYSDK_OFFSET(0x11E5410)
#define MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZESTARTERS_OFFSET UNITYSDK_OFFSET(0x11E5420)
#define MX_LOGIC_DATA_TEAMSETTING_GET_SUPPORTERS_OFFSET UNITYSDK_OFFSET(0x11E54C0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_SUPPORTERS_OFFSET UNITYSDK_OFFSET(0x11E54D0)
#define MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZESUPPORTERS_OFFSET UNITYSDK_OFFSET(0x11E54E0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_GROUNDPASSIVES_OFFSET UNITYSDK_OFFSET(0x11E5580)
#define MX_LOGIC_DATA_TEAMSETTING_SET_GROUNDPASSIVES_OFFSET UNITYSDK_OFFSET(0x11E5590)
#define MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEGROUNDPASSIVES_OFFSET UNITYSDK_OFFSET(0x11E55A0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_CARRIERSKILL_OFFSET UNITYSDK_OFFSET(0x11E5640)
#define MX_LOGIC_DATA_TEAMSETTING_SET_CARRIERSKILL_OFFSET UNITYSDK_OFFSET(0x11E5650)
#define MX_LOGIC_DATA_TEAMSETTING_GET_DEFAULTSTATCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x11E5660)
#define MX_LOGIC_DATA_TEAMSETTING_SET_DEFAULTSTATCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x11E5670)
#define MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEDEFAULTSTATCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x11E5680)
#define MX_LOGIC_DATA_TEAMSETTING_GET_ARENASETTING_OFFSET UNITYSDK_OFFSET(0x11E5720)
#define MX_LOGIC_DATA_TEAMSETTING_SET_ARENASETTING_OFFSET UNITYSDK_OFFSET(0x11E5730)
#define MX_LOGIC_DATA_TEAMSETTING_GET_SKILLCARDHAND_OFFSET UNITYSDK_OFFSET(0x11E5750)
#define MX_LOGIC_DATA_TEAMSETTING_SET_SKILLCARDHAND_OFFSET UNITYSDK_OFFSET(0x11E5760)
#define MX_LOGIC_DATA_TEAMSETTING_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x11E5780)
#define MX_LOGIC_DATA_TEAMSETTING_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x11E5790)
#define MX_LOGIC_DATA_TEAMSETTING_GET_HEXABUFFS_OFFSET UNITYSDK_OFFSET(0x11E57B0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_HEXABUFFS_OFFSET UNITYSDK_OFFSET(0x11E57C0)
#define MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEHEXABUFFS_OFFSET UNITYSDK_OFFSET(0x11E57E0)
#define MX_LOGIC_DATA_TEAMSETTING_INITHEXABUFFS_OFFSET UNITYSDK_OFFSET(0x11E5820)
#define MX_LOGIC_DATA_TEAMSETTING_GET_STATCORRECTION_OFFSET UNITYSDK_OFFSET(0x11E5950)
#define MX_LOGIC_DATA_TEAMSETTING_SET_STATCORRECTION_OFFSET UNITYSDK_OFFSET(0x11E5980)
#define MX_LOGIC_DATA_TEAMSETTING_GET_TOTALCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E59B0)
#define MX_LOGIC_DATA_TEAMSETTING_GET_HANDCOUNT_OFFSET UNITYSDK_OFFSET(0x11E5AC0)
#define MX_LOGIC_DATA_TEAMSETTING_SET_HANDCOUNT_OFFSET UNITYSDK_OFFSET(0x11E5AD0)
#define MX_LOGIC_DATA_TEAMSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E5AE0)
#define MX_LOGIC_DATA_TEAMSETTING_INITFORMATIONKEY_OFFSET UNITYSDK_OFFSET(0x11E5BC0)
#define MX_LOGIC_DATA_TEAMSETTING_ADDSTARTER_OFFSET UNITYSDK_OFFSET(0x11E5BD0)
#define MX_LOGIC_DATA_TEAMSETTING_ADDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x11E5C90)
#define MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTER_OFFSET UNITYSDK_OFFSET(0x11E5D50)
#define MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTERBYCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x11E6180)
#define MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTERBYSERVERID_OFFSET UNITYSDK_OFFSET(0x11E62B0)
#define MX_LOGIC_DATA_TEAMSETTING_GETALLCHARACTER_OFFSET UNITYSDK_OFFSET(0x11E6100)
#define MX_LOGIC_DATA_TEAMSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E6690)
#define MX_LOGIC_DATA_TEAMSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E6790)
#define MX_LOGIC_DATA_TEAMSETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E6800)
#define MX_LOGIC_DATA_TEAMSETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E6830)
#define MX_LOGIC_DATA_TEAMSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E66F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TeamSetting_TypeDefinitionIndex = 13454;

	class TeamSetting : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _TeamId_k__BackingField; // 0x18
		::System::String* _TeamName_k__BackingField; // 0x20
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x28
		::System::Int64 _LeaderCharacterServerId_k__BackingField; // 0x30
		::System::Boolean _CheckTSSInteractionServerId_k__BackingField; // 0x38
		::System::Int64 _TSSInteractionCharacterServerId_k__BackingField; // 0x40
		::System::Int64 _TSSInteractionCharacterUniqueId_k__BackingField; // 0x48
		FormationLocationKey* _FormationLocationKey_k__BackingField; // 0x50
		::System::Int32 _EchelonNumber_k__BackingField; // 0x58
		::System::Boolean _IsExtension_k__BackingField; // 0x5C
		Il2CppObject* _Starters_k__BackingField; // 0x60
		Il2CppObject* _Supporters_k__BackingField; // 0x68
		Il2CppObject* _GroundPassives_k__BackingField; // 0x70
		::MX::Logic::Data::CarrierSkillSetting* _CarrierSkill_k__BackingField; // 0x78
		Il2CppObject* _DefaultStatChangeInfos_k__BackingField; // 0x80
		::MX::Logic::Data::ArenaSetting* _ArenaSetting_k__BackingField; // 0x88
		::MX::Campaign::SkillCardHand* _SkillCardHand_k__BackingField; // 0x90
		Il2CppObject* _SkillCardMulliganCharacterIds_k__BackingField; // 0x98
		Il2CppObject* _HexaBuffs_k__BackingField; // 0xA0
		::MX::Logic::Data::StatCorrection* _StatCorrection_k__BackingField; // 0xA8
		::System::Int32 _HandCount_k__BackingField; // 0xE0

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TeamId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_TEAMID_OFFSET))(nullptr);
		}

		::System::Void set_TeamId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_TEAMID_OFFSET))(arg, nullptr);
		}

		::System::String* get_TeamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_TEAMNAME_OFFSET))(nullptr);
		}

		::System::Void set_TeamName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_TEAMNAME_OFFSET))(str, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Void set_GroupTag(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_GROUPTAG_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_LEADERCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_LeaderCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_LEADERCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckTSSInteractionServerId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_CHECKTSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_CheckTSSInteractionServerId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_CHECKTSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_TSSINTERACTIONCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_TSSINTERACTIONCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_TSSINTERACTIONCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_TSSINTERACTIONCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		FormationLocationKey* get_FormationLocationKey()
		{
			return ((FormationLocationKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_FORMATIONLOCATIONKEY_OFFSET))(nullptr);
		}

		::System::Void set_FormationLocationKey(FormationLocationKey* arg)
		{
			((::System::Void(*)(FormationLocationKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_FORMATIONLOCATIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_ISEXTENSION_OFFSET))(nullptr);
		}

		::System::Void set_IsExtension(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_ISEXTENSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Starters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_STARTERS_OFFSET))(nullptr);
		}

		::System::Void set_Starters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_STARTERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeStarters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZESTARTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Supporters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_SUPPORTERS_OFFSET))(nullptr);
		}

		::System::Void set_Supporters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_SUPPORTERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeSupporters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZESUPPORTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_GroundPassives()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_GROUNDPASSIVES_OFFSET))(nullptr);
		}

		::System::Void set_GroundPassives(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_GROUNDPASSIVES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeGroundPassives()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEGROUNDPASSIVES_OFFSET))(nullptr);
		}

		::MX::Logic::Data::CarrierSkillSetting* get_CarrierSkill()
		{
			return ((::MX::Logic::Data::CarrierSkillSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_CARRIERSKILL_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkill(::MX::Logic::Data::CarrierSkillSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::CarrierSkillSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_CARRIERSKILL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultStatChangeInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_DEFAULTSTATCHANGEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_DefaultStatChangeInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_DEFAULTSTATCHANGEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeDefaultStatChangeInfos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEDEFAULTSTATCHANGEINFOS_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ArenaSetting* get_ArenaSetting()
		{
			return ((::MX::Logic::Data::ArenaSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_ARENASETTING_OFFSET))(nullptr);
		}

		::System::Void set_ArenaSetting(::MX::Logic::Data::ArenaSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ArenaSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_ARENASETTING_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::SkillCardHand* get_SkillCardHand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_SKILLCARDHAND_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardHand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_SKILLCARDHAND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillCardMulliganCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardMulliganCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HexaBuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_HEXABUFFS_OFFSET))(nullptr);
		}

		::System::Void set_HexaBuffs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_HEXABUFFS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeHexaBuffs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SHOULDSERIALIZEHEXABUFFS_OFFSET))(nullptr);
		}

		::System::Void InitHexaBuffs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_INITHEXABUFFS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::StatCorrection* get_StatCorrection()
		{
			return ((::MX::Logic::Data::StatCorrection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_STATCORRECTION_OFFSET))(nullptr);
		}

		::System::Void set_StatCorrection(::MX::Logic::Data::StatCorrection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::StatCorrection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_STATCORRECTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalCharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_TOTALCHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_HandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GET_HANDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_HandCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_SET_HANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitFormationKey(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_INITFORMATIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void AddStarter(::MX::Logic::Data::HeroSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_ADDSTARTER_OFFSET))(arg, nullptr);
		}

		::System::Void AddSupporter(::MX::Logic::Data::HeroSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_ADDSUPPORTER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* FindCharacter(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* FindCharacterByCostumeId(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTERBYCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* FindCharacterByServerId(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_FINDCHARACTERBYSERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllCharacter()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GETALLCHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::TeamSetting* arg, ::MX::Logic::Data::TeamSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TeamSetting*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::TeamSetting* arg, ::MX::Logic::Data::TeamSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TeamSetting*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::TeamSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

