#pragma once
#include "unitysdk.h"

class MinigameRhythmSummary;

#define MINIGAMERHYTHMSUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2162E00)
#define MINIGAMERHYTHMSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2162E40)

	inline static constexpr unsigned int MinigameRhythmSummary_TypeDefinitionIndex = 4000;

	class MinigameRhythmSummary : public Il2CppObject
	{
	public:
		::System::String* MusicTitle; // 0x10
		::System::Int32 PatternDifficulty; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::System::Int32 TotalNoteCount; // 0x20
		::System::Int32 CriticalCount; // 0x24
		::System::Int32 AttackCount; // 0x28
		::System::Int32 MissCount; // 0x2C
		::System::Boolean IsFullCombo; // 0x30
		::System::Int32 MaxCombo; // 0x34
		::System::Int64 FinalScore; // 0x38
		::System::Int64 HPBonusScore; // 0x40
		::System::DateTime* GameStartTime; // 0x48
		::System::DateTime* GameEndTime; // 0x50
		::System::Single RhythmGamePlayTime; // 0x58
		::System::Single StdDev; // 0x5C
		::Il2CppArray<::System::Object*>* MinigameJudgeRecords; // 0x60
		::System::Boolean IsAutoPlay; // 0x68

		::System::Boolean Equals(MinigameRhythmSummary* arg)
		{
			return ((::System::Boolean(*)(MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Boolean arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Boolean arg7, ::System::Int32 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::System::DateTime* arg11, ::System::DateTime* arg12, ::System::Single arg13, ::System::Single arg14, ::System::Boolean arg15, ::Il2CppArray<::System::Object*>* arg16)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int64, ::System::Int64, ::System::DateTime*, ::System::DateTime*, ::System::Single, ::System::Single, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMSUMMARY_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, nullptr);
		}

	};

