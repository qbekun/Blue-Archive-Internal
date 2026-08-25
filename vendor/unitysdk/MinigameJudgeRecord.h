#pragma once
#include "unitysdk.h"

namespace FlatData { class JudgeGrade; }

#define MINIGAMEJUDGERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2162FE0)

	inline static constexpr unsigned int MinigameJudgeRecord_TypeDefinitionIndex = 4001;

	class MinigameJudgeRecord : public Il2CppObject
	{
	public:
		::System::Int32 NoteIndex; // 0x10
		::System::Single TimingError; // 0x14
		::System::Int32 CurrentCombo; // 0x18
		::FlatData::JudgeGrade* JudgeGradeOfThisNote; // 0x1C
		::System::Boolean IsFeverOn; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Single arg2, ::System::Int32 arg3, ::FlatData::JudgeGrade* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Int32, ::FlatData::JudgeGrade*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEJUDGERECORD_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

