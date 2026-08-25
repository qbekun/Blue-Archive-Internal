#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace FlatData { class PotentialStatBonusRateType; }
namespace FlatData { class ArmorType; }

#define MX_LOGIC_SERVICES_STATSERVICE_CLAMP_OFFSET UNITYSDK_OFFSET(0x10DE510)
#define MX_LOGIC_SERVICES_STATSERVICE_GETHEALEDRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10DE5B0)
#define MX_LOGIC_SERVICES_STATSERVICE_CONVERTKEYPOTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0x10DE620)
#define MX_LOGIC_SERVICES_STATSERVICE_RECALCULATESUPPORTERTRANSEFFECTS_OFFSET UNITYSDK_OFFSET(0x10DE9F0)
#define MX_LOGIC_SERVICES_STATSERVICE_GETTSATRANSEFFECTS_OFFSET UNITYSDK_OFFSET(0x10DEF40)
#define MX_LOGIC_SERVICES_STATSERVICE_GETARENAMODIFIEDEFFECTS_OFFSET UNITYSDK_OFFSET(0x10CFF00)
#define MX_LOGIC_SERVICES_STATSERVICE_CONVERPOTENTIALSTATTYPETOSTATTYPE_OFFSET UNITYSDK_OFFSET(0x10DF480)
#define MX_LOGIC_SERVICES_STATSERVICE_HEROSTATPROCESSORGETDEFAULTVALUEFLOATCALCULATION_OFFSET UNITYSDK_OFFSET(0x10DF4A0)
#define MX_LOGIC_SERVICES_STATSERVICE_BUILDTRANSEFFECTS_OFFSET UNITYSDK_OFFSET(0x10CEC30)
#define MX_LOGIC_SERVICES_STATSERVICE_GETSUPPORTERTRANSEFFECTS_OFFSET UNITYSDK_OFFSET(0x10DF4D0)
#define MX_LOGIC_SERVICES_STATSERVICE_GETHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10DFA10)
#define MX_LOGIC_SERVICES_STATSERVICE_STATPERLEVEL_OFFSET UNITYSDK_OFFSET(0x10DFA80)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int StatService_TypeDefinitionIndex = 12989;

	class StatService : public Il2CppObject
	{
	public:
		::System::Int64 Clamp(::FlatData::StatType* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::FlatData::StatType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_CLAMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetHealedRateByBulletType(::FlatData::BulletType* arg, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg2)
		{
			return ((::System::Int64(*)(::FlatData::BulletType*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_GETHEALEDRATEBYBULLETTYPE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ConvertKeyPotentialStats(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_CONVERTKEYPOTENTIALSTATS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReCalculateSupporterTransEffects(::MX::Logic::BattleEntities::SupportActor* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SupportActor*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_RECALCULATESUPPORTERTRANSEFFECTS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetTSATransEffects(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_GETTSATRANSEFFECTS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetArenaModifiedEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_GETARENAMODIFIEDEFFECTS_OFFSET))(nullptr);
		}

		::FlatData::StatType* ConverPotentialStatTypeToStatType(::FlatData::PotentialStatBonusRateType* arg)
		{
			return ((::FlatData::StatType*(*)(::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_CONVERPOTENTIALSTATTYPETOSTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Single HeroStatProcessorGetDefaultValueFloatCalculation(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Single(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_HEROSTATPROCESSORGETDEFAULTVALUEFLOATCALCULATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* BuildTransEffects(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_BUILDTRANSEFFECTS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetSupporterTransEffects(::MX::Logic::BattleEntities::SupportActor* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SupportActor*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_GETSUPPORTERTRANSEFFECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetHealRateByArmorType(::FlatData::ArmorType* arg, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg2)
		{
			return ((::System::Int64(*)(::FlatData::ArmorType*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_GETHEALRATEBYARMORTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 StatPerLevel(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::FlatData::StatType* arg7)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_STATSERVICE_STATPERLEVEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

	};
}

