#pragma once
#include "../unitysdk.h"

namespace Spine { class Animation; }
namespace Spine { class TrackEntry; }
namespace Spine { class MixBlend; }
namespace Spine { class Event; }

#define SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET UNITYSDK_OFFSET(0x95A0BD0)
#define SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x95A0BE0)
#define SPINE_TRACKENTRY_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x95A0C80)
#define SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x95A0CA0)
#define SPINE_TRACKENTRY_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x95A0CB0)
#define SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x959E350)
#define SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET UNITYSDK_OFFSET(0x95A0CC0)
#define SPINE_TRACKENTRY_SET_ALPHAATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A0CD0)
#define SPINE_TRACKENTRY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x95A0CE0)
#define SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x95A0D00)
#define SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x95A0D10)
#define SPINE_TRACKENTRY_ONSTART_OFFSET UNITYSDK_OFFSET(0x95A0D20)
#define SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x95A0D40)
#define SPINE_TRACKENTRY_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x95A0D50)
#define SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x95A0D60)
#define SPINE_TRACKENTRY_ONEVENT_OFFSET UNITYSDK_OFFSET(0x95A0D80)
#define SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET UNITYSDK_OFFSET(0x95A0DA0)
#define SPINE_TRACKENTRY_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x95A0DB0)
#define SPINE_TRACKENTRY_SET_MIXDRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A0DC0)
#define SPINE_TRACKENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95A0DD0)
#define SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x95A0E20)
#define SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET UNITYSDK_OFFSET(0x95A0E70)
#define SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x95A0E80)
#define SPINE_TRACKENTRY_SET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x95A0E90)
#define SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x95A0EA0)
#define SPINE_TRACKENTRY_GET_MIXDRAWORDERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A0EB0)
#define SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A0EC0)
#define SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x95A0F60)
#define SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET UNITYSDK_OFFSET(0x95A0F80)
#define SPINE_TRACKENTRY_SET_MIXATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A0F90)
#define SPINE_TRACKENTRY_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x95A0FA0)
#define SPINE_TRACKENTRY_GET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x95A0FB0)
#define SPINE_TRACKENTRY_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x95A0FC0)
#define SPINE_TRACKENTRY_SETMIXDURATION_OFFSET UNITYSDK_OFFSET(0x95A0FD0)
#define SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A1060)
#define SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x95A1070)
#define SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A1080)
#define SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x959FCF0)
#define SPINE_TRACKENTRY_GET_ISNEXTREADY_OFFSET UNITYSDK_OFFSET(0x95A1090)
#define SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x95A10C0)
#define SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x95A10D0)
#define SPINE_TRACKENTRY_GET_WASAPPLIED_OFFSET UNITYSDK_OFFSET(0x95A1170)
#define SPINE_TRACKENTRY_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x95A1190)
#define SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0x95A11A0)
#define SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x95A11B0)
#define SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x95A11C0)
#define SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET UNITYSDK_OFFSET(0x95A1260)
#define SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x95A1280)
#define SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET UNITYSDK_OFFSET(0x95A1320)
#define SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET UNITYSDK_OFFSET(0x95A1330)
#define SPINE_TRACKENTRY_GET_MIXTIME_OFFSET UNITYSDK_OFFSET(0x95A1340)
#define SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x95A1350)
#define SPINE_TRACKENTRY_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x95A1360)
#define SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET UNITYSDK_OFFSET(0x95A1400)
#define SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x95A1410)
#define SPINE_TRACKENTRY_GET_ALPHAATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A1470)
#define SPINE_TRACKENTRY_GET_MIXATTACHMENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x95A1480)
#define SPINE_TRACKENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A1490)
#define SPINE_TRACKENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x95A15D0)
#define SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A1740)
#define SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x95A17E0)
#define SPINE_TRACKENTRY_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x95A17F0)
#define SPINE_TRACKENTRY_SET_REVERSE_OFFSET UNITYSDK_OFFSET(0x95A1800)
#define SPINE_TRACKENTRY_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x95A1810)
#define SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET UNITYSDK_OFFSET(0x95A1830)
#define SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET UNITYSDK_OFFSET(0x95A1840)
#define SPINE_TRACKENTRY_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x95A1850)
#define SPINE_TRACKENTRY_ADD_START_OFFSET UNITYSDK_OFFSET(0x95A18F0)
#define SPINE_TRACKENTRY_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x95A1990)
#define SPINE_TRACKENTRY_ADD_END_OFFSET UNITYSDK_OFFSET(0x95A19A0)
#define SPINE_TRACKENTRY_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x95A1A40)
#define SPINE_TRACKENTRY_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x95A1AE0)
#define SPINE_TRACKENTRY_SET_TRACKEND_OFFSET UNITYSDK_OFFSET(0x95A1AF0)
#define SPINE_TRACKENTRY_ONEND_OFFSET UNITYSDK_OFFSET(0x95A1B00)
#define SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x95A1B20)

