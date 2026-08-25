#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Timeline { class MatchTargetFields; }
namespace UnityEngine::Timeline { class AppliedOffsetMode; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA18A360)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA18A380)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA18A390)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA18A3E0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18A450)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18A470)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_USETRACKMATCHFIELDS_OFFSET UNITYSDK_OFFSET(0xA18A480)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_USETRACKMATCHFIELDS_OFFSET UNITYSDK_OFFSET(0xA18A490)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0xA18A4A0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0xA18A4B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_REMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0xA18A4C0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_REMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0xA18A4D0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA18A4E0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA18A4F0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA18A500)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA18A510)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_HASROOTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA18A520)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLIEDOFFSETMODE_OFFSET UNITYSDK_OFFSET(0xA18A660)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLIEDOFFSETMODE_OFFSET UNITYSDK_OFFSET(0xA18A670)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA18A680)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA18A690)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA18A740)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA18A7B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18A860)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18A940)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYOFFSET_OFFSET UNITYSDK_OFFSET(0xA18AE60)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYSCALEREMOVE_OFFSET UNITYSDK_OFFSET(0xA18AE50)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA18AEC0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0xA18AF90)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA18B010)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_HASROOTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA18A5B0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA18B0C0)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA18B120)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0xA18B210)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA18B320)
#define UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA18B430)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationPlayableAsset_TypeDefinitionIndex = 36247;

	class AnimationPlayableAsset : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* m_Clip; // 0x18
		::UnityEngine::Vector3* m_Position; // 0x20
		::UnityEngine::Vector3* m_EulerAngles; // 0x2C
		::System::Boolean m_UseTrackMatchFields; // 0x38
		::UnityEngine::Timeline::MatchTargetFields* m_MatchTargetFields; // 0x3C
		::System::Boolean m_RemoveStartOffset; // 0x40
		::System::Boolean m_ApplyFootIK; // 0x41
		LoopMode* m_Loop; // 0x44
		::UnityEngine::Timeline::AppliedOffsetMode* _appliedOffsetMode_k__BackingField; // 0x48
		::System::Int32 k_LatestVersion; // 0x0
		::System::Int32 m_Version; // 0x4C
		::UnityEngine::Quaternion* m_Rotation; // 0x50

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_eulerAngles()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_EULERANGLES_OFFSET))(nullptr);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_EULERANGLES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useTrackMatchFields()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_USETRACKMATCHFIELDS_OFFSET))(nullptr);
		}

		::System::Void set_useTrackMatchFields(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_USETRACKMATCHFIELDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::MatchTargetFields* get_matchTargetFields()
		{
			return (return (::UnityEngine::Timeline::MatchTargetFields*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_MATCHTARGETFIELDS_OFFSET))(nullptr);
		}

		::System::Void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::MatchTargetFields*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_MATCHTARGETFIELDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_removeStartOffset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_REMOVESTARTOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_removeStartOffset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_REMOVESTARTOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_applyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_applyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		LoopMode* get_loop()
		{
			return (return (LoopMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_loop(LoopMode* arg)
		{
			((::System::Void(*)(LoopMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasRootTransforms()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_HASROOTTRANSFORMS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::AppliedOffsetMode* get_appliedOffsetMode()
		{
			return (return (::UnityEngine::Timeline::AppliedOffsetMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_APPLIEDOFFSETMODE_OFFSET))(nullptr);
		}

		::System::Void set_appliedOffsetMode(::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_APPLIEDOFFSETMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_DURATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg, ::UnityEngine::Timeline::AppliedOffsetMode* arg, ::System::Boolean arg, LoopMode* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AnimationClip*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Boolean, ::UnityEngine::Timeline::AppliedOffsetMode*, ::System::Boolean, LoopMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldApplyOffset(::UnityEngine::Timeline::AppliedOffsetMode* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldApplyScaleRemove(::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_SHOULDAPPLYSCALEREMOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void ResetOffsets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_RESETOFFSETS_OFFSET))(nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasRootTransforms(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_HASROOTTRANSFORMS_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_ONUPGRADEFROMVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONPLAYABLEASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

