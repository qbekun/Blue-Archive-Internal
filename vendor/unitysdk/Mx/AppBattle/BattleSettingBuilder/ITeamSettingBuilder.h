#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_ITEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ITEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int ITeamSettingBuilder_TypeDefinitionIndex = 20090;

	class ITeamSettingBuilder : public Il2CppObject
	{
	public:
		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ITEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ITEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

	};
}

