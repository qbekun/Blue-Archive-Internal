#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EEC0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D332D0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D34250)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int ConquestTeamSettingBuilder_TypeDefinitionIndex = 20083;

	class ConquestTeamSettingBuilder : public Il2CppObject
	{
	public:
		::System::Int64 echelonNumber; // 0x10
		::MX::GameLogic::DBModel::AssistCharacterDB* assistCharacterDB; // 0x18
		::System::Int64 tileUniqueId; // 0x20
		::System::Boolean useManageEchelon; // 0x28
		::FlatData::EchelonExtensionType* extensionType; // 0x2C
		::MX::GameLogic::DBModel::ConquestEchelonDB* conquestEchelonDB; // 0x30

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::EchelonExtensionType* arg, ::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::Boolean, ::FlatData::EchelonExtensionType*, ::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_CONQUESTTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

	};
}

