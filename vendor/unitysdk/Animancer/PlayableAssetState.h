#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableBinding; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Playables { class Playable&; }
namespace UnityEngine { class Object; }
namespace Animancer { class PlayableAssetState; }
namespace Animancer { class AnimancerNode; }

#define ANIMANCER_PLAYABLEASSETSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x4A9DE0)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4A9E10)
#define ANIMANCER_PLAYABLEASSETSTATE_ONSETISPLAYING_OFFSET UNITYSDK_OFFSET(0x4A9E20)
#define ANIMANCER_PLAYABLEASSETSTATE_SET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x4A9F50)
#define ANIMANCER_PLAYABLEASSETSTATE_GETBINDINGDETAILS_OFFSET UNITYSDK_OFFSET(0x4AAC10)
#define ANIMANCER_PLAYABLEASSETSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4AAD20)
#define ANIMANCER_PLAYABLEASSETSTATE_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x4AAEF0)
#define ANIMANCER_PLAYABLEASSETSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4AB1D0)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4AB350)
#define ANIMANCER_PLAYABLEASSETSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AAE00)
#define ANIMANCER_PLAYABLEASSETSTATE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4AB360)
#define ANIMANCER_PLAYABLEASSETSTATE_SET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4AB370)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4AB430)
#define ANIMANCER_PLAYABLEASSETSTATE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4AB440)
#define ANIMANCER_PLAYABLEASSETSTATE_INITIALIZEBINDINGS_OFFSET UNITYSDK_OFFSET(0x4A9F80)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x4AB450)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x4AB460)
#define ANIMANCER_PLAYABLEASSETSTATE_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x4AB470)
#define ANIMANCER_PLAYABLEASSETSTATE_SETBINDINGS_OFFSET UNITYSDK_OFFSET(0x4AB4C0)
#define ANIMANCER_PLAYABLEASSETSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.PLAYABLEASSETSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4AB4F0)
#define ANIMANCER_PLAYABLEASSETSTATE_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4AB5A0)
#define ANIMANCER_PLAYABLEASSETSTATE_COPYIKFLAGS_OFFSET UNITYSDK_OFFSET(0x4AB5B0)

namespace Animancer
{
	inline static constexpr unsigned int PlayableAssetState_TypeDefinitionIndex = 35126;

	class PlayableAssetState : public ::UnityEngine::AvatarIKHint
	{
	public:
		::UnityEngine::Playables::PlayableAsset* _Asset; // 0x80
		::System::Single _Length; // 0x88
		Il2CppObject* _Bindings; // 0x90
		::System::Boolean _HasInitializedBindings; // 0x98

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_DESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void OnSetIsPlaying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_ONSETISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_Bindings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SET_BINDINGS_OFFSET))(arg, nullptr);
		}

		::System::Void GetBindingDetails(::UnityEngine::Playables::PlayableBinding* arg, ::System::String&* arg, ::System::Type&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableBinding*, ::System::String&*, ::System::Type&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GETBINDINGDETAILS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Void set_MainObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SET_MAINOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_INITIALIZEBINDINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableAsset* get_Asset()
		{
			return (return (::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_ASSET_OFFSET))(nullptr);
		}

		Il2CppObject* get_Bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_BINDINGS_OFFSET))(nullptr);
		}

		::System::Void set_Asset(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SET_ASSET_OFFSET))(arg, nullptr);
		}

		::System::Void SetBindings(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_SETBINDINGS_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.PlayableAssetState_.CopyFrom(::Animancer::PlayableAssetState* arg)
		{
			((::System::Void(*)(::Animancer::PlayableAssetState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.PLAYABLEASSETSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Void CopyIKFlags(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETSTATE_COPYIKFLAGS_OFFSET))(arg, nullptr);
		}

	};
}

