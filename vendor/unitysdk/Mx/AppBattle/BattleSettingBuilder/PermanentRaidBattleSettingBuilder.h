#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace FlatData { class EchelonType; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x1D30BB0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D30BC0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1D30CF0)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int PermanentRaidBattleSettingBuilder_TypeDefinitionIndex = 20074;

	class PermanentRaidBattleSettingBuilder : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return (return (::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg, ::System::Int32 arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_PERMANENTRAIDBATTLESETTINGBUILDER_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

	};
}

