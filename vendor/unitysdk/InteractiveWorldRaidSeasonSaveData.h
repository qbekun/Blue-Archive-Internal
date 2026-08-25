#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_SETGLOBALSKILLWARNINGSAVE_OFFSET UNITYSDK_OFFSET(0x1D24C20)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D24CF0)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D24A90)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D24640)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_REMOVEGLOBALSKILLWARNINGSAVE_OFFSET UNITYSDK_OFFSET(0x1D24D90)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_DIDNOTWATCHGLOBALSKILLWARNINGTODAY_OFFSET UNITYSDK_OFFSET(0x1D24DE0)
#define INTERACTIVEWORLDRAIDSEASONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D24530)

	inline static constexpr unsigned int InteractiveWorldRaidSeasonSaveData_TypeDefinitionIndex = 19999;

	class InteractiveWorldRaidSeasonSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* WorldMapVisitHistoryDic; // 0x10
		Il2CppObject* VisitedLocalBossIds; // 0x18
		Il2CppObject* ProcedureHistoryDic; // 0x20
		::System::Int64 LastReplaySeasonGroupId; // 0x28
		::System::Int64 LastPlayedBossGroupId; // 0x30
		::System::Int64 LastPlayedEventStageId; // 0x38
		Il2CppObject* GlobalSkillWarningWatchedTime; // 0x40

		::System::Void SetGlobalSkillWarningSave(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_SETGLOBALSKILLWARNINGSAVE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveGlobalSkillWarningSave(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_REMOVEGLOBALSKILLWARNINGSAVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean DidNotWatchGlobalSkillWarningToday(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_DIDNOTWATCHGLOBALSKILLWARNINGTODAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSEASONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};

