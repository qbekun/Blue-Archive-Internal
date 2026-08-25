#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayState; }
namespace UnityEngine::Playables { class DirectorWrapMode; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class FrameRate; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class DirectorUpdateMode; }
namespace UnityEngine { class PropertyName; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class FrameRate&; }
namespace UnityEngine { class PropertyName&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA2727A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0xA272820)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET UNITYSDK_OFFSET(0xA2728A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xA272920)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xA272A10)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xA272A90)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA272B40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA272BC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET UNITYSDK_OFFSET(0xA272C40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0xA272CC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0xA272D40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0xA272E20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0xA272F80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA273020)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA273060)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA2730A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA2730F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0xA273130)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_INITIALTIME_OFFSET UNITYSDK_OFFSET(0xA273180)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA2731C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA273200)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAYONFRAME_OFFSET UNITYSDK_OFFSET(0xA272D00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET UNITYSDK_OFFSET(0xA272F40)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_STOP_OFFSET UNITYSDK_OFFSET(0xA273280)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PAUSE_OFFSET UNITYSDK_OFFSET(0xA2732C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESUME_OFFSET UNITYSDK_OFFSET(0xA273300)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0xA273340)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0xA273380)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0xA273400)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0xA2734A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0xA273540)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET UNITYSDK_OFFSET(0xA273580)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET UNITYSDK_OFFSET(0xA2735C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET UNITYSDK_OFFSET(0xA273600)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET UNITYSDK_OFFSET(0xA273640)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA2727E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA272860)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA2728E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATENEXTFRAME_OFFSET UNITYSDK_OFFSET(0xA272C80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_OFFSET UNITYSDK_OFFSET(0xA272AF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA272C00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA272B80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET UNITYSDK_OFFSET(0xA272FD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xA272A50)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xA2729D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET UNITYSDK_OFFSET(0xA2736C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET UNITYSDK_OFFSET(0xA273760)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET UNITYSDK_OFFSET(0xA273800)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET UNITYSDK_OFFSET(0xA2738A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET UNITYSDK_OFFSET(0xA273940)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET UNITYSDK_OFFSET(0xA2739E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESETFRAMETIMING_OFFSET UNITYSDK_OFFSET(0xA273A80)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPLAY_OFFSET UNITYSDK_OFFSET(0xA273AC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPAUSE_OFFSET UNITYSDK_OFFSET(0xA273AE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORSTOP_OFFSET UNITYSDK_OFFSET(0xA273B00)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA273B20)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAYONFRAME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273240)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2733C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273450)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2734F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA273680)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableDirector_TypeDefinitionIndex = 37959;

	class PlayableDirector : public Il2CppObject
	{
	public:
		Il2CppObject* played; // 0x18
		Il2CppObject* paused; // 0x20
		Il2CppObject* stopped; // 0x28

		::UnityEngine::Playables::PlayState* get_state()
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_EXTRAPOLATIONMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::DirectorWrapMode* get_extrapolationMode()
		{
			return (return (::UnityEngine::Playables::DirectorWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_EXTRAPOLATIONMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableAsset* get_playableAsset()
		{
			return (return (::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEASSET_OFFSET))(nullptr);
		}

		::System::Void set_playableAsset(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYABLEASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* get_playableGraph()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYABLEGRAPH_OFFSET))(nullptr);
		}

		::System::Boolean get_playOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_PLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void set_playOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_PLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Void DeferredEvaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_DEFERREDEVALUATE_OFFSET))(nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::FrameRate* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::FrameRate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGenericBinding(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETGENERICBINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIMEUPDATEMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::DirectorUpdateMode* get_timeUpdateMode()
		{
			return (return (::UnityEngine::Playables::DirectorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIMEUPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_initialTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SET_INITIALTIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_initialTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_INITIALTIME_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void PlayOnFrame(::UnityEngine::Playables::FrameRate* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::FrameRate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAYONFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAY_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_STOP_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESUME_OFFSET))(nullptr);
		}

		::System::Void RebuildGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBUILDGRAPH_OFFSET))(nullptr);
		}

		::System::Void ClearReferenceValue(::UnityEngine::PropertyName* arg)
		{
			((::System::Void(*)(::UnityEngine::PropertyName*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetReferenceValue(::UnityEngine::PropertyName* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::PropertyName*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName* arg, bool&* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::PropertyName*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* GetGenericBinding(::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGENERICBINDING_OFFSET))(arg, nullptr);
		}

		::System::Void ClearGenericBinding(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARGENERICBINDING_OFFSET))(arg, nullptr);
		}

		::System::Void RebindPlayableGraphOutputs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REBINDPLAYABLEGRAPHOUTPUTS_OFFSET))(nullptr);
		}

		::System::Void ProcessPendingGraphChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PROCESSPENDINGGRAPHCHANGES_OFFSET))(nullptr);
		}

		::System::Boolean HasGenericBinding(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_HASGENERICBINDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayState* GetPlayState()
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYSTATE_OFFSET))(nullptr);
		}

		::System::Void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETWRAPMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::DirectorWrapMode* GetWrapMode()
		{
			return (return (::UnityEngine::Playables::DirectorWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETWRAPMODE_OFFSET))(nullptr);
		}

		::System::Void EvaluateNextFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_EVALUATENEXTFRAME_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* GetGraphHandle()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_OFFSET))(nullptr);
		}

		::System::Void SetPlayOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetPlayOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETPLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void Internal_SetGenericBinding(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_SETGENERICBINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPlayableAsset(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETPLAYABLEASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScriptableObject* Internal_GetPlayableAsset()
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_INTERNAL_GETPLAYABLEASSET_OFFSET))(nullptr);
		}

		::System::Void add_played(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_played(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void add_paused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_PAUSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_paused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_PAUSED_OFFSET))(arg, nullptr);
		}

		::System::Void add_stopped(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_ADD_STOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_stopped(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_REMOVE_STOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void ResetFrameTiming()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_RESETFRAMETIMING_OFFSET))(nullptr);
		}

		::System::Void SendOnPlayableDirectorPlay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPLAY_OFFSET))(nullptr);
		}

		::System::Void SendOnPlayableDirectorPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORPAUSE_OFFSET))(nullptr);
		}

		::System::Void SendOnPlayableDirectorStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SENDONPLAYABLEDIRECTORSTOP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayOnFrame_Injected(::UnityEngine::Playables::FrameRate&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::FrameRate&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_PLAYONFRAME_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearReferenceValue_Injected(::UnityEngine::PropertyName&* arg)
		{
			((::System::Void(*)(::UnityEngine::PropertyName&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_CLEARREFERENCEVALUE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetReferenceValue_Injected(::UnityEngine::PropertyName&* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::PropertyName&*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_SETREFERENCEVALUE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* GetReferenceValue_Injected(::UnityEngine::PropertyName&* arg, bool&* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::PropertyName&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETREFERENCEVALUE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGraphHandle_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEDIRECTOR_GETGRAPHHANDLE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

