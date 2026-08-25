#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionClearAllWave; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCLEARALLWAVEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813FD0)
#define GROUNDCONDITIONCLEARALLWAVEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813FE0)
#define GROUNDCONDITIONCLEARALLWAVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18140A0)

	inline static constexpr unsigned int GroundConditionClearAllWaveVisual_TypeDefinitionIndex = 1229;

	class GroundConditionClearAllWaveVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionClearAllWave* ClearAllWave; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

