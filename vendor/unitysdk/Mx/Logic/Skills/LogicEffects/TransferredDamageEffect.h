#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace FlatData { class FontType; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1423840)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_ORIGINALDAMAGE_OFFSET UNITYSDK_OFFSET(0x1423850)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1423860)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1423870)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1423880)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x1423890)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x14238A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x14238B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x14238C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14238D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1423AA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1423AB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_TRANSFERRATE_OFFSET UNITYSDK_OFFSET(0x1423AC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1423AD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1423AE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_FIRSTATTACKER_OFFSET UNITYSDK_OFFSET(0x1423AF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_TRANSFERREDDAMAGE_OFFSET UNITYSDK_OFFSET(0x1423B00)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int TransferredDamageEffect_TypeDefinitionIndex = 14814;

	class TransferredDamageEffect : public Il2CppObject
	{
	public:
		::System::Int64 _TransferredDamage_k__BackingField; // 0xD0
		::System::Int64 _OriginalDamage_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _TransferRate_k__BackingField; // 0xE0
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0xE8
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0xEC
		::System::Boolean _IgnoreShield_k__BackingField; // 0xF0
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0xF1
		::FlatData::FontType* _HitResultType_k__BackingField; // 0xF4
		::MX::Logic::BattleEntities::EntityId* _FirstAttacker_k__BackingField; // 0xF8
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0xFC
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0x100
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0x104

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_ORIGINALDAMAGE_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_HitResultType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_HITRESULTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreShield(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_IGNORESHIELD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::System::Void set_HitResultType(::FlatData::FontType* arg)
		{
			((::System::Void(*)(::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_HITRESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::FontType* arg2, ::MX::Core::Math::BasisPoint* arg3, ::MX::Logic::Data::LogicEffectValue* arg4, ::FlatData::LogicEffectCategory* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg7, ::MX::Logic::Skills::DamageRatioApplyType* arg8, ::MX::Logic::Skills::DamageRatioApplyType* arg9, ::MX::Logic::BattleEntities::EntityId* arg10)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::FontType*, ::MX::Core::Math::BasisPoint*, ::MX::Logic::Data::LogicEffectValue*, ::FlatData::LogicEffectCategory*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::MX::Logic::Skills::DamageRatioApplyType*, ::MX::Logic::Skills::DamageRatioApplyType*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void set_DoNotKillTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_SET_DONOTKILLTARGET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TransferRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_TRANSFERRATE_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_FirstAttacker()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_FIRSTATTACKER_OFFSET))(nullptr);
		}

		::System::Int64 get_TransferredDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TRANSFERREDDAMAGEEFFECT_GET_TRANSFERREDDAMAGE_OFFSET))(nullptr);
		}

	};
}

