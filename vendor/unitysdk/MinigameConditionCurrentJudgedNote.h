#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define MINIGAMECONDITIONCURRENTJUDGEDNOTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD13490)
#define MINIGAMECONDITIONCURRENTJUDGEDNOTE_START_OFFSET UNITYSDK_OFFSET(0xD134A0)
#define MINIGAMECONDITIONCURRENTJUDGEDNOTE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD13510)

	inline static constexpr unsigned int MinigameConditionCurrentJudgedNote_TypeDefinitionIndex = 644;

	class MinigameConditionCurrentJudgedNote : public Il2CppObject
	{
	public:
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0x18
		::System::Int32 TargetNoteIndex; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTJUDGEDNOTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTJUDGEDNOTE_START_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONCURRENTJUDGEDNOTE_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

