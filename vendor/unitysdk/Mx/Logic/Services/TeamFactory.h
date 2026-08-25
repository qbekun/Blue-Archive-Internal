#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class EnemyGroup; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles { class PlayerGroup; }

#define MX_LOGIC_SERVICES_TEAMFACTORY_CREATEENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x10CE990)
#define MX_LOGIC_SERVICES_TEAMFACTORY_APPLYSUPPORTERTRANSSTATS_OFFSET UNITYSDK_OFFSET(0x10CEA50)
#define MX_LOGIC_SERVICES_TEAMFACTORY_CREATEPLAYERGROUP_OFFSET UNITYSDK_OFFSET(0x10CEFD0)
#define MX_LOGIC_SERVICES_TEAMFACTORY_APPLYARENAMODIFIEDSTAT_OFFSET UNITYSDK_OFFSET(0x10CFD20)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int TeamFactory_TypeDefinitionIndex = 12978;

	class TeamFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::EnemyGroup* CreateEnemyGroup(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::TeamSetting* arg2)
		{
			return ((::MX::Logic::Battles::EnemyGroup*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TEAMFACTORY_CREATEENEMYGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplySupporterTransStats(::MX::Logic::Battles::PlayerGroup* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::PlayerGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TEAMFACTORY_APPLYSUPPORTERTRANSSTATS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::PlayerGroup* CreatePlayerGroup(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::TeamSetting* arg2)
		{
			return ((::MX::Logic::Battles::PlayerGroup*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TEAMFACTORY_CREATEPLAYERGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyArenaModifiedStat(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::PlayerGroup* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::PlayerGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TEAMFACTORY_APPLYARENAMODIFIEDSTAT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

