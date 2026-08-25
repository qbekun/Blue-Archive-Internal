#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionStartWave; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONSTARTWAVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18147B0)
#define GROUNDCONDITIONSTARTWAVEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x18147C0)
#define GROUNDCONDITIONSTARTWAVEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x18147D0)

	inline static constexpr unsigned int GroundConditionStartWaveVisual_TypeDefinitionIndex = 1238;

	class GroundConditionStartWaveVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionStartWave* StartWave; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

