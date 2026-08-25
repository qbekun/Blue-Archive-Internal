#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionEndFindGift; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONENDFINDGIFTVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814270)
#define GROUNDCONDITIONENDFINDGIFTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814330)
#define GROUNDCONDITIONENDFINDGIFTVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814340)

	inline static constexpr unsigned int GroundConditionEndFindGiftVisual_TypeDefinitionIndex = 1232;

	class GroundConditionEndFindGiftVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionEndFindGift* FindGift; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

