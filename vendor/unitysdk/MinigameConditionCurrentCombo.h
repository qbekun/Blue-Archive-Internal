#pragma once
#include "unitysdk.h"

#define MINIGAMECONDITIONCURRENTCOMBO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD13250)
#define MINIGAMECONDITIONCURRENTCOMBO_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD13270)

	inline static constexpr unsigned int MinigameConditionCurrentCombo_TypeDefinitionIndex = 640;

	class MinigameConditionCurrentCombo : public Il2CppObject
	{
	public:
		::System::Int32 ConditionComboNum; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTCOMBO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTCOMBO_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

