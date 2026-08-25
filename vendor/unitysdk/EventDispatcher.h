#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerState; }

#define EVENTDISPATCHER_RELEASE_OFFSET UNITYSDK_OFFSET(0x4A5A10)
#define EVENTDISPATCHER_TRYCLEAR_OFFSET UNITYSDK_OFFSET(0x4A33F0)
#define EVENTDISPATCHER_ONTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x4A36E0)
#define EVENTDISPATCHER_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x4A5590)
#define EVENTDISPATCHER_UPDATEZEROLENGTH_OFFSET UNITYSDK_OFFSET(0x4A5AC0)
#define EVENTDISPATCHER_CHECKGENERALEVENTS_OFFSET UNITYSDK_OFFSET(0x4A5D80)
#define EVENTDISPATCHER_VALIDATENEXTEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x4A6220)
#define EVENTDISPATCHER_NEXTEVENTLOOPED_OFFSET UNITYSDK_OFFSET(0x4A6580)
#define EVENTDISPATCHER_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4A3BB0)
#define EVENTDISPATCHER_GETLOOPDELTA_OFFSET UNITYSDK_OFFSET(0x4A6470)
#define EVENTDISPATCHER_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x4A66E0)
#define EVENTDISPATCHER_INVOKEALLEVENTS_OFFSET UNITYSDK_OFFSET(0x4A5C40)
#define EVENTDISPATCHER_GET_HASEVENTS_OFFSET UNITYSDK_OFFSET(0x4A5810)
#define EVENTDISPATCHER_VALIDATEAFTERENDEVENT_OFFSET UNITYSDK_OFFSET(0x4A69F0)
#define EVENTDISPATCHER_NEXTEVENT_OFFSET UNITYSDK_OFFSET(0x4A65E0)
#define EVENTDISPATCHER_VALIDATEBEFOREENDEVENT_OFFSET UNITYSDK_OFFSET(0x4A6A00)
#define EVENTDISPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A6A10)
#define EVENTDISPATCHER_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4A5730)
#define EVENTDISPATCHER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4A6A30)

	inline static constexpr unsigned int EventDispatcher_TypeDefinitionIndex = 35119;

	class EventDispatcher : public Il2CppObject
	{
	public:
		::Animancer::AnimancerState* _State; // 0x18
		Sequence* _Events; // 0x20
		::System::Boolean _GotEventsFromPool; // 0x28
		::System::Boolean _IsLooping; // 0x29
		::System::Single _PreviousTime; // 0x2C
		::System::Int32 _NextEventIndex; // 0x30
		::System::Int32 _SequenceVersion; // 0x34
		::System::Boolean _WasPlayingForwards; // 0x38
		::System::Int32 RecalculateEventIndex; // 0x0
		::System::String* SequenceVersionException; // 0x0

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void TryClear(EventDispatcher* arg)
		{
			((::System::Void(*)(EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_TRYCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void OnTimeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_ONTIMECHANGED_OFFSET))(nullptr);
		}

		::System::Void Acquire(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateZeroLength()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_UPDATEZEROLENGTH_OFFSET))(nullptr);
		}

		::System::Void CheckGeneralEvents(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_CHECKGENERALEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNextEventIndex(float&* arg, float&* arg, int32_t&* arg)
		{
			((::System::Void(*)(float&*, float&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_VALIDATENEXTEVENTINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean NextEventLooped(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_NEXTEVENTLOOPED_OFFSET))(arg, nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Int32 GetLoopDelta(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_GETLOOPDELTA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean InvokeAllEvents(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_INVOKEALLEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_GET_HASEVENTS_OFFSET))(nullptr);
		}

		::System::Void ValidateAfterEndEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_VALIDATEAFTERENDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean NextEvent(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_NEXTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateBeforeEndEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_VALIDATEBEFOREENDEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Events(Sequence* arg)
		{
			((::System::Void(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTDISPATCHER_TOSTRING_OFFSET))(nullptr);
		}

	};

