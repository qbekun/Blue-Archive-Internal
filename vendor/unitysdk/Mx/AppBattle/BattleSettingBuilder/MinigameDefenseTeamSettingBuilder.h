#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D347A0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D36CE0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F920)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int MinigameDefenseTeamSettingBuilder_TypeDefinitionIndex = 20086;

	class MinigameDefenseTeamSettingBuilder : public Il2CppObject
	{
	public:
		::System::Int64 fixedEchelonId; // 0x10
		::System::Int64 echelonNumber; // 0x18
		::MX::Data::MiniGameDefenseStageInfo* stageInfo; // 0x20
		::FlatData::EchelonExtensionType* extensionType; // 0x28
		::MX::GameLogic::DBModel::AssistCharacterDB* assistCharacterDB; // 0x30

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameDefenseStageInfo* arg, ::FlatData::EchelonExtensionType* arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameDefenseStageInfo*, ::FlatData::EchelonExtensionType*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_MINIGAMEDEFENSETEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

