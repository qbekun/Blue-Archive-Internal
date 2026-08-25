#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LimitGaugeGainRule; }
namespace MX::Logic::Battles { class GroupTag; }

#define GAINRULETRACKERDAMAGESUM_ONLIMITGAUGEMAXREACHED_OFFSET UNITYSDK_OFFSET(0x1281A00)
#define GAINRULETRACKERDAMAGESUM_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x1281A50)
#define GAINRULETRACKERDAMAGESUM_GET_DAMAGEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1281CF0)
#define GAINRULETRACKERDAMAGESUM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1281660)
#define GAINRULETRACKERDAMAGESUM_GET_CHARACTERGROUPCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1281CD0)
#define GAINRULETRACKERDAMAGESUM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1281E90)
#define GAINRULETRACKERDAMAGESUM_GETKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1281D10)

	inline static constexpr unsigned int GainRuleTrackerDamageSum_TypeDefinitionIndex = 14081;

	class GainRuleTrackerDamageSum : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::BlackboardKey* keyDamageAccumulated; // 0x20

		::System::Void OnLimitGaugeMaxReached()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_ONLIMITGAUGEMAXREACHED_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_DamageInterval()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_GET_DAMAGEINTERVAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::LimitGaugeGainRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::LimitGaugeGainRule*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_CharacterGroupConstraint()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_GET_CHARACTERGROUPCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_DISPOSE_OFFSET))(nullptr);
		}

		::System::String* GetKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKERDAMAGESUM_GETKEYSTRING_OFFSET))(nullptr);
		}

	};

