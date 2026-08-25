#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionSectionStarted; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONSECTIONSTARTEDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x18146D0)
#define GROUNDCONDITIONSECTIONSTARTEDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x18146E0)
#define GROUNDCONDITIONSECTIONSTARTEDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18147A0)

	inline static constexpr unsigned int GroundConditionSectionStartedVisual_TypeDefinitionIndex = 1237;

	class GroundConditionSectionStartedVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionSectionStarted* SectionStarted; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSECTIONSTARTEDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

