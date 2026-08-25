#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Core::Services { class Hash64; }
namespace MX::Core::Math { class BasisPoint; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills::LogicEffects { class ResolvePriority; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x141BFC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x141BFD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x141BFE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTHITSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x141BFF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_LOGICEFFECTHITSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x141C000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x141C010)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_INVOKERENTITYID_OFFSET UNITYSDK_OFFSET(0x141C020)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x141C0F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x14102B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_ORIGINALTARGET_OFFSET UNITYSDK_OFFSET(0x141C100)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x141C110)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x141C120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXPIRATIONCHECKOWNER_OFFSET UNITYSDK_OFFSET(0x141C130)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_EXPIRATIONCHECKOWNER_OFFSET UNITYSDK_OFFSET(0x141C140)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x141C150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SPAWNRATE_OFFSET UNITYSDK_OFFSET(0x141C160)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x141C170)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x141C180)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x141C190)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x141C1A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_APPLYRATE_OFFSET UNITYSDK_OFFSET(0x141C1B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_COMMONVISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x141C1C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x141C1D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x141C1E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x141C1F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x141C200)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x141C210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x141C220)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x141C230)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x141C240)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_RESOLVEPRIORITY_OFFSET UNITYSDK_OFFSET(0x141C260)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x141C270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_RESOLVEINDEX_OFFSET UNITYSDK_OFFSET(0x141C280)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_RESOLVEINDEX_OFFSET UNITYSDK_OFFSET(0x141C290)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x141C2A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x141C2B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x141C2C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141C2D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x141C2E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x141C2F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CANTARGETTSAINTERACTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x141C300)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DONOTSHOWEFFECTSKILLVISUAL_OFFSET UNITYSDK_OFFSET(0x141C310)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DONOTSHOWEFFECTSKILLVISUAL_OFFSET UNITYSDK_OFFSET(0x141C320)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DONOTSHOWEFFECTCOMMONVISUAL_OFFSET UNITYSDK_OFFSET(0x141C330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DONOTSHOWEFFECTCOMMONVISUAL_OFFSET UNITYSDK_OFFSET(0x141C340)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140A120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141C350)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SETEXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x14178E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GETVALUECHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x1414080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GETVALUECHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x14140D0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int LogicEffect_TypeDefinitionIndex = 14771;

	class LogicEffect : public Il2CppObject
	{
	public:
		::System::Int32 _LogicEffectLevel_k__BackingField; // 0x10
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* _LogicEffectHitSpecification_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* _Target_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _OriginalTarget_k__BackingField; // 0x38
		Il2CppObject* _ExpirationCheck_k__BackingField; // 0x40
		::MX::Logic::BattleEntities::Entity* _ExpirationCheckOwner_k__BackingField; // 0x48
		::System::String* _SkillEntityName_k__BackingField; // 0x50
		::System::Int64 _SpawnRate_k__BackingField; // 0x58
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x60
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x68
		::System::String* templateId; // 0x70
		::MX::Core::Services::Hash64* TemplateIdHash; // 0x78
		::System::Int32 _Channel_k__BackingField; // 0x80
		::MX::Core::Math::BasisPoint* _ApplyRate_k__BackingField; // 0x88
		::System::UInt32 _CommonVisualIdHash_k__BackingField; // 0x90
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x94
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x9C
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0xA4
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0xB0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* priority; // 0xB8
		::System::Int32 _Priority_k__BackingField; // 0xBC
		::System::Int32 _ResolveIndex_k__BackingField; // 0xC0
		::System::Int32 _DotIndex_k__BackingField; // 0xC4
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0xC8
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0xCC
		::System::Boolean _CanTargetTSAInteractingCharacter_k__BackingField; // 0xCD
		::System::Boolean _DoNotShowEffectSkillVisual_k__BackingField; // 0xCE
		::System::Boolean _DoNotShowEffectCommonVisual_k__BackingField; // 0xCF

		::System::Int32 get_LogicEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTLEVEL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* get_LogicEffectHitSpecification()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTHITSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectHitSpecification(::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_LOGICEFFECTHITSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_INVOKERENTITYID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Target()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TARGET_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TARGETENTITYID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OriginalTarget()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_ORIGINALTARGET_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExpirationCheck()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXPIRATIONCHECK_OFFSET))(nullptr);
		}

		::System::Void set_ExpirationCheck(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_EXPIRATIONCHECK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_ExpirationCheckOwner()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXPIRATIONCHECKOWNER_OFFSET))(nullptr);
		}

		::System::Void set_ExpirationCheckOwner(::MX::Logic::BattleEntities::Entity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_EXPIRATIONCHECKOWNER_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_SpawnRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_SPAWNRATE_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CHANNEL_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ApplyRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_APPLYRATE_OFFSET))(nullptr);
		}

		::System::UInt32 get_CommonVisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_COMMONVISUALIDHASH_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_BulletPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_BulletDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETDIRECTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::System::Void set_BulletEntity(::MX::Logic::BattleEntities::Entity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_BULLETENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ResolvePriority* get_ResolvePriority()
		{
			return ((::MX::Logic::Skills::LogicEffects::ResolvePriority*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_RESOLVEPRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_ResolveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_RESOLVEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ResolveIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_RESOLVEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_DotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTargetTSAInteractingCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_CANTARGETTSAINTERACTINGCHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotShowEffectSkillVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DONOTSHOWEFFECTSKILLVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_DoNotShowEffectSkillVisual(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DONOTSHOWEFFECTSKILLVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DoNotShowEffectCommonVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GET_DONOTSHOWEFFECTCOMMONVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_DoNotShowEffectCommonVisual(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SET_DONOTSHOWEFFECTCOMMONVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::SkillSpecification* arg, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetExpirationCheck(Il2CppObject* arg, ::MX::Logic::BattleEntities::Entity* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_SETEXPIRATIONCHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetValueChangedByExtraCost(::System::Int64 arg, ::System::Int32 arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GETVALUECHANGEDBYEXTRACOST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetValueChangedByExtraCost(::MX::Core::Math::BasisPoint* arg, ::System::Int32 arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::BasisPoint*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECT_GETVALUECHANGEDBYEXTRACOST_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

