#pragma once
#include "unitysdk.h"

#define MINIGAMECONDITIONCURRENTGENERATEDNOTE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD13300)
#define MINIGAMECONDITIONCURRENTGENERATEDNOTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD133A0)

	inline static constexpr unsigned int MinigameConditionCurrentGeneratedNote_TypeDefinitionIndex = 641;

	class MinigameConditionCurrentGeneratedNote : public Il2CppObject
	{
	public:
		::System::Int32 TargetGeneratedNoteIndex; // 0x18

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTGENERATEDNOTE_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTGENERATEDNOTE_.CTOR_OFFSET))(nullptr);
		}

	};

