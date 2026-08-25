#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace MX::Sequencer { class SequenceTrackBase; }

#define MX_SEQUENCER_SEQUENCER`1_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_INPUTBLOCKLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_SET_INPUTBLOCKLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_HASANYTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_PHASEINTERVAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_SET_PHASEINTERVAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADD_ONPLAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_REMOVE_ONPLAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADD_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_REMOVE_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_PLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_COPLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_SETINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_LOGTRACE_KEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCER`1_INSERTTOPLAYLIST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Sequencer
{
	inline static constexpr unsigned int Sequencer`1_TypeDefinitionIndex = 11151;

	class Sequencer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* allTracks; // 0x0
		::System::Object* _Owner_k__BackingField; // 0x0
		Il2CppObject* behavior; // 0x0
		::UnityEngine::Coroutine* playCoroutine; // 0x0
		Il2CppObject* _InputBlockLayer_k__BackingField; // 0x0
		::System::Single _PhaseInterval_k__BackingField; // 0x0
		::System::Action* OnPlayed; // 0x0
		::System::Action* OnStopped; // 0x0
		Il2CppObject* playlist; // 0x0

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_OWNER_OFFSET))(nullptr);
		}

		Il2CppObject* get_InputBlockLayer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_INPUTBLOCKLAYER_OFFSET))(nullptr);
		}

		::System::Void set_InputBlockLayer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_SET_INPUTBLOCKLAYER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_PHASECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAnyTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_HASANYTRACK_OFFSET))(nullptr);
		}

		::System::Single get_PhaseInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_PHASEINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_PhaseInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_SET_PHASEINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnPlayed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADD_ONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnPlayed(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_REMOVE_ONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnStopped(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADD_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStopped(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_REMOVE_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_GET_ISDISPOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Play(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputBlock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_SETINPUTBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void LogTrace_KeyNotFoundException(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_LOGTRACE_KEYNOTFOUNDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddTrack(::MX::Sequencer::SequenceTrackBase* arg)
		{
			((::System::Void(*)(::MX::Sequencer::SequenceTrackBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, ::MX::Sequencer::SequenceTrackBase* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Sequencer::SequenceTrackBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTrack(::System::Action* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddTrack(Il2CppObject* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddTrack(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddTrack(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4, ::System::Single arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AddTrack(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Single arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AddTrack(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Single arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, ::System::Action* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Single arg6)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Single arg7)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AddTrack(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::Boolean arg7, ::System::Single arg8)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_ADDTRACK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void InsertToPlaylist(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCER`1_INSERTTOPLAYLIST_OFFSET))(arg, nullptr);
		}

	};
}

