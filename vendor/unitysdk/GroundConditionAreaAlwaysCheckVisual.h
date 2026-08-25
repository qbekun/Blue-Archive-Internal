#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAreaAlwaysCheck; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONAREAALWAYSCHECKVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813790)
#define GROUNDCONDITIONAREAALWAYSCHECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18137A0)
#define GROUNDCONDITIONAREAALWAYSCHECKVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813810)

	inline static constexpr unsigned int GroundConditionAreaAlwaysCheckVisual_TypeDefinitionIndex = 1221;

	class GroundConditionAreaAlwaysCheckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* Area; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

