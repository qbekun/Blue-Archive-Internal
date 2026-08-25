#pragma once
#include "unitysdk.h"

class ComparerType;

#define MINIGAMECONDITIONCURRENTHP_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD133B0)
#define MINIGAMECONDITIONCURRENTHP_.CTOR_OFFSET UNITYSDK_OFFSET(0xD13480)

	inline static constexpr unsigned int MinigameConditionCurrentHP_TypeDefinitionIndex = 643;

	class MinigameConditionCurrentHP : public Il2CppObject
	{
	public:
		::System::Int32 ConditionHP; // 0x18
		ComparerType* Comparer; // 0x1C

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTHP_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTHP_.CTOR_OFFSET))(nullptr);
		}

	};

