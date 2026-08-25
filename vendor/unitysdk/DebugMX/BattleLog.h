#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class DamageEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldEffect; }
namespace MX::Logic::Skills::LogicEffects { class TransferredDamageEffect; }
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class StageTopography; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Skills { class DamageCriticalType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills::LogicEffects { class DamagedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class MaxHpOverHealEffect; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Skills::LogicEffects { class ConfrontationGaugeRecoverEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealEffect; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::BattleEntities { class AccumulateEffectInfo; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Logic::Skills::LogicEffects { class HealConvertDamageEffect; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Skills::LogicEffects { class ApplyLogicDispelCountEffect; }
namespace MX::Logic::Battles { class GroundEvent; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Logic::Skills::LogicEffects { class TargetSlotExSkillCostOverrideEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeCurrentHpRateEffect; }

#define DEBUGMX_BATTLELOG_LOG_OFFSET UNITYSDK_OFFSET(0xDE0360)
#define DEBUGMX_BATTLELOG_LOG_OFFSET UNITYSDK_OFFSET(0xDE0370)
#define DEBUGMX_BATTLELOG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xDE0380)
#define DEBUGMX_BATTLELOG_LOGERROR_OFFSET UNITYSDK_OFFSET(0xDE0390)
#define DEBUGMX_BATTLELOG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xDE03A0)
#define DEBUGMX_BATTLELOG_LOGCOVERRESULT_OFFSET UNITYSDK_OFFSET(0xDE03B0)
#define DEBUGMX_BATTLELOG_LOGATTACHDAMAGEOVERTIME_OFFSET UNITYSDK_OFFSET(0xDE03C0)
#define DEBUGMX_BATTLELOG_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0xDE03D0)
#define DEBUGMX_BATTLELOG_APPENDDAMAGEINVOKERANDTARGET_OFFSET UNITYSDK_OFFSET(0xDE03E0)
#define DEBUGMX_BATTLELOG_APPENDLOGICFRAME_OFFSET UNITYSDK_OFFSET(0xDE03F0)
#define DEBUGMX_BATTLELOG_APPENDSHIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xDE0400)
#define DEBUGMX_BATTLELOG_APPENDSHIELDEFFECTAPPLYLEFTOVERTOHEAL_OFFSET UNITYSDK_OFFSET(0xDE0410)
#define DEBUGMX_BATTLELOG_APPENDSHIELDEFFECTAPPLYLOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET UNITYSDK_OFFSET(0xDE0420)
#define DEBUGMX_BATTLELOG_APPENDTRANSFERREDDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0430)
#define DEBUGMX_BATTLELOG_APPENDIMMUNE_OFFSET UNITYSDK_OFFSET(0xDE0440)
#define DEBUGMX_BATTLELOG_APPENDHITRATE_OFFSET UNITYSDK_OFFSET(0xDE0450)
#define DEBUGMX_BATTLELOG_APPENDCANNOTEVADE_OFFSET UNITYSDK_OFFSET(0xDE0460)
#define DEBUGMX_BATTLELOG_APPENDEVADE_OFFSET UNITYSDK_OFFSET(0xDE0470)
#define DEBUGMX_BATTLELOG_APPENDAFTEREXTRASTATDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0480)
#define DEBUGMX_BATTLELOG_APPENDAFTERDAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xDE0490)
#define DEBUGMX_BATTLELOG_APPENDAFTERSTABILITYDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE04A0)
#define DEBUGMX_BATTLELOG_APPENDRESULTDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE04B0)
#define DEBUGMX_BATTLELOG_APPENDBULLETARMORFACTOR_OFFSET UNITYSDK_OFFSET(0xDE04C0)
#define DEBUGMX_BATTLELOG_APPENDFACTORS_OFFSET UNITYSDK_OFFSET(0xDE04D0)
#define DEBUGMX_BATTLELOG_APPENDEXTRASTATBONUSDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE04E0)
#define DEBUGMX_BATTLELOG_APPENDBONUSSOURCEBLACKBOARDDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE04F0)
#define DEBUGMX_BATTLELOG_APPENDADDFIXEDAMOUNTDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0500)
#define DEBUGMX_BATTLELOG_APPENDDAMAGEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xDE0510)
#define DEBUGMX_BATTLELOG_APPENDHEALMODIFIERS_OFFSET UNITYSDK_OFFSET(0xDE0520)
#define DEBUGMX_BATTLELOG_APPENDPERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xDE0530)
#define DEBUGMX_BATTLELOG_APPENDCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xDE0540)
#define DEBUGMX_BATTLELOG_APPENDCRITICALDAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xDE0550)
#define DEBUGMX_BATTLELOG_APPENDCRITICALCHECK_OFFSET UNITYSDK_OFFSET(0xDE0560)
#define DEBUGMX_BATTLELOG_APPENDDAMAGEREDUTIONRATE_OFFSET UNITYSDK_OFFSET(0xDE0570)
#define DEBUGMX_BATTLELOG_APPENDREDUCTEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0580)
#define DEBUGMX_BATTLELOG_APPENDDISTRIBUTIONDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0590)
#define DEBUGMX_BATTLELOG_APPENDHEALEFFECT_OFFSET UNITYSDK_OFFSET(0xDE05A0)
#define DEBUGMX_BATTLELOG_APPENDTEMPORARYHPINFO_OFFSET UNITYSDK_OFFSET(0xDE05B0)
#define DEBUGMX_BATTLELOG_APPENDCONFRONTATIONGAUGE_OFFSET UNITYSDK_OFFSET(0xDE05C0)
#define DEBUGMX_BATTLELOG_APPENDCONFRONTATIONGAUGERECOVEREFFECT_OFFSET UNITYSDK_OFFSET(0xDE05D0)
#define DEBUGMX_BATTLELOG_APPENDSHIELDHEALEFFECT_OFFSET UNITYSDK_OFFSET(0xDE05E0)
#define DEBUGMX_BATTLELOG_APPENDDECIDEAPPLYCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0xDE05F0)
#define DEBUGMX_BATTLELOG_APPENDACCUMUATIONAMOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xDE0600)
#define DEBUGMX_BATTLELOG_APPENDACCUMUATIONEXPIRED_OFFSET UNITYSDK_OFFSET(0xDE0610)
#define DEBUGMX_BATTLELOG_APPENDACCUMUATIONLOGICEFFECTOCCURRED_OFFSET UNITYSDK_OFFSET(0xDE0620)
#define DEBUGMX_BATTLELOG_APPENDPSEUDORANDOM_OFFSET UNITYSDK_OFFSET(0xDE0630)
#define DEBUGMX_BATTLELOG_APPENDHEALCONVERTDAMAGE_OFFSET UNITYSDK_OFFSET(0xDE0640)
#define DEBUGMX_BATTLELOG_APPENDDAMAGEFLAG_OFFSET UNITYSDK_OFFSET(0xDE0650)
#define DEBUGMX_BATTLELOG_APPENDAPPLYLOGICDISPELCOUNT_OFFSET UNITYSDK_OFFSET(0xDE0660)
#define DEBUGMX_BATTLELOG_APPENDAPPLYLOGICDISPELCOUNTAPPLYLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0xDE0670)
#define DEBUGMX_BATTLELOG_APPENDGROUNDEVENT_OFFSET UNITYSDK_OFFSET(0xDE0680)
#define DEBUGMX_BATTLELOG_APPENDGROUNDEVENTLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define DEBUGMX_BATTLELOG_ENDWRITE_OFFSET UNITYSDK_OFFSET(0xDE0690)
#define DEBUGMX_BATTLELOG_LOGPSEUDORANDOM_OFFSET UNITYSDK_OFFSET(0xDE06A0)
#define DEBUGMX_BATTLELOG_LOGABILITYAPPLYRESULT_OFFSET UNITYSDK_OFFSET(0xDE06B0)
#define DEBUGMX_BATTLELOG_LOGSTATCHANGECURRENTEFFECT_OFFSET UNITYSDK_OFFSET(0xDE06C0)
#define DEBUGMX_BATTLELOG_LOGSTATCHANGERESULTEFFECT_OFFSET UNITYSDK_OFFSET(0xDE06D0)
#define DEBUGMX_BATTLELOG_GETEXTRASTATDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0xDE06E0)
#define DEBUGMX_BATTLELOG_GETBLACKBOARDDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0xDE08A0)
#define DEBUGMX_BATTLELOG_LOGLOGICEFFECTDURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xDE08F0)
#define DEBUGMX_BATTLELOG_LOGLOGICEFFECTDURATIONNOTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define DEBUGMX_BATTLELOG_WRITEFULLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xDE0900)
#define DEBUGMX_BATTLELOG_DUMPFULLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xDE0910)
#define DEBUGMX_BATTLELOG_LOGTARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xDE0920)
#define DEBUGMX_BATTLELOG_APPENDCHANGECURRENTHPRATEEFFECT_OFFSET UNITYSDK_OFFSET(0xDE0930)

namespace DebugMX
{
	inline static constexpr unsigned int BattleLog_TypeDefinitionIndex = 10130;

	class BattleLog : public Il2CppObject
	{
	public:
		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOG_OFFSET))(str, nullptr);
		}

		::System::Void Log(::System::String* str, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogWarning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGWARNING_OFFSET))(str, nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGERROR_OFFSET))(str, nullptr);
		}

		::System::Void DrawLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Color* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_DRAWLINE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void LogCoverResult(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::IObstacle* arg4, ::System::Boolean arg5, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::IObstacle*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGCOVERRESULT_OFFSET))(arg, arg2, arg3, arg4, arg5, str, nullptr);
		}

		::System::Void LogAttachDamageOverTime(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGATTACHDAMAGEOVERTIME_OFFSET))(arg, nullptr);
		}

		::System::Void BeginWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_BEGINWRITE_OFFSET))(nullptr);
		}

		::System::Void AppendDamageInvokerAndTarget(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDAMAGEINVOKERANDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void AppendLogicFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDLOGICFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void AppendShieldEffect(::MX::Logic::Skills::LogicEffects::ShieldEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDSHIELDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AppendShieldEffectApplyLeftoverToHeal(::MX::Logic::Skills::LogicEffects::ShieldEffect* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDSHIELDEFFECTAPPLYLEFTOVERTOHEAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendShieldEffectApplyLogicEffectGroupIdInsteadShield(::MX::Logic::Skills::LogicEffects::ShieldEffect* arg, ::MX::Logic::Skills::LogicEffects::ShieldEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDSHIELDEFFECTAPPLYLOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendTransferredDamage(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect* arg, ::System::Int64 arg2, ::MX::Core::Math::BasisPoint* arg3, ::MX::Core::Math::BasisPoint* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect*, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDTRANSFERREDDAMAGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AppendImmune(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendHitRate(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDHITRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendCannotEvade(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCANNOTEVADE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendEvade(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDEVADE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAfterExtraStatDamage(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::MX::Core::Math::BasisPoint* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDAFTEREXTRASTATDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AppendAfterDamagePower(::MX::Logic::Skills::LogicEffects::DamageEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDAFTERDAMAGEPOWER_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAfterStabilityDamage(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::Core::Math::BasisPoint* arg5)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDAFTERSTABILITYDAMAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AppendResultDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDRESULTDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendBulletArmorFactor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::FlatData::BulletType* arg3, ::FlatData::ArmorType* arg4, ::FlatData::DamageAttribute* arg5, ::MX::Core::Math::BasisPoint* arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::System::Boolean arg10, ::System::Boolean arg11)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::FlatData::DamageAttribute*, ::MX::Core::Math::BasisPoint*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDBULLETARMORFACTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void AppendFactors(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageEffect* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::Core::Math::BasisPoint* arg5, ::MX::Core::Math::BasisPoint* arg6, ::MX::Core::Math::BasisPoint* arg7)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDFACTORS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AppendExtraStatBonusDamage(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::Core::Math::BasisPoint* arg5)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDEXTRASTATBONUSDAMAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AppendBonusSourceBlackboardDamage(::MX::Logic::Battles::BattleBlackboard* arg, ::MX::Logic::Skills::LogicEffects::DamageEffect* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::MX::Core::Math::BasisPoint* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleBlackboard*, ::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDBONUSSOURCEBLACKBOARDDAMAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AppendAddFixedAmountDamage(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDADDFIXEDAMOUNTDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendDamageModifiers(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDAMAGEMODIFIERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendHealModifiers(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDHEALMODIFIERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendPeriodMultiplier(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDPERIODMULTIPLIER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendCriticalChance(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCRITICALCHANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendCriticalDamageMultiplier(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCRITICALDAMAGEMULTIPLIER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendCriticalCheck(::MX::Logic::Skills::DamageCriticalType* arg, ::MX::Core::Math::BasisPoint* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::DamageCriticalType*, ::MX::Core::Math::BasisPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCRITICALCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AppendDamageRedutionRate(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDAMAGEREDUTIONRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendReductedDamage(::System::Int64 arg, ::System::Int64 arg2, ::System::Single arg3, ::MX::Core::Math::BasisPoint* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Single, ::MX::Core::Math::BasisPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDREDUCTEDDAMAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AppendDistributionDamage(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::MX::Logic::Skills::DamageRatioApplyType* arg7, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::MX::Core::Math::BasisPoint* arg11, ::MX::Core::Math::BasisPoint* arg12, ::System::Boolean arg13, ::System::Int64 arg14, ::System::Int64 arg15, ::System::Boolean arg16, ::System::Int64 arg17, ::System::Int64 arg18, ::System::Int64 arg19, ::System::Text::StringBuilder* arg20, ::System::Boolean arg21, ::System::Int64 arg22, ::System::Int64 arg23, ::FlatData::DamageAttribute* arg24, ::System::Boolean arg25, ::System::Boolean arg26, ::System::Boolean arg27, ::System::Boolean arg28, ::System::Int64 arg29)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Logic::Skills::DamageRatioApplyType*, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatData::DamageAttribute*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDISTRIBUTIONDAMAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, nullptr);
		}

		::System::Void AppendHealEffect(::MX::Logic::Skills::LogicEffects::HealEffect* arg, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::Core::Math::BasisPoint* arg5)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::HealEffect*, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDHEALEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AppendTemporaryHpInfo(::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::MaxHpOverHealEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDTEMPORARYHPINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AppendConfrontationGauge(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCONFRONTATIONGAUGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AppendConfrontationGaugeRecoverEffect(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCONFRONTATIONGAUGERECOVEREFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AppendShieldHealEffect(::MX::Logic::Skills::LogicEffects::ShieldHealEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldHealEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDSHIELDHEALEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AppendDecideApplyCrowdControl(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDECIDEAPPLYCROWDCONTROL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AppendAccumuationAmountChanged(::MX::Logic::BattleEntities::AccumulateEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AccumulateEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDACCUMUATIONAMOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAccumuationExpired(::MX::Logic::BattleEntities::AccumulateEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AccumulateEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDACCUMUATIONEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAccumuationLogicEffectOccurred(::MX::Logic::BattleEntities::AccumulateEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AccumulateEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDACCUMUATIONLOGICEFFECTOCCURRED_OFFSET))(arg, nullptr);
		}

		::System::Void AppendPseudoRandom(::MX::Core::Math::IPseudoRandomService* arg)
		{
			((::System::Void(*)(::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDPSEUDORANDOM_OFFSET))(arg, nullptr);
		}

		::System::Void AppendHealConvertDamage(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Battles::LifeGainEventArgs* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealConvertDamageEffect*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDHEALCONVERTDAMAGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AppendDamageFlag(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDDAMAGEFLAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendApplyLogicDispelCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ApplyLogicDispelCountEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ApplyLogicDispelCountEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDAPPLYLOGICDISPELCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendApplyLogicDispelCountApplyLogicEffect(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDAPPLYLOGICDISPELCOUNTAPPLYLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendGroundEvent(::MX::Logic::Battles::GroundEvent* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDGROUNDEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AppendGroundEventLog(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDGROUNDEVENTLOG_OFFSET))(arg, nullptr);
		}

		::System::Void EndWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_ENDWRITE_OFFSET))(nullptr);
		}

		::System::Void LogPseudoRandom(::MX::Core::Math::IPseudoRandomService* arg)
		{
			((::System::Void(*)(::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGPSEUDORANDOM_OFFSET))(arg, nullptr);
		}

		::System::Void LogAbilityApplyResult(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::String* str, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGABILITYAPPLYRESULT_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void LogStatChangeCurrentEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGSTATCHANGECURRENTEFFECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogStatChangeResultEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGSTATCHANGERESULTEFFECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetExtraStatDebugString(::MX::Logic::Skills::ExtraStatType* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::String*(*)(::MX::Logic::Skills::ExtraStatType*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_GETEXTRASTATDEBUGSTRING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetBlackboardDebugString(::MX::Logic::Battles::BattleBlackboard* arg, ::System::String* str, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Data::BlackboardKeyType* arg4)
		{
			return ((::System::String*(*)(::MX::Logic::Battles::BattleBlackboard*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_GETBLACKBOARDDEBUGSTRING_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void LogLogicEffectDurationChanged(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, Il2CppObject* arg3, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg4, ::FlatData::LogicEffectCategory* arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::FlatData::LogicEffectCategory*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGLOGICEFFECTDURATIONCHANGED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void LogLogicEffectDurationNotChanged(Il2CppObject* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGLOGICEFFECTDURATIONNOTCHANGED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void WriteFullSnapshot(::MX::Logic::Battles::Summary::BattleSummary* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::System::Int32, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_WRITEFULLSNAPSHOT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DumpFullSnapshot(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_DUMPFULLSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void LogTargetSlotExSkillCostOverrideEffect(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_LOGTARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AppendChangeCurrentHpRateEffect(::MX::Logic::Skills::LogicEffects::ChangeCurrentHpRateEffect* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ChangeCurrentHpRateEffect*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_BATTLELOG_APPENDCHANGECURRENTHPRATEEFFECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

