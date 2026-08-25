#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LimitGaugeGainRule; }
class GainRuleTracker;

#define GAINRULETRACKER_ONLIMITGAUGEMAXREACHED_OFFSET UNITYSDK_OFFSET(0x1281650)
#define GAINRULETRACKER_GETTRACKER_OFFSET UNITYSDK_OFFSET(0x12814C0)
#define GAINRULETRACKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GAINRULETRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12819B0)

	inline static constexpr unsigned int GainRuleTracker_TypeDefinitionIndex = 14080;

	class GainRuleTracker : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* Battle; // 0x10
		::MX::Logic::Battles::LimitGaugeGainRule* Rule; // 0x18

		::System::Void OnLimitGaugeMaxReached()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKER_ONLIMITGAUGEMAXREACHED_OFFSET))(nullptr);
		}

		GainRuleTracker* GetTracker(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::LimitGaugeGainRule* arg2)
		{
			return ((GainRuleTracker*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::LimitGaugeGainRule*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKER_GETTRACKER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::LimitGaugeGainRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::LimitGaugeGainRule*, ::PVOID))((::PBYTE)hIl2Cpp + GAINRULETRACKER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

