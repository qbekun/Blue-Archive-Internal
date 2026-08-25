#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayState; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class PlayableTraversalMode; }
namespace UnityEngine::Playables { class DirectorWrapMode; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISPLAYABLEOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA269150)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET UNITYSDK_OFFSET(0xA26A860)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0xA26A9E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA26AB60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA26ADF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET UNITYSDK_OFFSET(0xA26B000)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA269000)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA26B1D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA26B2C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA26B340)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0xA26B190)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET UNITYSDK_OFFSET(0xA26ACF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET UNITYSDK_OFFSET(0xA26B370)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA26B6F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0xA268E80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_OFFSET UNITYSDK_OFFSET(0xA26B800)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0xA26B8D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA26B9A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_OFFSET UNITYSDK_OFFSET(0xA26BA70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_OFFSET UNITYSDK_OFFSET(0xA26BB40)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_OFFSET UNITYSDK_OFFSET(0xA26BC10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET UNITYSDK_OFFSET(0xA26BCE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET UNITYSDK_OFFSET(0xA26BDD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET UNITYSDK_OFFSET(0xA26BEA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET UNITYSDK_OFFSET(0xA26BF90)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDONE_OFFSET UNITYSDK_OFFSET(0xA26C060)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET UNITYSDK_OFFSET(0xA26C130)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET UNITYSDK_OFFSET(0xA26C200)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET UNITYSDK_OFFSET(0xA26C2F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_OFFSET UNITYSDK_OFFSET(0xA26B100)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xA26B660)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xA26C440)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA26C510)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET UNITYSDK_OFFSET(0xA26C600)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET UNITYSDK_OFFSET(0xA26C6D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_OFFSET UNITYSDK_OFFSET(0xA26C7A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA26C870)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA26C940)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0xA26CA10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET UNITYSDK_OFFSET(0xA26A940)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET UNITYSDK_OFFSET(0xA26AAC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0xA26AD50)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET UNITYSDK_OFFSET(0xA26AF70)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA26CC10)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26B780)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26B7C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26B890)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26B960)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BA30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BB00)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BBD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BCA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BD80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BE60)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26BF40)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C020)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C0F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C1C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C2A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C380)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C3C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C400)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C4D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C5B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C690)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C760)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C830)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C900)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26C9D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26CAA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26CAE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26CB30)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26CB80)
#define UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26CBD0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableHandle_TypeDefinitionIndex = 31616;

	class PlayableHandle : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18
		::UnityEngine::Playables::PlayableHandle* m_Null; // 0x0

		Il2CppObject* GetObject()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayableOfType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISPLAYABLEOFTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* get_Null()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GET_NULL_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* GetInput(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* GetOutput(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetInputWeight(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetInputWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_DESTROY_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Playables::PlayableHandle* arg, ::UnityEngine::Playables::PlayableHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle*, ::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Playables::PlayableHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableHandle* arg, ::UnityEngine::Playables::PlayableHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle*, ::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_COMPAREVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckInputBounds(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckInputBounds(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_CHECKINPUTBOUNDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_OFFSET))(nullptr);
		}

		::System::Type* GetPlayableType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_OFFSET))(nullptr);
		}

		::System::Type* GetJobType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_OFFSET))(nullptr);
		}

		::System::Void SetScriptInstance(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayState* GetPlayState()
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_OFFSET))(nullptr);
		}

		::System::Double GetSpeed()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_OFFSET))(nullptr);
		}

		::System::Void SetSpeed(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_OFFSET))(arg, nullptr);
		}

		::System::Double GetTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_OFFSET))(nullptr);
		}

		::System::Void SetTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_OFFSET))(nullptr);
		}

		::System::Void SetDone(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDONE_OFFSET))(arg, nullptr);
		}

		::System::Double GetDuration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_OFFSET))(nullptr);
		}

		::System::Void SetDuration(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPropagateSetTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* GetGraph()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_OFFSET))(nullptr);
		}

		::System::Int32 GetInputCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetInputCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputWeight(::UnityEngine::Playables::PlayableHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetPreviousTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_OFFSET))(nullptr);
		}

		::System::Void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableTraversalMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetJobData()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::DirectorWrapMode* GetTimeWrapMode()
		{
			return (return (::UnityEngine::Playables::DirectorWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_OFFSET))(nullptr);
		}

		::System::Void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetScriptInstance()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetInputHandle(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetOutputHandle(::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputWeightFromIndex(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetInputWeightFromIndex(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISVALID_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Type* GetPlayableType_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYABLETYPE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Type* GetJobType_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBTYPE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSCRIPTINSTANCE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayState* GetPlayState_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::UnityEngine::Playables::PlayState*(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPLAYSTATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Play_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PLAY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Pause_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_PAUSE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Double GetSpeed_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSPEED_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpeed_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETSPEED_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetTime_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIME_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTime_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIME_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDone_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_ISDONE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDone_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDONE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetDuration_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETDURATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDuration_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETDURATION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPropagateSetTime_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETPROPAGATESETTIME_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetGraph_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::Playables::PlayableGraph&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETGRAPH_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputCount_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTCOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputCount_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTCOUNT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInputWeight_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHT_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double GetPreviousTime_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETPREVIOUSTIME_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTraversalMode_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::Playables::PlayableTraversalMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::Playables::PlayableTraversalMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTRAVERSALMODE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetJobData_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETJOBDATA_INJECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::DirectorWrapMode* GetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::UnityEngine::Playables::DirectorWrapMode*(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETTIMEWRAPMODE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeWrapMode_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETTIMEWRAPMODE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetScriptInstance_Injected(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETSCRIPTINSTANCE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetInputHandle_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTHANDLE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetOutputHandle_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETOUTPUTHANDLE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_SETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetInputWeightFromIndex_Injected(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEHANDLE_GETINPUTWEIGHTFROMINDEX_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

