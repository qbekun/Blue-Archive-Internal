#pragma once
#include "../../unitysdk.h"

namespace Spine { class EventData; }
namespace Spine { class AnimationState; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine { class TrackEntry; }
namespace Spine { class Event; }
namespace Spine::Unity { class WaitForSpineEvent; }

#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9620070)
#define SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET UNITYSDK_OFFSET(0x9620190)
#define SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96202C0)
#define SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9620300)
#define SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9620350)
#define SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9620390)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET UNITYSDK_OFFSET(0x96203E0)
#define SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x96204A0)
#define SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x9620550)
#define SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET UNITYSDK_OFFSET(0x9620560)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x9620570)
#define SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x9620700)
#define SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9620630)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96207C0)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9620860)
#define SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9620870)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineEvent_TypeDefinitionIndex = 35383;

	class WaitForSpineEvent : public Il2CppObject
	{
	public:
		::Spine::EventData* m_TargetEvent; // 0x10
		::System::String* m_EventName; // 0x18
		::Spine::AnimationState* m_AnimationState; // 0x20
		::System::Boolean m_WasFired; // 0x28
		::System::Boolean m_unsubscribeAfterFiring; // 0x29

		::System::Void Subscribe(::Spine::AnimationState* arg, ::Spine::EventData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SubscribeByName(::Spine::AnimationState* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SUBSCRIBEBYNAME_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::Spine::AnimationState* arg, ::Spine::EventData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::Unity::SkeletonAnimation* arg, ::Spine::EventData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonAnimation*, ::Spine::EventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::AnimationState* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::Spine::Unity::SkeletonAnimation* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonAnimation*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void HandleAnimationStateEventByName(::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENTBYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleAnimationStateEvent(::Spine::TrackEntry* arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_HANDLEANIMATIONSTATEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_WillUnsubscribeAfterFiring()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_GET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(nullptr);
		}

		::System::Void set_WillUnsubscribeAfterFiring(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SET_WILLUNSUBSCRIBEAFTERFIRING_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor(::Spine::AnimationState* arg, ::Spine::EventData* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::WaitForSpineEvent*(*)(::Spine::AnimationState*, ::Spine::EventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::Unity::WaitForSpineEvent* NowWaitFor(::Spine::AnimationState* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::WaitForSpineEvent*(*)(::Spine::AnimationState*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_NOWWAITFOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Clear(::Spine::AnimationState* arg)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEEVENT_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

