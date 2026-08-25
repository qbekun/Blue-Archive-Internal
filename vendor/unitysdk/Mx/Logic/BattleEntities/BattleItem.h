#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }
namespace MX::Logic::Battles { class BattleItemActivatedEventArgs; }
namespace MX::Logic::Battles { class BattleItemRecognitionEventArgs; }
namespace MX::Logic::Battles { class BattleItemEffectEventArgs; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1130A80)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1130B20)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x1130BC0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1130BF0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1130C90)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONACTIVATED_OFFSET UNITYSDK_OFFSET(0x1130D30)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_RECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1130D60)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_RECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1130E00)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1130EA0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_EFFECTED_OFFSET UNITYSDK_OFFSET(0x1130ED0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_EFFECTED_OFFSET UNITYSDK_OFFSET(0x1130F70)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONEFFECTED_OFFSET UNITYSDK_OFFSET(0x1131010)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1131040)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1131050)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1131060)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1131070)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_BODYTORECOGNIZE_OFFSET UNITYSDK_OFFSET(0x11310C0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_BODYTOEFFECT_OFFSET UNITYSDK_OFFSET(0x11310D0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RECOGNIZECIRCLE_OFFSET UNITYSDK_OFFSET(0x11310E0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_EFFECTCIRCLE_OFFSET UNITYSDK_OFFSET(0x1131160)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_POSITIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x11311E0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_POSITIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x11311F0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x1131200)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_HITTARGETS_OFFSET UNITYSDK_OFFSET(0x1131210)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RECOGNIZEDTARGETS_OFFSET UNITYSDK_OFFSET(0x1131220)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x1131230)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1131240)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1131250)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x1131260)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETEXTRASKILLCOSTUSED_OFFSET UNITYSDK_OFFSET(0x1131270)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x1131280)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x1131290)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_APPLYMOVINGAREABEFOREACTIVATION_OFFSET UNITYSDK_OFFSET(0x11312A0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_EXTRASKILLCOSTUSED_OFFSET UNITYSDK_OFFSET(0x11312B0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x11312C0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x11312D0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_SKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x11312E0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1131300)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_SKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1131310)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x11306F0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1130010)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1131330)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SETFORCEMOVECOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x1131C50)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_CANFORCEMOVEINTERRUPTCURRENTACTION_OFFSET UNITYSDK_OFFSET(0x112F780)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSEXPIRED_OFFSET UNITYSDK_OFFSET(0x112FAE0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSACTIVE_OFFSET UNITYSDK_OFFSET(0x1131D30)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSEFFECT_OFFSET UNITYSDK_OFFSET(0x1131DB0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1133720)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1133730)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1133740)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1133750)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1133760)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1133770)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x1133780)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x1133790)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x11337A0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x11337B0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASSTATUSIMMUNE_OFFSET UNITYSDK_OFFSET(0x11337C0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADDSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x11337D0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x1133820)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1133870)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1133880)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1133890)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11338A0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11338B0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11338C0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11338D0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x11338E0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x11338F0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1133900)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x112FDC0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM__.CTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1133910)
#define MX_LOGIC_BATTLEENTITIES_BATTLEITEM__.CTOR_B__83_1_OFFSET UNITYSDK_OFFSET(0x1133940)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BattleItem_TypeDefinitionIndex = 13065;

	class BattleItem : public ::E7::Native::NativeAudioAnalyzer
	{
	public:
		Il2CppObject* Expired; // 0x100
		Il2CppObject* Activated; // 0x108
		Il2CppObject* Recognized; // 0x110
		Il2CppObject* Effected; // 0x118
		::MX::Logic::Battles::Battle* battle; // 0x120
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x128
		::MX::Logic::Data::BattleItemEntityValue* _EntityValue_k__BackingField; // 0x130
		::System::String* _EntityName_k__BackingField; // 0x138
		::MX::Core::Physics2D::Bodies::Body2D* _bodyToRecognize_k__BackingField; // 0x140
		::MX::Core::Physics2D::Bodies::Body2D* _bodyToEffect_k__BackingField; // 0x148
		::System::Single _PositionHeight_k__BackingField; // 0x150
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x154
		Il2CppObject* _HitTargets_k__BackingField; // 0x158
		Il2CppObject* _RecognizedTargets_k__BackingField; // 0x160
		::MX::Logic::BattleEntities::BattleEntity* _Creator_k__BackingField; // 0x168
		::System::Boolean isAlive; // 0x170
		::System::Boolean _IsExpired_k__BackingField; // 0x171
		::System::Int32 elapsed; // 0x174
		::System::Int32 _IndexSummonedBy_k__BackingField; // 0x178
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x17C
		::System::Boolean _ApplyMovingAreaBeforeActivation_k__BackingField; // 0x180
		::System::Int32 _ExtraSkillCostUsed_k__BackingField; // 0x184
		::MX::Logic::BattleEntities::BattleEntity* _SkillCommandSelectedTarget_k__BackingField; // 0x188
		::UnityEngine::Vector2* _SkillCommandSelectedPosition_k__BackingField; // 0x190

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnExpired(::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Activated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Activated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnActivated(::MX::Logic::Battles::BattleItemActivatedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemActivatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Recognized(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_RECOGNIZED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Recognized(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_RECOGNIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRecognized(::MX::Logic::Battles::BattleItemRecognitionEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemRecognitionEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONRECOGNIZED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Effected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADD_EFFECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Effected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVE_EFFECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEffected(::MX::Logic::Battles::BattleItemEffectEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemEffectEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ONEFFECTED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleItemEntityValue* get_EntityValue()
		{
			return ((::MX::Logic::Data::BattleItemEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ENTITYVALUE_OFFSET))(nullptr);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ENTITYNAME_OFFSET))(nullptr);
		}

		::System::String* get_ResourceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RESOURCENAME_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_bodyToRecognize()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_BODYTORECOGNIZE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_bodyToEffect()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_BODYTOEFFECT_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_RecognizeCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RECOGNIZECIRCLE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_EffectCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_EFFECTCIRCLE_OFFSET))(nullptr);
		}

		::System::Single get_PositionHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_POSITIONHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_PositionHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_POSITIONHEIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_GROUPTAG_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_HITTARGETS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RecognizedTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_RECOGNIZEDTARGETS_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Creator()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CREATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::System::Void set_IsExpired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IndexSummonedBy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_INDEXSUMMONEDBY_OFFSET))(nullptr);
		}

		::System::Int32 GetExtraSkillCostUsed(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETEXTRASKILLCOSTUSED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::Void set_MovingAreaOption(::MX::Logic::Skills::MovingAreaOptions* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::MovingAreaOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_MOVINGAREAOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyMovingAreaBeforeActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_APPLYMOVINGAREABEFOREACTIVATION_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraSkillCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_EXTRASKILLCOSTUSED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_SkillCommandSelectedTarget()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLCOMMANDSELECTEDTARGET_OFFSET))(nullptr);
		}

		::System::Void set_SkillCommandSelectedTarget(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_SKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_SkillCommandSelectedPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_SKILLCOMMANDSELECTEDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_SkillCommandSelectedPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_SKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Data::BattleItemEntityValue* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::MX::Logic::Battles::GroupTag* arg8, ::System::Int32 arg9, ::System::Int32 arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ProcessRecognized(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSRECOGNIZED_OFFSET))(arg, nullptr);
		}

		::System::Void SetForceMoveCommandInfo(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SETFORCEMOVECOMMANDINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanForceMoveInterruptCurrentAction(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_CANFORCEMOVEINTERRUPTCURRENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessExpired(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessActive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEffect(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_PROCESSEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_ALIVE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_CurrentBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_CURRENTBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_CurrentActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTACTIONSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::HeroAction* get_CurrentAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAction(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_SET_CURRENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatusImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASSTATUSIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatChangeEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_ADDSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__83_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM__.CTOR_B__83_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__83_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEITEM__.CTOR_B__83_1_OFFSET))(nullptr);
		}

	};
}

