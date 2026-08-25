#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class WrapMode; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class PlayMode; }
namespace UnityEngine { class QueueMode; }
namespace UnityEngine { class AnimationPlayMode; }
namespace UnityEngine { class AnimationCullingType; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_ANIMATION_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1C4430)
#define UNITYENGINE_ANIMATION_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1C4470)
#define UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0xA1C44B0)
#define UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0xA1C44F0)
#define UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C4530)
#define UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C4570)
#define UNITYENGINE_ANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0xA1C45B0)
#define UNITYENGINE_ANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0xA1C45F0)
#define UNITYENGINE_ANIMATION_STOPNAMED_OFFSET UNITYSDK_OFFSET(0xA1C4630)
#define UNITYENGINE_ANIMATION_REWIND_OFFSET UNITYSDK_OFFSET(0xA1C4670)
#define UNITYENGINE_ANIMATION_REWIND_OFFSET UNITYSDK_OFFSET(0xA1C46B0)
#define UNITYENGINE_ANIMATION_REWINDNAMED_OFFSET UNITYSDK_OFFSET(0xA1C46F0)
#define UNITYENGINE_ANIMATION_SAMPLE_OFFSET UNITYSDK_OFFSET(0xA1C4730)
#define UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA1C4770)
#define UNITYENGINE_ANIMATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA1C47B0)
#define UNITYENGINE_ANIMATION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1C47F0)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C4870)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C48B0)
#define UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0xA1C48F0)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C4930)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C4970)
#define UNITYENGINE_ANIMATION_CROSSFADE_OFFSET UNITYSDK_OFFSET(0xA1C49C0)
#define UNITYENGINE_ANIMATION_CROSSFADE_OFFSET UNITYSDK_OFFSET(0xA1C4A10)
#define UNITYENGINE_ANIMATION_CROSSFADE_OFFSET UNITYSDK_OFFSET(0xA1C4A60)
#define UNITYENGINE_ANIMATION_BLEND_OFFSET UNITYSDK_OFFSET(0xA1C4AC0)
#define UNITYENGINE_ANIMATION_BLEND_OFFSET UNITYSDK_OFFSET(0xA1C4B10)
#define UNITYENGINE_ANIMATION_BLEND_OFFSET UNITYSDK_OFFSET(0xA1C4B70)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4BD0)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4C30)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4C90)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4CF0)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4D50)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4DA0)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET UNITYSDK_OFFSET(0xA1C4DF0)
#define UNITYENGINE_ANIMATION_ADDCLIP_OFFSET UNITYSDK_OFFSET(0xA1C4E40)
#define UNITYENGINE_ANIMATION_ADDCLIP_OFFSET UNITYSDK_OFFSET(0xA1C4EA0)
#define UNITYENGINE_ANIMATION_ADDCLIP_OFFSET UNITYSDK_OFFSET(0xA1C4F10)
#define UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0xA1C4F60)
#define UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0xA1C4FA0)
#define UNITYENGINE_ANIMATION_REMOVECLIPNAMED_OFFSET UNITYSDK_OFFSET(0xA1C4FE0)
#define UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA1C5020)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C5060)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA1C50A0)
#define UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET UNITYSDK_OFFSET(0xA1C50F0)
#define UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1C5130)
#define UNITYENGINE_ANIMATION_GETSTATE_OFFSET UNITYSDK_OFFSET(0xA1C4830)
#define UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET UNITYSDK_OFFSET(0xA1C51E0)
#define UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET UNITYSDK_OFFSET(0xA1C5220)
#define UNITYENGINE_ANIMATION_GETCLIP_OFFSET UNITYSDK_OFFSET(0xA1C5260)
#define UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0xA1C5330)
#define UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0xA1C5370)
#define UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0xA1C53B0)
#define UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0xA1C53F0)
#define UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0xA1C5430)
#define UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0xA1C5470)
#define UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0xA1C54B0)
#define UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0xA1C5560)
#define UNITYENGINE_ANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C55E0)
#define UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1C5520)
#define UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1C55A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 36450;

	class Animation : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* get_clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playAutomatically()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET))(nullptr);
		}

		::System::Void set_playAutomatically(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::WrapMode* get_wrapMode()
		{
			return (return (::UnityEngine::WrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_OFFSET))(nullptr);
		}

		::System::Void Stop(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_OFFSET))(str, nullptr);
		}

		::System::Void StopNamed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOPNAMED_OFFSET))(str, nullptr);
		}

		::System::Void Rewind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_OFFSET))(nullptr);
		}

		::System::Void Rewind(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_OFFSET))(str, nullptr);
		}

		::System::Void RewindNamed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWINDNAMED_OFFSET))(str, nullptr);
		}

		::System::Void Sample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SAMPLE_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ISPLAYING_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* get_Item(::System::String* str)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Boolean Play()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(nullptr);
		}

		::System::Boolean Play(::UnityEngine::PlayMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean PlayDefaultAnimation(::UnityEngine::PlayMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean Play(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(str, nullptr);
		}

		::System::Boolean Play(::System::String* str, ::UnityEngine::PlayMode* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrossFade(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_OFFSET))(str, nullptr);
		}

		::System::Void CrossFade(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrossFade(::System::String* str, ::System::Single arg, ::UnityEngine::PlayMode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Blend(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_OFFSET))(str, nullptr);
		}

		::System::Void Blend(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_OFFSET))(str, arg, nullptr);
		}

		::System::Void Blend(::System::String* str, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* str)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* str, ::System::Single arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* str, ::System::Single arg, ::UnityEngine::QueueMode* arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::System::Single, ::UnityEngine::QueueMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* str, ::System::Single arg, ::UnityEngine::QueueMode* arg, ::UnityEngine::PlayMode* arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::System::Single, ::UnityEngine::QueueMode*, ::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationState* PlayQueued(::System::String* str)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* PlayQueued(::System::String* str, ::UnityEngine::QueueMode* arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::UnityEngine::QueueMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AnimationState* PlayQueued(::System::String* str, ::UnityEngine::QueueMode* arg, ::UnityEngine::PlayMode* arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::UnityEngine::QueueMode*, ::UnityEngine::PlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddClip(::UnityEngine::AnimationClip* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddClip(::UnityEngine::AnimationClip* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void AddClip(::UnityEngine::AnimationClip* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void RemoveClip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveClip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET))(str, nullptr);
		}

		::System::Void RemoveClipNamed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIPNAMED_OFFSET))(str, nullptr);
		}

		::System::Int32 GetClipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Play(::UnityEngine::AnimationPlayMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationPlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Play(::System::String* str, ::UnityEngine::AnimationPlayMode* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::AnimationPlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SyncLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationState* GetState(::System::String* str)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATE_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationState* GetStateAtIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimationState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStateCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::System::String* str)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIP_OFFSET))(str, nullptr);
		}

		::System::Boolean get_animatePhysics()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET))(nullptr);
		}

		::System::Void set_animatePhysics(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_animateOnlyIfVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_animateOnlyIfVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationCullingType* get_cullingType()
		{
			return (return (::UnityEngine::AnimationCullingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_cullingType(::UnityEngine::AnimationCullingType* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCullingType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* get_localBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET))(nullptr);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_localBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_localBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