namespace Spine
{
	inline static constexpr unsigned int TrackEntry_TypeDefinitionIndex = 34996;

	class TrackEntry : public Il2CppObject
	{
	public:
		::Spine::Animation* animation; // 0x10
		::Spine::TrackEntry* previous; // 0x18
		::Spine::TrackEntry* next; // 0x20
		::Spine::TrackEntry* mixingFrom; // 0x28
		::Spine::TrackEntry* mixingTo; // 0x30
		TrackEntryDelegate* Start; // 0x38
		TrackEntryDelegate* Interrupt; // 0x40
		TrackEntryDelegate* End; // 0x48
		TrackEntryDelegate* Dispose; // 0x50
		TrackEntryDelegate* Complete; // 0x58
		TrackEntryEventDelegate* Event; // 0x60
		::System::Int32 trackIndex; // 0x68
		::System::Boolean loop; // 0x6C
		::System::Boolean holdPrevious; // 0x6D
		::System::Boolean reverse; // 0x6E
		::System::Boolean shortestRotation; // 0x6F
		::System::Single eventThreshold; // 0x70
		::System::Single mixAttachmentThreshold; // 0x74
		::System::Single alphaAttachmentThreshold; // 0x78
		::System::Single mixDrawOrderThreshold; // 0x7C
		::System::Single animationStart; // 0x80
		::System::Single animationEnd; // 0x84
		::System::Single animationLast; // 0x88
		::System::Single nextAnimationLast; // 0x8C
		::System::Single delay; // 0x90
		::System::Single trackTime; // 0x94
		::System::Single trackLast; // 0x98
		::System::Single nextTrackLast; // 0x9C
		::System::Single trackEnd; // 0xA0
		::System::Single timeScale; // 0xA4
		::System::Single alpha; // 0xA8
		::System::Single mixTime; // 0xAC
		::System::Single mixDuration; // 0xB0
		::System::Single interruptAlpha; // 0xB4
		::System::Single totalAlpha; // 0xB8
		::Spine::MixBlend* mixBlend; // 0xBC
		Il2CppObject* timelineMode; // 0xC0
		Il2CppObject* timelineHoldMix; // 0xC8
		Il2CppObject* timelinesRotation; // 0xD0

		::Spine::TrackEntry* get_MixingTo()
		{
			return (return (::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXINGTO_OFFSET))(nullptr);
		}

