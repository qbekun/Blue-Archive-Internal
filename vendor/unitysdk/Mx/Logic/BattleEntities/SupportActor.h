#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonSlot; }
namespace FlatData { class School; }
namespace FlatData { class WeaponType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class PassiveSkillProcessor; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::BattleEntities { class EquipmentProcessor; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }
namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }
namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Core::Services { class Hash64; }

#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11510A0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1151140)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x11511E0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1151210)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_OWNERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1151220)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1151230)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1151240)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1151250)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ECHELONSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1151260)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ECHELONSLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1151270)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1151280)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1151320)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1151330)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1151340)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1151350)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1151360)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x1151370)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x1151380)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x1151390)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x11513A0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_PASSIVESKILLPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11513C0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_STATPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11513D0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x11513E0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x11513F0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x1151440)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151490)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11518A0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151980)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151A10)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151AA0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151B30)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASSTATUSIMMUNE_OFFSET UNITYSDK_OFFSET(0x1151BF0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x1151C00)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x1151C10)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVELOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1151C20)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152000)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152240)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152410)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152740)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1152940)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVELOGICEFFECTBYLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1152B10)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1152ED0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1152FC0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ONINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x1153060)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x1153090)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ISINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x11530A0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x11530B0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISPRIVATEWEAPON_OFFSET UNITYSDK_OFFSET(0x11530C0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ISPRIVATEWEAPON_OFFSET UNITYSDK_OFFSET(0x11530D0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_WEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x11530E0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_WEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x11530F0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_GEARSETTING_OFFSET UNITYSDK_OFFSET(0x1153100)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_GEARSETTING_OFFSET UNITYSDK_OFFSET(0x1153110)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_COSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x1153120)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_COSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x1153130)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x1153140)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x1153150)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHECKCANUSEAUTOPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x1153160)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x1153170)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1153180)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1153310)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x11537C0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1153B60)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1153C50)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISCURRENTACTIONEXSKILL_OFFSET UNITYSDK_OFFSET(0x1155DF0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISCURRENTACTIONPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x1155E50)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDACTIONS_OFFSET UNITYSDK_OFFSET(0x1155EB0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETALLACTIONS_OFFSET UNITYSDK_OFFSET(0x1156630)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDPRIMARYTARGETINGRULE_OFFSET UNITYSDK_OFFSET(0x1156A70)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDCHARACTERTARGETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1156DC0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CHECKANDSETPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x1153D00)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_STARTINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x1157330)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINISHINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x11573E0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_UPDATEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1157490)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x11574C0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CANUSESKILL_OFFSET UNITYSDK_OFFSET(0x1157520)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x11575D0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_EQUIPMENTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1157690)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_EQUIPMENTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11576A0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x11576C0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_INITEQUIPMENTOPTIONS_OFFSET UNITYSDK_OFFSET(0x11576F0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_EQUIPMENTSUMOF_OFFSET UNITYSDK_OFFSET(0x1158B80)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_RESETPASSIVE_OFFSET UNITYSDK_OFFSET(0x1158BB0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REGISTERPASSIVE_OFFSET UNITYSDK_OFFSET(0x1158C80)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_INITPASSIVE_OFFSET UNITYSDK_OFFSET(0x1158C40)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CLEARPASSIVEONDEAD_OFFSET UNITYSDK_OFFSET(0x1158C20)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ENABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1158C60)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_DISABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1158CA0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADDSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1158CC0)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1158E50)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1159030)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1159200)
#define MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1159450)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SupportActor_TypeDefinitionIndex = 13137;

	class SupportActor : public Il2CppObject
	{
	public:
		Il2CppObject* Expired; // 0x1A8
		::System::Int64 _ServerId_k__BackingField; // 0x1B0
		::System::Int64 _OwnerAccountId_k__BackingField; // 0x1B8
		::System::Int64 _CharacterId_k__BackingField; // 0x1C0
		::FlatData::EchelonSlot* _EchelonSlotType_k__BackingField; // 0x1C8
		::System::Int32 _EchelonSlotNumber_k__BackingField; // 0x1CC
		::System::Int64 _CharacterSkillListGroupId_k__BackingField; // 0x1D0
		::System::Int64 _PersonalityId_k__BackingField; // 0x1D8
		::FlatData::School* _School_k__BackingField; // 0x1E0
		::FlatData::WeaponType* _WeaponType_k__BackingField; // 0x1E4
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x1E8
		::System::Int32 _FavorRank_k__BackingField; // 0x1EC
		Il2CppObject* _PotentialStatLevelDict_k__BackingField; // 0x1F0
		::MX::Logic::BattleEntities::PassiveSkillProcessor* _PassiveSkillProcessor_k__BackingField; // 0x1F8
		Il2CppObject* InteractWithTSS; // 0x200
		::System::Boolean _IsInteractWithTSS_k__BackingField; // 0x208
		::MX::Logic::Battles::CharacterGroup* _CharacterGroup_k__BackingField; // 0x210
		::System::Boolean _IsPrivateWeapon_k__BackingField; // 0x218
		::MX::Logic::Data::WeaponSetting* _WeaponSetting_k__BackingField; // 0x220
		::MX::Logic::Data::GearSetting* _GearSetting_k__BackingField; // 0x230
		::MX::Logic::Data::CostumeSetting* _CostumeSetting_k__BackingField; // 0x240
		Il2CppObject* _TagList_k__BackingField; // 0x248
		::System::Boolean _IsNPC_k__BackingField; // 0x250
		::System::Boolean _CheckCanUseAutoPublicSkill_k__BackingField; // 0x251
		::MX::Logic::BattleEntities::EquipmentProcessor* _EquipmentProcessor_k__BackingField; // 0x258

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnExpired(::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_OwnerAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_OWNERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::EchelonSlot* get_EchelonSlotType()
		{
			return ((::FlatData::EchelonSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ECHELONSLOTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotType(::FlatData::EchelonSlot* arg)
		{
			((::System::Void(*)(::FlatData::EchelonSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ECHELONSLOTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonSlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ECHELONSLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ECHELONSLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterSkillListGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PersonalityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_PERSONALITYID_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SCHOOL_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PotentialStatLevelDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_POTENTIALSTATLEVELDICT_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStatLevelDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_POTENTIALSTATLEVELDICT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::PassiveSkillProcessor* get_PassiveSkillProcessor()
		{
			return ((::MX::Logic::BattleEntities::PassiveSkillProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_PASSIVESKILLPROCESSOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* get_StatProcessor()
		{
			return ((::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_STATPROCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatusImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASSTATUSIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveLogicEffect(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVELOGICEFFECT_OFFSET))(str, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetLogicEffectCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveLogicEffectByLogicEffectGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REMOVELOGICEFFECTBYLOGICEFFECTGROUPID_OFFSET))(str, nullptr);
		}

		::MX::Data::Excel::CostumeExcel* GetCostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETCOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* GetCharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETCHARACTEREXCEL_OFFSET))(nullptr);
		}

		::System::Void OnInteractWithTSS(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ONINTERACTWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInteractWithTSS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISINTERACTWITHTSS_OFFSET))(nullptr);
		}

		::System::Void set_IsInteractWithTSS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ISINTERACTWITHTSS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_CharacterGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHARACTERGROUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrivateWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISPRIVATEWEAPON_OFFSET))(nullptr);
		}

		::System::Void set_IsPrivateWeapon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_ISPRIVATEWEAPON_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get_WeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_WEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set_WeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_WEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* get_GearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_GEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set_GearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_GEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CostumeSetting* get_CostumeSetting()
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_COSTUMESETTING_OFFSET))(nullptr);
		}

		::System::Void set_CostumeSetting(::MX::Logic::Data::CostumeSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_COSTUMESETTING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TagList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_TAGLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISNPC_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckCanUseAutoPublicSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_CHECKCANUSEAUTOPUBLICSKILL_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

		::System::Int32 GetSkillLevel(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::CharacterGroup* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterExcel* arg5, ::MX::Data::Excel::CharacterAIExcel* arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::MX::Logic::Data::WeaponSetting* arg9, ::MX::Logic::Data::GearSetting* arg10, ::MX::Logic::Data::CostumeSetting* arg11)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterExcel*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int64, ::System::Int64, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::CharacterGroup* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterExcel* arg5, ::MX::Data::Excel::CharacterAIExcel* arg6, ::System::Int64 arg7, ::System::Int64 arg8)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterExcel*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_LATEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCurrentActionExSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISCURRENTACTIONEXSKILL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCurrentActionPublicSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_ISCURRENTACTIONPUBLICSKILL_OFFSET))(nullptr);
		}

		Il2CppObject* FindActions(::MX::Logic::Skills::SkillType* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDACTIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllActions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETALLACTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* FindPrimaryTargetingRule(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDPRIMARYTARGETINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindCharacterTargetAvailable(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDCHARACTERTARGETAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndSetPublicSkill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CHECKANDSETPUBLICSKILL_OFFSET))(nullptr);
		}

		::System::Void StartInteractWithTSS(::MX::Logic::BattleEntities::TSSCharacter* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::TSSCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_STARTINTERACTWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractWithTSS(::MX::Logic::BattleEntities::TSSCharacter* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::TSSCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINISHINTERACTWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_UPDATEPASSIVE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* FindSkillSlot(::System::String* str, ::MX::Data::CharacterSkillListKey* arg)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::System::String*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_FINDSKILLSLOT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CanUseSkill(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CANUSESKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseAutoSkill(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CANUSEAUTOSKILL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EquipmentProcessor* get_EquipmentProcessor()
		{
			return ((::MX::Logic::BattleEntities::EquipmentProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_EQUIPMENTPROCESSOR_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentProcessor(::MX::Logic::BattleEntities::EquipmentProcessor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EquipmentProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_SET_EQUIPMENTPROCESSOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Equipments()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GET_EQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Void InitEquipmentOptions(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_INITEQUIPMENTOPTIONS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 EquipmentSumOf(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Int64(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_EQUIPMENTSUMOF_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPassive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_RESETPASSIVE_OFFSET))(nullptr);
		}

		::System::Void RegisterPassive(::MX::Logic::Skills::Passive::PassiveSkill* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_REGISTERPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void InitPassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_INITPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearPassiveOnDead(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_CLEARPASSIVEONDEAD_OFFSET))(arg, nullptr);
		}

		::System::Void EnablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ENABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void DisablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_DISABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatChangeEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_ADDSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUPPORTACTOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

