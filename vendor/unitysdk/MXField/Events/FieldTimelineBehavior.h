#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC6EC0)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xEC6ED0)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEC7050)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONTIMELINEPREFABLOADED_OFFSET UNITYSDK_OFFSET(0xEC71F0)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC7430)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_HANDLEPLAYTIMELINEDISPATCH_OFFSET UNITYSDK_OFFSET(0xEC7520)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xEC7690)
#define MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_PRELOAD_OFFSET UNITYSDK_OFFSET(0xEC77C0)

namespace MXField::Events
{
	inline static constexpr unsigned int FieldTimelineBehavior_TypeDefinitionIndex = 10886;

	class FieldTimelineBehavior : public Il2CppObject
	{
	public:
		::System::Int64 timelineId; // 0x18
		::System::String* timelinePath; // 0x20
		::System::Boolean useBehaviorLocation; // 0x28
		::System::Single outDuration; // 0x2C
		Il2CppObject* StoppedAction; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnStopped(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnTimelinePrefabLoaded(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_ONTIMELINEPREFABLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandlePlayTimelineDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_HANDLEPLAYTIMELINEDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_START_OFFSET))(nullptr);
		}

		::System::Void Preload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_FIELDTIMELINEBEHAVIOR_PRELOAD_OFFSET))(arg, nullptr);
		}

	};
}

