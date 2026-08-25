#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class PlayState; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableTraversalMode; }
namespace UnityEngine::Playables { class DirectorWrapMode; }

#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_PLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_PAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETSPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETSPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETPREVIOUSTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ISDONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETPROPAGATESETTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_CONNECTINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_DISCONNECTINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ADDINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTRAVERSALMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableExtensions_TypeDefinitionIndex = 31612;

	class PlayableExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_DESTROY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* GetGraph(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETGRAPH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayState* GetPlayState(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETPLAYSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Play(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Pause(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpeed(Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETSPEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetSpeed(Il2CppObject* arg)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDuration(Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetDuration(Il2CppObject* arg)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetTime(Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetTime(Il2CppObject* arg)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETTIME_OFFSET))(arg, nullptr);
		}

		::System::Double GetPreviousTime(Il2CppObject* arg)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETPREVIOUSTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDone(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ISDONE_OFFSET))(arg, nullptr);
		}

		::System::Void SetPropagateSetTime(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETPROPAGATESETTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInputCount(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputCount(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* GetInput(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* GetOutput(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETOUTPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInputWeight(Il2CppObject* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTWEIGHT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInputWeight(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETINPUTWEIGHT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetInputWeight(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETINPUTWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConnectInput(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_CONNECTINPUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DisconnectInput(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_DISCONNECTINPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddInput(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_ADDINPUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetTraversalMode(Il2CppObject* arg, ::UnityEngine::Playables::PlayableTraversalMode* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::PlayableTraversalMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTRAVERSALMODE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::DirectorWrapMode* GetTimeWrapMode(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::DirectorWrapMode*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_GETTIMEWRAPMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeWrapMode(Il2CppObject* arg, ::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEEXTENSIONS_SETTIMEWRAPMODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

