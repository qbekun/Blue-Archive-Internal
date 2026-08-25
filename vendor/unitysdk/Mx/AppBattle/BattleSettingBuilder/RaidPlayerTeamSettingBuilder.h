#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D36D20)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_SETCHARACTERANDTSS_OFFSET UNITYSDK_OFFSET(0x1D339B0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D37070)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F570)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int RaidPlayerTeamSettingBuilder_TypeDefinitionIndex = 20089;

	class RaidPlayerTeamSettingBuilder : public Il2CppObject
	{
	public:
		::FlatData::EchelonExtensionType* echelonExtensionType; // 0x10
		::System::Int32 echelonNumber; // 0x14
		::FlatData::EchelonType* echelonType; // 0x18
		Il2CppObject* assistCharacterDBs; // 0x20

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterAndTSS(::MX::Logic::Data::TeamSetting* arg, EchelonObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, EchelonObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_SETCHARACTERANDTSS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::EchelonType* arg, ::System::Int32 arg, ::FlatData::EchelonExtensionType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::System::Int32, ::FlatData::EchelonExtensionType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_RAIDPLAYERTEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

