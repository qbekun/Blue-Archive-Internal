#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace Animancer { class AnimancerNode; }
namespace Animancer { class ITransitionDetailed; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class ITransition; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Playables { class Playable; }
namespace Animancer { class IAnimationClipCollection; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine::Animations { class AnimatorControllerPlayable; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine { class IAnimationClipSource; }
namespace UnityEngine { class Vector3&; }

#define ANIMANCER_ANIMANCERUTILITIES_WRAP01_OFFSET UNITYSDK_OFFSET(0x4A6670)
#define ANIMANCER_ANIMANCERUTILITIES_WRAP_OFFSET UNITYSDK_OFFSET(0x4A6AA0)
#define ANIMANCER_ANIMANCERUTILITIES_ROUND_OFFSET UNITYSDK_OFFSET(0x4A6B40)
#define ANIMANCER_ANIMANCERUTILITIES_ROUND_OFFSET UNITYSDK_OFFSET(0x4A6C10)
#define ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET UNITYSDK_OFFSET(0x48EAB0)
#define ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET UNITYSDK_OFFSET(0x4A6D00)
#define ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET UNITYSDK_OFFSET(0x4A6DB0)
#define ANIMANCER_ANIMANCERUTILITIES_TOSTRINGORNULL_OFFSET UNITYSDK_OFFSET(0x4A5170)
#define ANIMANCER_ANIMANCERUTILITIES_COPYEXACTARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET UNITYSDK_OFFSET(0x4A6F20)
#define ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET UNITYSDK_OFFSET(0x48A320)
#define ANIMANCER_ANIMANCERUTILITIES_CREATESTATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x4A6F80)
#define ANIMANCER_ANIMANCERUTILITIES_REMOVEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4A70A0)
#define ANIMANCER_ANIMANCERUTILITIES_HASEVENT_OFFSET UNITYSDK_OFFSET(0x4A7360)
#define ANIMANCER_ANIMANCERUTILITIES_HASEVENT_OFFSET UNITYSDK_OFFSET(0x4A75B0)
#define ANIMANCER_ANIMANCERUTILITIES_CALCULATETHRESHOLDSFROMAVERAGEVELOCITYXZ_OFFSET UNITYSDK_OFFSET(0x4A7640)
#define ANIMANCER_ANIMANCERUTILITIES_COPYPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4A7720)
#define ANIMANCER_ANIMANCERUTILITIES_COPYPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x490630)
#define ANIMANCER_ANIMANCERUTILITIES_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4A7890)
#define ANIMANCER_ANIMANCERUTILITIES_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x48F230)
#define ANIMANCER_ANIMANCERUTILITIES_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4A79F0)
#define ANIMANCER_ANIMANCERUTILITIES_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x48F470)
#define ANIMANCER_ANIMANCERUTILITIES_CREATENATIVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_CONVERTTOTRANSFORMSTREAMHANDLES_OFFSET UNITYSDK_OFFSET(0x4A7C30)
#define ANIMANCER_ANIMANCERUTILITIES_GETUNSUPPORTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_CREATEUNSUPPORTEDARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_ADDANIMANCERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_GETORADDANIMANCERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_GETCOMPONENTINPARENTORCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_GETCOMPONENTINPARENTORCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_ASSERT_OFFSET UNITYSDK_OFFSET(0x4A7DF0)
#define ANIMANCER_ANIMANCERUTILITIES_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x4A7E00)
#define ANIMANCER_ANIMANCERUTILITIES_EDITMODESAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x4A7E10)
#define ANIMANCER_ANIMANCERUTILITIES_EDITMODEPLAY_OFFSET UNITYSDK_OFFSET(0x4A7E20)
#define ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET UNITYSDK_OFFSET(0x4A45F0)
#define ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET UNITYSDK_OFFSET(0x48FFD0)
#define ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET UNITYSDK_OFFSET(0x4A7E30)
#define ANIMANCER_ANIMANCERUTILITIES_GATHERFROMASSET_OFFSET UNITYSDK_OFFSET(0x4A8100)
#define ANIMANCER_ANIMANCERUTILITIES_GATHERFROMTRACKS_OFFSET UNITYSDK_OFFSET(0x4A82B0)
#define ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x4A8BE0)
#define ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x49B790)
#define ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x48A680)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x4A8CD0)
#define ANIMANCER_ANIMANCERUTILITIES_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETAVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0x4A9080)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETAVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4A91A0)
#define ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET UNITYSDK_OFFSET(0x4A92F0)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETISLOOPING_OFFSET UNITYSDK_OFFSET(0x4A93D0)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETLENGTH_OFFSET UNITYSDK_OFFSET(0x4A9500)
#define ANIMANCER_ANIMANCERUTILITIES_GETWRAPPEDOBJECT_OFFSET UNITYSDK_OFFSET(0x4A9600)
#define ANIMANCER_ANIMANCERUTILITIES_TRYGETWRAPPEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerUtilities_TypeDefinitionIndex = 35121;

