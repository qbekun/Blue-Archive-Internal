#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LimitGaugeGainRule; }

#define GAINRULETRACKERPERKILL_GET_CHARACTERGROUPCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1282080)
#define GAINRULETRACKERPERKILL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12820A0)
#define GAINRULETRACKERPERKILL_BATTLE_ONCHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x1282120)
#define GAINRULETRACKERPERKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1281900)

	inline static constexpr unsigned int GainRuleTrackerPerKill_TypeDefinitionIndex = 14082;

	class GainRuleTrackerPerKill : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* get_CharacterGroupConstraint()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERPERKILL_GET_CHARACTERGROUPCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERPERKILL_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Battle_OnCharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERPERKILL_BATTLE_ONCHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::LimitGaugeGainRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::LimitGaugeGainRule*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERPERKILL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

