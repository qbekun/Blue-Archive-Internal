#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class GaugeEffectInfo; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatByGaugeEnergyEffect; }
namespace MX::Logic::Data { class StatChangeEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_GET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0x140BAC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_COPREUPDATE_OFFSET UNITYSDK_OFFSET(0x140BAD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140BB60)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int GaugeStat_TypeDefinitionIndex = 14712;

	class GaugeStat : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::GaugeEffectInfo* _effectInfo_k__BackingField; // 0x148
		::System::Single CheckStartGaugeEnergyRatio; // 0x150
		::System::Single CheckEndGaugeEnergyRatio; // 0x154
		::System::Int64 StartChangeStatBaseAmount; // 0x158
		::System::Int64 EndChangeStatBaseAmount; // 0x160
		::MX::Core::Math::BasisPoint* StartChangeStatCoefficient; // 0x168
		::MX::Core::Math::BasisPoint* EndChangeStatCoefficient; // 0x170

		::MX::Logic::BattleEntities::GaugeEffectInfo* get_effectInfo()
		{
			return ((::MX::Logic::BattleEntities::GaugeEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_GET_EFFECTINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPreUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_COPREUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ChangeStatByGaugeEnergyEffect* arg, ::MX::Logic::BattleEntities::GaugeEffectInfo* arg2, ::MX::Logic::Data::StatChangeEffectValue* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ChangeStatByGaugeEnergyEffect*, ::MX::Logic::BattleEntities::GaugeEffectInfo*, ::MX::Logic::Data::StatChangeEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_GAUGESTAT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

