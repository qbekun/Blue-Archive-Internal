#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class StartStatusLevelIndicatorEffect; }
namespace MX::Logic::BattleEntities { class GaugeEffectInfo; }
namespace MX::Logic::BattleEntities { class StatusLevelEffectInfo; }

#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x1162510)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x1162710)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_GETGAUGEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1162910)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_GETSTATUSLEVELEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1162990)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x11615B0)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1162110)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1155380)
#define MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1162A70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int GaugeEffectProcessor_TypeDefinitionIndex = 13167;

	class GaugeEffectProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* GaugeInfoList; // 0x10
		Il2CppObject* StatusLevelEffectInfoList; // 0x18

		::System::Void Add(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect* arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_ADD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Add(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_ADD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::GaugeEffectInfo* GetGaugeEffectInfo()
		{
			return ((::MX::Logic::BattleEntities::GaugeEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_GETGAUGEEFFECTINFO_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::StatusLevelEffectInfo* GetStatusLevelEffectInfo(::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::StatusLevelEffectInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_GETSTATUSLEVELEFFECTINFO_OFFSET))(str, nullptr);
		}

		::System::Void Remove(::MX::Logic::BattleEntities::GaugeEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GaugeEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::MX::Logic::BattleEntities::StatusLevelEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusLevelEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GAUGEEFFECTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

