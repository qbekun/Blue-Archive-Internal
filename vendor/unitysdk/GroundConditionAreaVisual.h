#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionArea; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813910)
#define GROUNDCONDITIONAREAVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813980)
#define GROUNDCONDITIONAREAVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813A80)

	inline static constexpr unsigned int GroundConditionAreaVisual_TypeDefinitionIndex = 1222;

	class GroundConditionAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionArea* Area; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

