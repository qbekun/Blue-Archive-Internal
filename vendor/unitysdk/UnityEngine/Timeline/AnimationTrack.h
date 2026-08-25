#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::Timeline { class MatchTargetFields; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TrackOffset; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class AppliedOffsetMode; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Animations { class AnimationLayerMixerPlayable; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0xA18B6F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA18B9E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA18B9F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0xA18BD40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18BDA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0xA18BDB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET UNITYSDK_OFFSET(0xA18BE60)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0xA18BFD0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18BFE0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0xA18BFF0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET UNITYSDK_OFFSET(0xA18C000)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA18C010)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETDEFAULTBLENDCOUNT_OFFSET UNITYSDK_OFFSET(0xA18C200)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0xA18C210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0xA18C8D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA18C8E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0xA18C980)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0xA18C990)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA18C9A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18C9C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA18C9D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA18C9F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA18CA10)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0xA18CA90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18CB10)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA18CE00)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18CE10)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA18CE20)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0xA18CE40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET UNITYSDK_OFFSET(0xA18CC20)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18CF60)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA18CF80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0xA18CFA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA18D020)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA18D070)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18D080)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0xA18DAE0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA18DAF0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET UNITYSDK_OFFSET(0xA18D8E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INCLIPMODE_OFFSET UNITYSDK_OFFSET(0xA18BF90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET UNITYSDK_OFFSET(0xA18DC10)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET UNITYSDK_OFFSET(0xA18DCA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xA18DCB0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ISROOTTRANSFORMDISABLEDBYMASK_OFFSET UNITYSDK_OFFSET(0xA18DDA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA18E050)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0xA18E070)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHDEFAULTBLEND_OFFSET UNITYSDK_OFFSET(0xA18E0C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18E0D0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0xA18E0F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE.TIMELINE.ILAYERABLE.CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xA18E100)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18E150)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET UNITYSDK_OFFSET(0xA18E160)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18E170)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET UNITYSDK_OFFSET(0xA18E310)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA18E320)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18E330)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18E350)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0xA18E370)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18E380)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEMIXERPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xA18E3A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET UNITYSDK_OFFSET(0xA18F990)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0xA18F9A0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0xA18F9B0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA18F440)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET UNITYSDK_OFFSET(0xA18FA70)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA18D4E0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0xA18FA90)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET UNITYSDK_OFFSET(0xA18FB20)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_FINDINHIERARCHYBREADTHFIRST_OFFSET UNITYSDK_OFFSET(0xA18FB40)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0xA18FD70)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET UNITYSDK_OFFSET(0xA18F350)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0xA18FD80)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET UNITYSDK_OFFSET(0xA18F3C0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0xA18FFA0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET UNITYSDK_OFFSET(0xA18FFC0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETGENERICROOTNODE_OFFSET UNITYSDK_OFFSET(0xA18F150)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA190210)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET UNITYSDK_OFFSET(0xA190220)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA190270)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA190280)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0xA190330)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0xA190710)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_TypeDefinitionIndex = 36254;

	class AnimationTrack : public Il2CppObject
	{
	public:
		::System::String* k_DefaultInfiniteClipName; // 0x0
		::System::String* k_DefaultRecordableClipName; // 0x0
		ClipExtrapolation* m_InfiniteClipPreExtrapolation; // 0xA0
		ClipExtrapolation* m_InfiniteClipPostExtrapolation; // 0xA4
		::UnityEngine::Vector3* m_InfiniteClipOffsetPosition; // 0xA8
		::UnityEngine::Vector3* m_InfiniteClipOffsetEulerAngles; // 0xB4
		::System::Double m_InfiniteClipTimeOffset; // 0xC0
		::System::Boolean m_InfiniteClipRemoveOffset; // 0xC8
		::System::Boolean m_InfiniteClipApplyFootIK; // 0xC9
		LoopMode* mInfiniteClipLoop; // 0xCC
		::UnityEngine::Timeline::MatchTargetFields* m_MatchTargetFields; // 0xD0
		::UnityEngine::Vector3* m_Position; // 0xD4
		::UnityEngine::Vector3* m_EulerAngles; // 0xE0
		::UnityEngine::AvatarMask* m_AvatarMask; // 0xF0
		::System::Boolean m_ApplyAvatarMask; // 0xF8
		::UnityEngine::Timeline::TrackOffset* m_TrackOffset; // 0xFC
		::UnityEngine::AnimationClip* m_InfiniteClip; // 0x100
		Il2CppObject* s_CachedQueue; // 0x0
		::UnityEngine::Quaternion* m_OpenClipOffsetRotation; // 0x108
		::UnityEngine::Quaternion* m_Rotation; // 0x118
		::System::Boolean m_ApplyOffsets; // 0x128

		::System::Void OnUpgradeFromVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONUPGRADEFROMVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ASSIGNANIMATIONCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::MatchTargetFields*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_MATCHTARGETFIELDS_OFFSET))(arg, nullptr);
		}

		ClipExtrapolation* get_openClipPreExtrapolation()
		{
			return (return (ClipExtrapolation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPREEXTRAPOLATION_OFFSET))(nullptr);
		}

		::System::Boolean CanCompileClips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CANCOMPILECLIPS_OFFSET))(nullptr);
		}

		::System::Void CreateInfiniteClip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITECLIP_OFFSET))(str, nullptr);
		}

		LoopMode* get_infiniteClipLoop()
		{
			return (return (LoopMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPLOOP_OFFSET))(nullptr);
		}

		ClipExtrapolation* get_infiniteClipPreExtrapolation()
		{
			return (return (ClipExtrapolation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(nullptr);
		}

		::System::Void set_applyAvatarMask(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYAVATARMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::MatchTargetFields* get_matchTargetFields()
		{
			return (return (::UnityEngine::Timeline::MatchTargetFields*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_MATCHTARGETFIELDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDefaultBlendCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETDEFAULTBLENDCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_applyOffsets(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_APPLYOFFSETS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AvatarMask* get_avatarMask()
		{
			return (return (::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_AVATARMASK_OFFSET))(nullptr);
		}

		::System::Double get_infiniteClipTimeOffset()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPTIMEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_openClipPreExtrapolation(ClipExtrapolation* arg)
		{
			((::System::Void(*)(ClipExtrapolation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPREEXTRAPOLATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_infiniteClipOffsetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_openClipOffsetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETROTATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_REQUIRESMOTIONXPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_infiniteClipApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPAPPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		ClipExtrapolation* get_openClipPostExtrapolation()
		{
			return (return (ClipExtrapolation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_infiniteClipOffsetPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_applyOffsets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYOFFSETS_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* GetBinding(::UnityEngine::Playables::PlayableDirector* arg)
		{
			return (return (::UnityEngine::Animator*(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETBINDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_infiniteClipOffsetEulerAngles()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_openClipOffsetRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_infiniteClipApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPAPPLYFOOTIK_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg, ::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, ::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEINFINITETRACKPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_infiniteClipRemoveOffset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPREMOVEOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean HasController(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_HASCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_APPLYTRACKOFFSET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_inClipMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INCLIPMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATECLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_applyAvatarMask()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_APPLYAVATARMASK_OFFSET))(nullptr);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ONCREATECLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRootTransformDisabledByMask(::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ISROOTTRANSFORMDISABLEDBYMASK_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_openClipOffsetPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_infiniteClipOffsetRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPOFFSETROTATION_OFFSET))(nullptr);
		}

		::System::Void AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Animations::AnimationLayerMixerPlayable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Animations::AnimationLayerMixerPlayable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHDEFAULTBLEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPOFFSETEULERANGLES_OFFSET))(arg, nullptr);
		}

		::System::Void set_infiniteClipTimeOffset(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPTIMEOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* UnityEngine.Timeline.ILayerable.CreateLayerMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UNITYENGINE.TIMELINE.ILAYERABLE.CREATELAYERMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_infiniteClipPreExtrapolation(ClipExtrapolation* arg)
		{
			((::System::Void(*)(ClipExtrapolation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPREEXTRAPOLATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_infiniteClipLoop(LoopMode* arg)
		{
			((::System::Void(*)(LoopMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPLOOP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ATTACHOFFSETPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateClipOffsets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_UPDATECLIPOFFSETS_OFFSET))(nullptr);
		}

		ClipExtrapolation* get_infiniteClipPostExtrapolation()
		{
			return (return (ClipExtrapolation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(nullptr);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_EULERANGLES_OFFSET))(arg, nullptr);
		}

		::System::Void set_openClipOffsetEulerAngles(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPOFFSETEULERANGLES_OFFSET))(arg, nullptr);
		}

		::System::Boolean UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_USESABSOLUTEMOTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_openClipOffsetEulerAngles()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETEULERANGLES_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEMIXERPLAYABLEGRAPH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_infiniteClipRemoveOffset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPREMOVEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_trackOffset(::UnityEngine::Timeline::TrackOffset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackOffset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_TRACKOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_infiniteClip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Timeline::AnimationTrack* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg, ::UnityEngine::Timeline::AppliedOffsetMode* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::GameObject*, Il2CppObject*, ::UnityEngine::Timeline::AppliedOffsetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_COMPILETRACKPLAYABLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Timeline::TrackOffset* get_trackOffset()
		{
			return (return (::UnityEngine::Timeline::TrackOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_TRACKOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean AnimatesRootTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATESROOTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void ResetOffsets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_RESETOFFSETS_OFFSET))(nullptr);
		}

		::System::Void set_avatarMask(::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_AVATARMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* FindInHierarchyBreadthFirst(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_FINDINHIERARCHYBREADTHFIRST_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::AnimationClip* get_infiniteClip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_INFINITECLIP_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::AppliedOffsetMode* GetOffsetMode(::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Timeline::AppliedOffsetMode*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETOFFSETMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CalculateItemsHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CALCULATEITEMSHASH_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::AnimationLayerMixerPlayable* CreateGroupMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationLayerMixerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATEGROUPMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_eulerAngles()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_EULERANGLES_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::System::String* str)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_CREATERECORDABLECLIP_OFFSET))(str, nullptr);
		}

		::UnityEngine::Transform* GetGenericRootNode(::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETGENERICROOTNODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_openClipPostExtrapolation(ClipExtrapolation* arg)
		{
			((::System::Void(*)(ClipExtrapolation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_OPENCLIPPOSTEXTRAPOLATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_openClipOffsetRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OPENCLIPOFFSETROTATION_OFFSET))(nullptr);
		}

		::System::Void set_infiniteClipPostExtrapolation(ClipExtrapolation* arg)
		{
			((::System::Void(*)(ClipExtrapolation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_SET_INFINITECLIPPOSTEXTRAPOLATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::System::Void GetEvaluationTime(double&* arg, double&* arg)
		{
			((::System::Void(*)(double&*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETEVALUATIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSequenceTime(double&* arg, double&* arg)
		{
			((::System::Void(*)(double&*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_GETSEQUENCETIME_OFFSET))(arg, arg, nullptr);
		}

	};
}

