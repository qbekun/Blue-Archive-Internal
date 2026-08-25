#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills::LogicEffects { class DamageEffect; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace FlatData { class StageTopography; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Skills { class DamageCriticalType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C__CALCDAMAGE_G__APPENDETCMULTIPLIERLOG|0_0_OFFSET UNITYSDK_OFFSET(0x1275A70)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETBONUSSOURCEBLACKBOARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1275A80)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCSTABILITYRATE_OFFSET UNITYSDK_OFFSET(0x1275B80)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_ISHIT_OFFSET UNITYSDK_OFFSET(0x1275D60)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETEXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x12760A0)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x1276350)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETLEVELDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x12763D0)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETSKILLTYPEOFDAMAGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1276460)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_HASIMMUNITY_OFFSET UNITYSDK_OFFSET(0x1276490)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x1276530)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCAPPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1276840)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBULLETARMORFACTOR_OFFSET UNITYSDK_OFFSET(0x1276A00)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETBULLETARMORDAMAGEFACTORSTATCORRECTION_OFFSET UNITYSDK_OFFSET(0x1276F80)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x12771F0)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBULLETARMORDAMAGEFACTOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1276E70)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBONUSSOURCEBLACKBOARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x12775F0)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETEXTRASTATAMOUNT_OFFSET UNITYSDK_OFFSET(0x1277690)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCAPPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x12779D0)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCEXTRASTATAMOUNT_OFFSET UNITYSDK_OFFSET(0x1277C40)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_DAMAGEREDUCTIONRATE_OFFSET UNITYSDK_OFFSET(0x1277E60)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_O5CF427A904269292990047F89725C0616ACFB420ECEDEEBEC928C31163C735C2_OFFSET UNITYSDK_OFFSET(0x1278130)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETNORMALDISTRIBUTIONRANDOM_OFFSET UNITYSDK_OFFSET(0x127E830)
#define MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCDAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0x1277550)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int O67e2deb164a642e284e632d176a8fa59b7557e3298a09a40890efaa4393f245c_TypeDefinitionIndex = 14074;

	class O67e2deb164a642e284e632d176a8fa59b7557e3298a09a40890efaa4393f245c : public Il2CppObject
	{
	public:
		::System::Void _CalcDamage_g__AppendEtcMultiplierLog|0_0(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C__CALCDAMAGE_G__APPENDETCMULTIPLIERLOG|0_0_OFFSET))(str, arg, nullptr);
		}

		::System::Int64 GetBonusSourceBlackboardAmount(::MX::Logic::Battles::BattleBlackboard* arg, ::System::String* str, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Data::BlackboardKeyType* arg4, ::MX::Core::Math::BasisPoint* arg5)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::BattleBlackboard*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::BlackboardKeyType*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETBONUSSOURCEBLACKBOARDAMOUNT_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::Math::BasisPoint* CalcStabilityRate(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCSTABILITYRATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHit(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::LogicEffects::DamageEffect* arg2, ::MX::Core::Math::IPseudoRandomService* arg3, ::FlatData::StageTopography* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::LogicEffects::DamageEffect*, ::MX::Core::Math::IPseudoRandomService*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_ISHIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetExtraStatRate(::MX::Logic::Skills::ExtraStatType* arg, ::MX::Core::Math::BasisPoint* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Skills::ExtraStatType*, ::MX::Core::Math::BasisPoint*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETEXTRASTATRATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsCritical(::MX::Logic::Skills::DamageCriticalType* arg, ::MX::Core::Math::BasisPoint* arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::DamageCriticalType*, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_ISCRITICAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetLevelDamageFactor(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETLEVELDAMAGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::SkillType* GetSkillTypeOfDamageEffect(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETSKILLTYPEOFDAMAGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasImmunity(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_HASIMMUNITY_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* CalcCriticalChance(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCCRITICALCHANCE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* CalcApplyDamageRatio(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCAPPLYDAMAGERATIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* CalcBulletArmorFactor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::FlatData::BulletType* arg7)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBULLETARMORFACTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Int64 GetBulletArmorDamageFactorStatCorrection(::System::Boolean arg, ::FlatData::BulletType* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::FlatData::ArmorType* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5)
		{
			return ((::System::Int64(*)(::System::Boolean, ::FlatData::BulletType*, ::MX::Logic::BattleEntities::BattleEntity*, ::FlatData::ArmorType*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETBULLETARMORDAMAGEFACTORSTATCORRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* CalcAttackPower(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::MX::Core::Math::IPseudoRandomService* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCATTACKPOWER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CalcBulletArmorDamageFactorOverride(::FlatData::BulletType* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::BulletType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBULLETARMORDAMAGEFACTOROVERRIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcBonusSourceBlackboardAmount(::MX::Logic::Battles::BattleBlackboard* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::BattleBlackboard*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCBONUSSOURCEBLACKBOARDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetExtraStatAmount(::MX::Logic::Skills::ExtraStatType* arg, ::MX::Core::Math::BasisPoint* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4)
		{
			return ((::System::Int64(*)(::MX::Logic::Skills::ExtraStatType*, ::MX::Core::Math::BasisPoint*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETEXTRASTATAMOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::Math::BasisPoint* CalcApplyDamageRatio2(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCAPPLYDAMAGERATIO2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 CalcExtraStatAmount(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCEXTRASTATAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single DamageReductionRate(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			return ((::System::Single(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_DAMAGEREDUCTIONRATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageResult* O5cf427a904269292990047f89725c0616acfb420ecedeebec928c31163c735c2(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageEffect* arg2, ::MX::Core::Math::IPseudoRandomService* arg3, ::FlatData::StageTopography* arg4)
		{
			return ((::MX::Logic::Battles::DamageResult*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageEffect*, ::MX::Core::Math::IPseudoRandomService*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_O5CF427A904269292990047F89725C0616ACFB420ECEDEEBEC928C31163C735C2_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetNormalDistributionRandom(::MX::Core::Math::IPseudoRandomService* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Core::Math::IPseudoRandomService*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_GETNORMALDISTRIBUTIONRANDOM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 CalcDamagePower(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_O67E2DEB164A642E284E632D176A8FA59B7557E3298A09A40890EFAA4393F245C_CALCDAMAGEPOWER_OFFSET))(arg, nullptr);
		}

	};
}

