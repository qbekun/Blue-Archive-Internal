#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CEF0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x1D370E0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x1D370F0)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D37100)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D37220)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int EnemyTeamSettingDummyBuilder_TypeDefinitionIndex = 20091;

	class EnemyTeamSettingDummyBuilder : public Il2CppObject
	{
	public:
		::System::Int64 _teamId_k__BackingField; // 0x10
		::System::String* _teamName_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Int64 get_teamId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_TEAMID_OFFSET))(nullptr);
		}

		::System::String* get_teamName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_TEAMNAME_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ENEMYTEAMSETTINGDUMMYBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

	};
}

