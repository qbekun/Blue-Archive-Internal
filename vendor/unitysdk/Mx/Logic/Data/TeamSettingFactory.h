#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Data { class StatCorrection; }
namespace MX::Data::Excel { class GroundExcel; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x11FFCE0)
#define MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATESTATCORRECTION_OFFSET UNITYSDK_OFFSET(0x11FFDA0)
#define MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATEARENA_OFFSET UNITYSDK_OFFSET(0x11FFEB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TeamSettingFactory_TypeDefinitionIndex = 13738;

	class TeamSettingFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TeamSetting* CreateEmpty(::MX::Logic::Battles::GroupTag* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str)
		{
			return ((::MX::Logic::Data::TeamSetting*(*)(::MX::Logic::Battles::GroupTag*, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATEEMPTY_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

		::MX::Logic::Data::StatCorrection* CreateStatCorrection(::MX::Data::Excel::GroundExcel* arg, ::System::Boolean arg2)
		{
			return ((::MX::Logic::Data::StatCorrection*(*)(::MX::Data::Excel::GroundExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATESTATCORRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::TeamSetting* CreateArena(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::MX::Data::Excel::GroundExcel* arg2, ::System::Boolean arg3)
		{
			return ((::MX::Logic::Data::TeamSetting*(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::MX::Data::Excel::GroundExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEAMSETTINGFACTORY_CREATEARENA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

