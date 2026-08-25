#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
class InteractionState;
namespace UnityEngine::Timeline { class GroupTrack; }

#define BRANCHCLIPMONOLOGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x2048720)
#define BRANCHCLIPMONOLOGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20487E0)
#define BRANCHCLIPMONOLOGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20488A0)
#define BRANCHCLIPMONOLOGGER_ISPASSED_OFFSET UNITYSDK_OFFSET(0x2048270)
#define BRANCHCLIPMONOLOGGER_SETINTERACTIONLOGS_OFFSET UNITYSDK_OFFSET(0x2048BF0)
#define BRANCHCLIPMONOLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2048C50)
#define BRANCHCLIPMONOLOGGER_GET_INTERACTIONLOGS_OFFSET UNITYSDK_OFFSET(0x2048CD0)
#define BRANCHCLIPMONOLOGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2048CE0)
#define BRANCHCLIPMONOLOGGER_RESERVERESTART_OFFSET UNITYSDK_OFFSET(0x2048710)
#define BRANCHCLIPMONOLOGGER_ONPAUSEDORSTOP_OFFSET UNITYSDK_OFFSET(0x20489C0)
#define BRANCHCLIPMONOLOGGER_LOGASPASSED_OFFSET UNITYSDK_OFFSET(0x20486B0)

	inline static constexpr unsigned int BranchClipMonoLogger_TypeDefinitionIndex = 3272;

	class BranchClipMonoLogger : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* director; // 0x18
		Il2CppObject* passedClips; // 0x20
		::System::Boolean restartBySelectionReserved; // 0x28
		Il2CppObject* interactionLogs; // 0x30

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsPassed(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_ISPASSED_OFFSET))(arg, nullptr);
		}

		::System::Void SetInteractionLogs(::System::String* str, InteractionState* arg)
		{
			((::System::Void(*)(::System::String*, InteractionState*, ::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_SETINTERACTIONLOGS_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_InteractionLogs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_GET_INTERACTIONLOGS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ReserveRestart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_RESERVERESTART_OFFSET))(nullptr);
		}

		::System::Void OnPausedOrStop(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_ONPAUSEDORSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void LogAsPassed(::System::Int32 arg, ::UnityEngine::Timeline::GroupTrack* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Timeline::GroupTrack*, ::PVOID))((::PBYTE)hIl2Cpp + BRANCHCLIPMONOLOGGER_LOGASPASSED_OFFSET))(arg, arg2, nullptr);
		}

	};

