#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionEndWave; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONENDWAVEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814350)
#define GROUNDCONDITIONENDWAVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814410)
#define GROUNDCONDITIONENDWAVEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814420)

	inline static constexpr unsigned int GroundConditionEndWaveVisual_TypeDefinitionIndex = 1233;

	class GroundConditionEndWaveVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionEndWave* EndWave; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