	class AnimancerUtilities : public Il2CppObject
	{
	public:
		::System::Boolean IsAnimancerPro; // 0x0

		::System::Single Wrap01(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_WRAP01_OFFSET))(arg, nullptr);
		}

		::System::Single Wrap(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_WRAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Round(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Single Round(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsFinite(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFinite(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFinite(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::String* ToStringOrNull(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TOSTRINGORNULL_OFFSET))(arg, nullptr);
		}

		::System::Void CopyExactArray(::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_COPYEXACTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_SWAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsNullOrEmpty(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetLength(::System::Object[]&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_SETLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid(::Animancer::AnimancerNode* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::Animancer::ITransitionDetailed* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::ITransitionDetailed*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* CreateStateAndApply(::Animancer::ITransition* arg, ::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CREATESTATEANDAPPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemovePlayable(::UnityEngine::Playables::Playable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_REMOVEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasEvent(::Animancer::IAnimationClipCollection* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::Animancer::IAnimationClipCollection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_HASEVENT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean HasEvent(::UnityEngine::AnimationClip* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_HASEVENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void CalculateThresholdsFromAverageVelocityXZ(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CALCULATETHRESHOLDSFROMAVERAGEVELOCITYXZ_OFFSET))(arg, nullptr);
		}

		::System::Void CopyParameterValue(::UnityEngine::Animator* arg, ::UnityEngine::Animator* arg, ::UnityEngine::AnimatorControllerParameter* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_COPYPARAMETERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable* arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg, ::UnityEngine::AnimatorControllerParameter* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimatorControllerPlayable*, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::UnityEngine::AnimatorControllerParameter*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_COPYPARAMETERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetParameterValue(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorControllerParameter* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable* arg, ::UnityEngine::AnimatorControllerParameter* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Animations::AnimatorControllerPlayable*, ::UnityEngine::AnimatorControllerParameter*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParameterValue(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorControllerParameter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_SETPARAMETERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable* arg, ::UnityEngine::AnimatorControllerParameter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimatorControllerPlayable*, ::UnityEngine::AnimatorControllerParameter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_SETPARAMETERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateNativeReference()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CREATENATIVEREFERENCE_OFFSET))(nullptr);
		}

		Il2CppObject* ConvertToTransformStreamHandles(Il2CppObject* arg, ::UnityEngine::Animator* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CONVERTTOTRANSFORMSTREAMHANDLES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetUnsupportedMessage(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETUNSUPPORTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::ArgumentException* CreateUnsupportedArgumentException(Il2CppObject* arg)
		{
			return (return (::System::ArgumentException*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CREATEUNSUPPORTEDARGUMENTEXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddAnimancerComponent(::UnityEngine::Animator* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ADDANIMANCERCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrAddAnimancerComponent(::UnityEngine::Animator* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETORADDANIMANCERCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInParentOrChildren(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETCOMPONENTINPARENTORCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetComponentInParentOrChildren(::UnityEngine::GameObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETCOMPONENTINPARENTORCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Assert(::System::Boolean arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ASSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDirty(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_SETDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void EditModeSampleAnimation(::UnityEngine::AnimationClip* arg, ::UnityEngine::Component* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::Component*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_EDITMODESAMPLEANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EditModePlay(::UnityEngine::AnimationClip* arg, ::UnityEngine::Component* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_EDITMODEPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Gather(Il2CppObject* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Gather(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Gather(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherFromAsset(Il2CppObject* arg, ::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHERFROMASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherFromTracks(Il2CppObject* arg, ::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHERFROMTRACKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherFromSource(Il2CppObject* arg, ::UnityEngine::IAnimationClipSource* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::IAnimationClipSource*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherFromSource(Il2CppObject* arg, ::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GatherFromSource(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GATHERFROMSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFrameRate(::System::Object* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETFRAMERATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Clone(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAverageAngularSpeed(::System::Object* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETAVERAGEANGULARSPEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAverageVelocity(::System::Object* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETAVERAGEVELOCITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid(::Animancer::ITransition* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetIsLooping(::System::Object* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETISLOOPING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLength(::System::Object* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetWrappedObject(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_GETWRAPPEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetWrappedObject(::System::Object* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERUTILITIES_TRYGETWRAPPEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