		::System::Void remove_Interrupt(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_INTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Void OnInterrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONINTERRUPT_OFFSET))(nullptr);
		}

		::System::Single get_TrackTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_Reverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_REVERSE_OFFSET))(nullptr);
		}

		::System::Single get_AnimationTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONTIME_OFFSET))(nullptr);
		}

		::Spine::TrackEntry* get_MixingFrom()
		{
			return (return (::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXINGFROM_OFFSET))(nullptr);
		}

		::System::Void set_AlphaAttachmentThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ALPHAATTACHMENTTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONDISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShortestRotation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_SHORTESTROTATION_OFFSET))(nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONSTART_OFFSET))(nullptr);
		}

		::System::Single get_MixDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXDURATION_OFFSET))(nullptr);
		}

		::System::Single get_Alpha()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_AnimationLast(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONLAST_OFFSET))(arg, nullptr);
		}

		::System::Void OnEvent(::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TrackTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void set_MixDrawOrderThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXDRAWORDERTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void ResetRotationDirections()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_RESETROTATIONDIRECTIONS_OFFSET))(nullptr);
		}

		::System::Single get_AnimationLast()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONLAST_OFFSET))(nullptr);
		}

		::System::Void set_AnimationStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Void set_MixTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_MixBlend(::Spine::MixBlend* arg)
		{
			((::System::Void(*)(::Spine::MixBlend*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXBLEND_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixDrawOrderThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXDRAWORDERTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void remove_Dispose(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::System::Single get_InterruptAlpha()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_INTERRUPTALPHA_OFFSET))(nullptr);
		}

		::System::Void set_MixAttachmentThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXATTACHMENTTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::Spine::Animation* get_Animation()
		{
			return (return (::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATION_OFFSET))(nullptr);
		}

		::System::Single get_TrackEnd()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKEND_OFFSET))(nullptr);
		}

		::Spine::TrackEntry* get_Next()
		{
			return (return (::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_NEXT_OFFSET))(nullptr);
		}

		::System::Void SetMixDuration(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SETMIXDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_EventThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_EVENTTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Void set_AnimationEnd(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_ANIMATIONEND_OFFSET))(arg, nullptr);
		}

		::System::Single get_EventThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_EVENTTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Single get_TrackComplete()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKCOMPLETE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNextReady()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ISNEXTREADY_OFFSET))(nullptr);
		}

		::System::Boolean get_HoldPrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_HOLDPREVIOUS_OFFSET))(nullptr);
		}

		::System::Void remove_Event(TrackEntryEventDelegate* arg)
		{
			((::System::Void(*)(TrackEntryEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_EVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WasApplied()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_WASAPPLIED_OFFSET))(nullptr);
		}

		::System::Boolean get_Loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Int32 get_TrackIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TRACKINDEX_OFFSET))(nullptr);
		}

		::Spine::TrackEntry* get_Previous()
		{
			return (return (::Spine::TrackEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_PREVIOUS_OFFSET))(nullptr);
		}

		::System::Void add_Complete(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void AllowImmediateQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ALLOWIMMEDIATEQUEUE_OFFSET))(nullptr);
		}

		::System::Void add_Interrupt(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_INTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Single get_AnimationStart()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONSTART_OFFSET))(nullptr);
		}

		::System::Void set_MixDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_MIXDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXTIME_OFFSET))(nullptr);
		}

		::System::Single get_TimeScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void add_Event(TrackEntryEventDelegate* arg)
		{
			((::System::Void(*)(TrackEntryEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_EVENT_OFFSET))(arg, nullptr);
		}

		::Spine::MixBlend* get_MixBlend()
		{
			return (return (::Spine::MixBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXBLEND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptyAnimation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ISEMPTYANIMATION_OFFSET))(nullptr);
		}

		::System::Single get_AlphaAttachmentThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ALPHAATTACHMENTTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Single get_MixAttachmentThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_MIXATTACHMENTTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_RESET_OFFSET))(nullptr);
		}

		::System::Void add_Dispose(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Single get_AnimationEnd()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_ANIMATIONEND_OFFSET))(nullptr);
		}

		::System::Void set_Loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Reverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_REVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_HoldPrevious(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_HOLDPREVIOUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShortestRotation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_SHORTESTROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Start(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_START_OFFSET))(arg, nullptr);
		}

		::System::Void add_Start(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_START_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void add_End(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ADD_END_OFFSET))(arg, nullptr);
		}

		::System::Void remove_End(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_END_OFFSET))(arg, nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TrackEnd(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_SET_TRACKEND_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_ONEND_OFFSET))(nullptr);
		}

		::System::Void remove_Complete(TrackEntryDelegate* arg)
		{
			((::System::Void(*)(TrackEntryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRACKENTRY_REMOVE_COMPLETE_OFFSET))(arg, nullptr);
		}

	};
}

