#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionClearedWaves; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCLEAREDWAVESVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x18140B0)
#define GROUNDCONDITIONCLEAREDWAVESVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814170)
#define GROUNDCONDITIONCLEAREDWAVESVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814180)

	inline static constexpr unsigned int GroundConditionClearedWavesVisual_TypeDefinitionIndex = 1230;

	class GroundConditionClearedWavesVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionClearedWaves* ClearedWaves; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

