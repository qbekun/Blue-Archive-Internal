#pragma once
#include "../unitysdk.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationStateData; }
namespace Spine { class EventQueue; }
namespace Spine { class TrackEntry; }
namespace Spine { class Event; }
namespace Spine { class AnimationState; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class AttachmentTimeline; }
namespace Spine { class Slot; }
namespace Spine { class RotateTimeline; }

#define SPINE_ANIMATIONSTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x959BD60)
#define SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x959BD80)
#define SPINE_ANIMATIONSTATE_ONEND_OFFSET UNITYSDK_OFFSET(0x959BDA0)
#define SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x959BDC0)
#define SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x959BDE0)
#define SPINE_ANIMATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x959BE00)
#define SPINE_ANIMATIONSTATE_ADD_START_OFFSET UNITYSDK_OFFSET(0x959BE20)
#define SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x959BEC0)
#define SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x959BF60)
#define SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x959C000)
#define SPINE_ANIMATIONSTATE_ADD_END_OFFSET UNITYSDK_OFFSET(0x959C0A0)
#define SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x959C140)
#define SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x959C1E0)
#define SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x959C280)
#define SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x959C320)
#define SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x959C3C0)
#define SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x959C460)
#define SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x959C500)
#define SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x959C5A0)
#define SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x959C630)
#define SPINE_ANIMATIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959C910)
#define SPINE_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x959CBB0)
#define SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x959D1F0)
#define SPINE_ANIMATIONSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x959D320)
#define SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x959EC60)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x959DBA0)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x959EFD0)
#define SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x959E430)
#define SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x959F210)
#define SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET UNITYSDK_OFFSET(0x959E570)
#define SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET UNITYSDK_OFFSET(0x959EA70)
#define SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x959F290)
#define SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET UNITYSDK_OFFSET(0x959F340)
#define SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x959CF30)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x959F540)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x959F610)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x959F9D0)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x959FAB0)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x959FD50)
#define SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x959FDE0)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET UNITYSDK_OFFSET(0x959FEB0)
#define SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET UNITYSDK_OFFSET(0x959F4C0)
#define SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET UNITYSDK_OFFSET(0x959F8A0)
#define SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET UNITYSDK_OFFSET(0x959D190)
#define SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x959DAB0)
#define SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET UNITYSDK_OFFSET(0x959FFF0)
#define SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x95A05A0)
#define SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x95A05E0)
#define SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x95A0600)
#define SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x95A0610)
#define SPINE_ANIMATIONSTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95A0620)
#define SPINE_ANIMATIONSTATE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x95A0630)
#define SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x95A06C0)
#define SPINE_ANIMATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95A06D0)
#define SPINE_ANIMATIONSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95A0810)
#define SPINE_ANIMATIONSTATE__.CTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x95A08F0)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 34995;

	class AnimationState : public Il2CppObject
	{
	public:
		::Spine::Animation* EmptyAnimation; // 0x0
		::System::Int32 Subsequent; // 0x0
		::System::Int32 First; // 0x0
		::System::Int32 HoldSubsequent; // 0x0
		::System::Int32 HoldFirst; // 0x0
		::System::Int32 HoldMix; // 0x0
		::System::Int32 Setup; // 0x0
		::System::Int32 Current; // 0x0
		::Spine::AnimationStateData* data; // 0x10
		Il2CppObject* tracks; // 0x18
		Il2CppObject* events; // 0x20
		TrackEntryDelegate* Start; // 0x28
		TrackEntryDelegate* Interrupt; // 0x30
		TrackEntryDelegate* End; // 0x38
		TrackEntryDelegate* Dispose; // 0x40
		TrackEntryDelegate* Complete; // 0x48
		TrackEntryEventDelegate* Event; // 0x50
		::Spine::EventQueue* queue; // 0x58
		Il2CppObject* propertyIds; // 0x60
		::System::Boolean animationsChanged; // 0x68
		::System::Single timeScale; // 0x6C
		::System::Int32 unkeyedState; // 0x70
		Il2CppObject* trackEntryPool; // 0x78

		::System::Void OnStart(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnInterrupt(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnd(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEND_OFFSET))(arg, nullptr);
		}

		::System::Void OnDispose(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnComplete(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEvent(::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void add_Start(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_START_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Start(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET))(arg, nullptr);
		}

		::System::Void add_Interrupt(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Interrupt(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Void add_End(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_END_OFFSET))(arg, nullptr);
		}

		::System::Void remove_End(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET))(arg, nullptr);
		}

		::System::Void add_Dispose(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Dispose(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void add_Complete(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Complete(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void add_Event(TrackEntryEventDelegate* arg)
		{
			((::System::Void(*)(TrackEntryEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Event(TrackEntryEventDelegate* arg)
		{
			((::System::Void(*)(TrackEntryEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AssignEventSubscribersFrom(::Spine::AnimationState* arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventSubscribersFrom(::Spine::AnimationState* arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::AnimationStateData* arg)
		{
			((::System::Void(*)(::Spine::AnimationStateData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateMixingFrom(::Spine::TrackEntry* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Spine::TrackEntry*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Apply(::Spine::Skeleton* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ApplyEventTimelinesOnly(::Spine::Skeleton* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Spine::Skeleton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ApplyMixingFrom(::Spine::TrackEntry* arg, ::Spine::Skeleton* arg, ::Spine::MixBlend* arg)
		{
			return (return (::System::Single(*)(::Spine::TrackEntry*, ::Spine::Skeleton*, ::Spine::MixBlend*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ApplyMixingFromEventTimelinesOnly(::Spine::TrackEntry* arg, ::Spine::Skeleton* arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::Spine::TrackEntry*, ::Spine::Skeleton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyAttachmentTimeline(::Spine::AttachmentTimeline* arg, ::Spine::Skeleton* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::AttachmentTimeline*, ::Spine::Skeleton*, ::System::Single, ::Spine::MixBlend*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetAttachment(::Spine::Skeleton* arg, ::Spine::Slot* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::Spine::Slot*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETATTACHMENT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void ApplyRotateTimeline(::Spine::RotateTimeline* arg, ::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::RotateTimeline*, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::MixBlend*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void QueueEvents(::Spine::TrackEntry* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearTracks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET))(nullptr);
		}

		::System::Void ClearTrack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrent(::System::Int32 arg, ::Spine::TrackEntry* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::Spine::TrackEntry*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETCURRENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::TrackEntry* SetAnimation(::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET))(arg, str, arg, nullptr);
		}

		::Spine::TrackEntry* SetAnimation(::System::Int32 arg, ::Spine::Animation* arg, ::System::Boolean arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::Spine::Animation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::TrackEntry* AddAnimation(::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::System::String*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::Spine::TrackEntry* AddAnimation(::System::Int32 arg, ::Spine::Animation* arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::Spine::Animation*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::TrackEntry* SetEmptyAnimation(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::Spine::TrackEntry* AddEmptyAnimation(::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetEmptyAnimations(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET))(arg, nullptr);
		}

		::Spine::TrackEntry* ExpandToIndex(::System::Int32 arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET))(arg, nullptr);
		}

		::Spine::TrackEntry* NewTrackEntry(::System::Int32 arg, ::Spine::Animation* arg, ::System::Boolean arg, ::Spine::TrackEntry* arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::Spine::Animation*, ::System::Boolean, ::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ClearNext(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void AnimationsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET))(nullptr);
		}

		::System::Void ComputeHold(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET))(arg, nullptr);
		}

		::Spine::TrackEntry* GetCurrent(::System::Int32 arg)
		{
			return (return (::Spine::TrackEntry*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GETCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearListenerNotifications()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Single get_TimeScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::Spine::AnimationStateData* get_Data()
		{
			return (return (::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::Spine::AnimationStateData* arg)
		{
			((::System::Void(*)(::Spine::AnimationStateData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_DATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tracks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__45_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__.CTOR_B__45_0_OFFSET))(nullptr);
		}

	};
}

