#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class DirectorUpdateMode; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }
namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Playables { class FrameRate; }
namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class FrameRate&; }

#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA269830)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0xA2698F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA269A50)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET UNITYSDK_OFFSET(0xA269AE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET UNITYSDK_OFFSET(0xA269B30)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET UNITYSDK_OFFSET(0xA269BC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0xA269C40)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA269CC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_OFFSET UNITYSDK_OFFSET(0xA269D40)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET UNITYSDK_OFFSET(0xA269DC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET UNITYSDK_OFFSET(0xA269E40)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA269A90)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETTIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA269F10)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA269F90)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0xA26A010)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETRESOLVER_OFFSET UNITYSDK_OFFSET(0xA26A090)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0xA26A110)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0xA26A190)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SYNCHRONIZEEVALUATION_OFFSET UNITYSDK_OFFSET(0xA26A210)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xA26A290)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET UNITYSDK_OFFSET(0xA268D20)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A350)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA269890)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A440)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISMATCHFRAMERATEENABLED_OFFSET UNITYSDK_OFFSET(0xA26A4C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETFRAMERATE_OFFSET UNITYSDK_OFFSET(0xA26A540)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2699F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A620)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A6C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A760)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_OFFSET UNITYSDK_OFFSET(0xA26A7E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269B80)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269C00)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269C80)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269D00)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269D80)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269E00)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269E80)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269EC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETTIMEUPDATEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269F50)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA269FD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A050)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETRESOLVER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A0D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A150)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A1D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SYNCHRONIZEEVALUATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A250)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A2D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A310)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A3A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A3F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A480)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISMATCHFRAMERATEENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A500)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETFRAMERATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A590)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A5D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A670)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A710)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A7A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26A820)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableGraph_TypeDefinitionIndex = 31614;

	class PlayableGraph : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18

		::UnityEngine::Playables::Playable* GetRootPlayable(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Connect(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Disconnect(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyPlayable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySubgraph(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPH_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyOutput(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* GetOutput(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* Create()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* Create(::System::String* str)
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET))(nullptr);
		}

		::System::Void Evaluate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::DirectorUpdateMode* GetTimeUpdateMode()
		{
			return (return (::UnityEngine::Playables::DirectorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETTIMEUPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void SetTimeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::IExposedPropertyTable* GetResolver()
		{
			return (return (::UnityEngine::IExposedPropertyTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET))(nullptr);
		}

		::System::Void SetResolver(::UnityEngine::IExposedPropertyTable* arg)
		{
			((::System::Void(*)(::UnityEngine::IExposedPropertyTable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPlayableCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetRootPlayableCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SYNCHRONIZEEVALUATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetOutputCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreatePlayableHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean CreateScriptOutputInternal(::System::String* str, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetRootPlayableInternal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyOutputInternal(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatchFrameRateEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISMATCHFRAMERATEENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::FrameRate* GetFrameRate()
		{
			return (return (::UnityEngine::Playables::FrameRate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETFRAMERATE_OFFSET))(nullptr);
		}

		::System::Boolean GetOutputInternal(::System::Int32 arg, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ConnectInternal(::UnityEngine::Playables::PlayableHandle* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableHandle* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Int32, ::UnityEngine::Playables::PlayableHandle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DisconnectInternal(::UnityEngine::Playables::PlayableHandle* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyPlayableInternal(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySubgraphInternal(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Create_Injected(::System::String* str, ::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET))(str, arg, nullptr);
		}

		::System::Void Destroy_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDone_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Play_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Stop_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Evaluate_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::DirectorUpdateMode* GetTimeUpdateMode_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::UnityEngine::Playables::DirectorUpdateMode*(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETTIMEUPDATEMODE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeUpdateMode_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::DirectorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::DirectorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::IExposedPropertyTable* GetResolver_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::UnityEngine::IExposedPropertyTable*(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetResolver_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::IExposedPropertyTable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::IExposedPropertyTable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETRESOLVER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRootPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SynchronizeEvaluation_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SYNCHRONIZEEVALUATION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetOutputCount_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void CreatePlayableHandle_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreateScriptOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::System::String* str, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetRootPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYOUTPUTINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMatchFrameRateEnabled_Injected(::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISMATCHFRAMERATEENABLED_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetFrameRate_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::FrameRate&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::FrameRate&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETFRAMERATE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ConnectInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DisconnectInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroySubgraphInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYSUBGRAPHINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

