#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D1720)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D1800)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CHECKJOBTYPEVALIDITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETJOBDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETJOBDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D1810)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D1890)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D1920)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTS_OFFSET UNITYSDK_OFFSET(0xA1D19C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D1B40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D1AB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D1C70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D1BE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D1C30)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationScriptPlayable_TypeDefinitionIndex = 36504;

	class AnimationScriptPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationScriptPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationScriptPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Void CheckJobTypeValidity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CHECKJOBTYPEVALIDITY_OFFSET))(nullptr);
		}

		Il2CppObject* GetJobData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETJOBDATA_OFFSET))(nullptr);
		}

		::System::Void SetJobData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETJOBDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationScriptPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationScriptPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimationScriptPlayable* op_Explicit(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationScriptPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationScriptPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetProcessInputs(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetProcessInputsInternal(::UnityEngine::Playables::PlayableHandle* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetProcessInputsInternal_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_SETPROCESSINPUTSINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

