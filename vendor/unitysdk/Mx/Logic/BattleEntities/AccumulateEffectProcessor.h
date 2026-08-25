#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class AccumulateEffectInfo; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class AccumulateEffect; }

#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x10FB8E0)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x10FBD70)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x10FBDF0)
#define MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_GETACCUMULATEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x10FBFF0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int AccumulateEffectProcessor_TypeDefinitionIndex = 13037;

	class AccumulateEffectProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* accumulateInfoList; // 0x10

		::System::Void Remove(::MX::Logic::BattleEntities::AccumulateEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AccumulateEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::MX::Logic::Skills::LogicEffects::AccumulateEffect* arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::AccumulateEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_ADD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::AccumulateEffectInfo* GetAccumulateEffectInfo(::MX::Logic::Skills::LogicEffects::AccumulateEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::AccumulateEffectInfo*(*)(::MX::Logic::Skills::LogicEffects::AccumulateEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACCUMULATEEFFECTPROCESSOR_GETACCUMULATEEFFECTINFO_OFFSET))(arg, nullptr);
		}

	};
}

