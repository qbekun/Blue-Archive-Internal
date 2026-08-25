#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D33270)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D33280)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D360)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int ArenaTeamSettingBuilder_TypeDefinitionIndex = 20082;

	class ArenaTeamSettingBuilder : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaUserDB* arenaUserDB; // 0x10
		::MX::Logic::Battles::GroupTag* groupTag; // 0x18

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ARENATEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

