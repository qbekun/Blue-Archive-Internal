#pragma once
#include "../unitysdk.h"

namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine { class Event; }

#define SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x95A1BC0)
#define SPINE_EVENTQUEUE_EVENT_OFFSET UNITYSDK_OFFSET(0x95A1C60)
#define SPINE_EVENTQUEUE_START_OFFSET UNITYSDK_OFFSET(0x95A1DB0)
#define SPINE_EVENTQUEUE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x95A1EE0)
#define SPINE_EVENTQUEUE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x95A1FF0)
#define SPINE_EVENTQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A2100)
#define SPINE_EVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A2230)
#define SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x95A2340)
#define SPINE_EVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x95A23E0)
#define SPINE_EVENTQUEUE_END_OFFSET UNITYSDK_OFFSET(0x95A2440)
#define SPINE_EVENTQUEUE_DRAIN_OFFSET UNITYSDK_OFFSET(0x95A2580)

namespace Spine
{
	inline static constexpr unsigned int EventQueue_TypeDefinitionIndex = 34999;

	class EventQueue : public Il2CppObject
	{
	public:
		Il2CppObject* eventQueueEntries; // 0x10
		::System::Boolean drainDisabled; // 0x18
		::Spine::AnimationState* state; // 0x20
		Il2CppObject* trackEntryPool; // 0x28
		::System::Action* AnimationsChanged; // 0x30

		::System::Void add_AnimationsChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Event(::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_EVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Start(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_START_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_INTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::AnimationState* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AnimationsChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void End(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_END_OFFSET))(arg, nullptr);
		}

		::System::Void Drain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DRAIN_OFFSET))(nullptr);
		}

	};
}

