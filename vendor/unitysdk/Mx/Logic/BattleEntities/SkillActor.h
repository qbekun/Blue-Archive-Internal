#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Logic::BattleEntities { class SkillProcessor; }
namespace MX::Logic::Actions { class ActionLock; }
namespace MX::Logic::BattleEntities { class FormConversionInfo; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class SupportSkillEventArgs; }
namespace MX::Logic::BattleEntities { class SkillActionRegisteredEventArgs; }
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace FlatData { class DamageAttribute; }
namespace MX::Logic::Battles { class DotEventArgs; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
class AutoUseRuleDAO;
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::Actions { class NewSkillAction; }
namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x1143FC0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x1143FD0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1143FF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1144090)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1144130)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x1144160)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x1144200)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x11442A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x11442D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x1144370)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1144410)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONSKILLACTIONREGISTERED_OFFSET UNITYSDK_OFFSET(0x1144440)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_FORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1144470)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_FORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1144510)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONFORMCONVERTED_OFFSET UNITYSDK_OFFSET(0x11445B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x11445E0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x11445F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1144600)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SKILLPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1144620)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1144630)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ACTIONTABLE_OFFSET UNITYSDK_OFFSET(0x1144640)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x1144650)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1144680)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x11446B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x11446C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BULLETTYPEOVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x11446E0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BULLETTYPEOVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x11446F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETEXTRASKILLCOSTUSED_OFFSET UNITYSDK_OFFSET(0x1144710)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1144780)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_FORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1144790)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTFORM_OFFSET UNITYSDK_OFFSET(0x11447A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTFORM_OFFSET UNITYSDK_OFFSET(0x11447B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMTOCONVERT_OFFSET UNITYSDK_OFFSET(0x11447D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_FORMTOCONVERT_OFFSET UNITYSDK_OFFSET(0x11447E0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ISFORMCONVERSED_OFFSET UNITYSDK_OFFSET(0x1144800)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1144820)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SKILLLISTKEY_OFFSET UNITYSDK_OFFSET(0x1144840)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_REQUIRERELEASEFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x11448B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x11448C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTDEFAULTFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1144A10)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTDEFAULTFORMCONVERSIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1144AE0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CHECKANDCONVERTFORM_OFFSET UNITYSDK_OFFSET(0x1144C70)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CONVERTFORM_OFFSET UNITYSDK_OFFSET(0x1144BA0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1144E00)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1144EE0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CREATEBULLETARMORFACTORTABLE_OFFSET UNITYSDK_OFFSET(0x1145240)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x11454B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_TRYGETOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x11455D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETOVERRIDEBULLETARMORDAMAGEFACTORLIST_OFFSET UNITYSDK_OFFSET(0x1145630)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_OVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x11456B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x1145870)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x11458C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEBULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x1146160)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEBULLETTYPEOVERRIDETABLEBYSKILLCHANNEL_OFFSET UNITYSDK_OFFSET(0x1145CF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET UNITYSDK_OFFSET(0x11465D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET UNITYSDK_OFFSET(0x11465F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET UNITYSDK_OFFSET(0x1147080)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET UNITYSDK_OFFSET(0x1147D80)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1148FF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CANUSEAUTOTARGETINGSKILL_OFFSET UNITYSDK_OFFSET(0x1146D30)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1149030)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REGISTERSKILL_OFFSET UNITYSDK_OFFSET(0x11490F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1149200)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_READY_OFFSET UNITYSDK_OFFSET(0x1149490)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ACTION_STARTED_OFFSET UNITYSDK_OFFSET(0x1149510)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ACTION_FINISHED_OFFSET UNITYSDK_OFFSET(0x1149600)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x1149710)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1149720)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1149750)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x11497A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x11497B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x11497C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADDSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x11497D0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x1149820)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x1149870)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11498C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1149910)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1149960)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11499B0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1149A00)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1149A50)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASSTATUSIMMUNE_OFFSET UNITYSDK_OFFSET(0x1149AA0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x1149AB0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x1149AC0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1149B10)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1149B20)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1149B30)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1149B40)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1149B50)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1149B60)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1149B70)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1149B80)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1149B90)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1149BA0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTOR__.CTOR_B__82_0_OFFSET UNITYSDK_OFFSET(0x1149BB0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillActor_TypeDefinitionIndex = 13119;

	class SkillActor : public ::E7::Native::NativeAudioAnalyzer
	{
	public:
		::MX::Logic::Battles::Battle* _BattleCache_k__BackingField; // 0x100
		Il2CppObject* ActionChanged; // 0x108
		Il2CppObject* ActionInterrupted; // 0x110
		Il2CppObject* StateChanged; // 0x118
		Il2CppObject* SkillActionRegistered; // 0x120
		Il2CppObject* FormChanged; // 0x128
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x130
		::MX::Logic::Actions::HeroAction* _CurrentAction_k__BackingField; // 0x138
		::MX::Logic::BattleEntities::SkillProcessor* _SkillProcessor_k__BackingField; // 0x140
		::MX::Logic::Actions::ActionLock* _ActionLock_k__BackingField; // 0x148
		Il2CppObject* _ActionTable_k__BackingField; // 0x150
		::System::Boolean skillActivated; // 0x158
		Il2CppObject* bulletArmorFactorTable; // 0x160
		Il2CppObject* bulletArmorFactorOverrideTable; // 0x168
		Il2CppObject* _BulletArmorDamageFactorOverrideTable_k__BackingField; // 0x170
		Il2CppObject* _BulletTypeOverrideTable_k__BackingField; // 0x178
		Il2CppObject* ExtraSkillCostTable; // 0x180
		::System::Int32 _FormCount_k__BackingField; // 0x188
		::MX::Logic::BattleEntities::FormConversionInfo* _CurrentForm_k__BackingField; // 0x190
		::MX::Logic::BattleEntities::FormConversionInfo* _FormToConvert_k__BackingField; // 0x198
		::System::Boolean _RequireReleaseFormConversion_k__BackingField; // 0x1A0

		::MX::Logic::Battles::Battle* get_BattleCache()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BATTLECACHE_OFFSET))(nullptr);
		}

		::System::Void set_BattleCache(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BATTLECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void add_ActionChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_ACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ActionChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_ACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ActionInterrupted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_ACTIONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ActionInterrupted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_ACTIONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnActionInterrupted(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONACTIONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_StateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_STATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_StateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_STATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnStateChanged(::MX::Logic::BattleEntities::SupportSkillEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportSkillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillActionRegistered(::MX::Logic::BattleEntities::SkillActionRegisteredEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActionRegisteredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONSKILLACTIONREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_FormChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADD_FORMCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_FormChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVE_FORMCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnFormConverted(::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ONFORMCONVERTED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::HeroAction* get_CurrentAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAction(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTACTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillProcessor* get_SkillProcessor()
		{
			return ((::MX::Logic::BattleEntities::SkillProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SKILLPROCESSOR_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionLock* get_ActionLock()
		{
			return ((::MX::Logic::Actions::ActionLock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ACTIONLOCK_OFFSET))(nullptr);
		}

		Il2CppObject* get_ActionTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ACTIONTABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_POSITION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_DIRECTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_BulletArmorDamageFactorOverrideTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET))(nullptr);
		}

		::System::Void set_BulletArmorDamageFactorOverrideTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BulletTypeOverrideTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_BULLETTYPEOVERRIDETABLE_OFFSET))(nullptr);
		}

		::System::Void set_BulletTypeOverrideTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_BULLETTYPEOVERRIDETABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetExtraSkillCostUsed(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETEXTRASKILLCOSTUSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FormCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_FormCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_FORMCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::FormConversionInfo* get_CurrentForm()
		{
			return ((::MX::Logic::BattleEntities::FormConversionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTFORM_OFFSET))(nullptr);
		}

		::System::Void set_CurrentForm(::MX::Logic::BattleEntities::FormConversionInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::FormConversionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTFORM_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::FormConversionInfo* get_FormToConvert()
		{
			return ((::MX::Logic::BattleEntities::FormConversionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMTOCONVERT_OFFSET))(nullptr);
		}

		::System::Void set_FormToConvert(::MX::Logic::BattleEntities::FormConversionInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::FormConversionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_FORMTOCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFormConversed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ISFORMCONVERSED_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::MX::Data::CharacterSkillListKey* get_SkillListKey()
		{
			return ((::MX::Data::CharacterSkillListKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SKILLLISTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_RequireReleaseFormConversion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_REQUIRERELEASEFORMCONVERSION_OFFSET))(nullptr);
		}

		::System::Void RequestFormConversion(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Int32 arg5, ::MX::Logic::BattleEntities::LogicEffectEndCondition* arg6, ::System::Int32 arg7, ::System::Boolean arg8, ::System::Boolean arg9, ::System::Boolean arg10, ::System::Boolean arg11)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::MX::Logic::BattleEntities::LogicEffectEndCondition*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTFORMCONVERSION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void RequestDefaultFormConversion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTDEFAULTFORMCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void RequestDefaultFormConversionImmediately(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REQUESTDEFAULTFORMCONVERSIONIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckAndConvertForm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CHECKANDCONVERTFORM_OFFSET))(nullptr);
		}

		::System::Void ConvertForm(::MX::Logic::BattleEntities::FormConversionInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::FormConversionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CONVERTFORM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::GroupTag* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Battles::GroupTag* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::GroupTag*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CreateBulletArmorFactorTable(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CREATEBULLETARMORFACTORTABLE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetBulletArmorDamageFactor(Il2CppObject* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetOverrideBulletArmorDamageFactor(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_TRYGETOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetOverrideBulletArmorDamageFactorList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETOVERRIDEBULLETARMORDAMAGEFACTORLIST_OFFSET))(nullptr);
		}

		::System::Void OverrideBulletArmorDamageFactor(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::DamageAttribute* arg3, ::System::Boolean arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::FlatData::DamageAttribute*, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_OVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void RemoveOverrideBulletArmorDamageFactor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveBulletArmorDamageFactorOverrideTable(::System::Int32 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEBULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveBulletTypeOverrideTableBySkillChannel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVEBULLETTYPEOVERRIDETABLEBYSKILLCHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Void UseSkill(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET))(arg, nullptr);
		}

		::System::Void UseSkill(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BehaviorType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UseSkill(::MX::Logic::BattleEntities::SkillSlot* arg, Il2CppObject* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void UseSkill(::MX::Logic::BattleEntities::SkillSlot* arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_USESKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetSkillLevel(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanUseAutoTargetingSkill(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_CANUSEAUTOTARGETINGSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterSkill(::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::CharacterSkillListKey* arg2, ::System::Boolean arg3, AutoUseRuleDAO* arg4, ::MX::Logic::Actions::IActiveSkill* arg5, ::System::Int32 arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::System::Boolean, AutoUseRuleDAO*, ::MX::Logic::Actions::IActiveSkill*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REGISTERSKILL_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void RegisterAction(::MX::Logic::Actions::NewSkillAction* arg, ::MX::Data::CharacterSkillListKey* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Actions::NewSkillAction*, ::MX::Data::CharacterSkillListKey*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REGISTERACTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Ready()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_READY_OFFSET))(nullptr);
		}

		::System::Void Action_Started(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ACTION_STARTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Action_Finished(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ACTION_FINISHED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_CurrentBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_SET_CURRENTBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_CurrentActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_CURRENTACTIONSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Alive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GET_ALIVE_OFFSET))(nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatChangeEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADDSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatusImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASSTATUSIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _.ctor_b__82_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTOR__.CTOR_B__82_0_OFFSET))(nullptr);
		}

	};
}

