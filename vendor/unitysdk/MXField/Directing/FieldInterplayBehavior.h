#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Coroutine; }
namespace MXField::Actions { class FieldPreventInterplayOverlap; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC93E0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INTROFADEDURATION_OFFSET UNITYSDK_OFFSET(0xEC9950)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEC9960)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PREPARESTARTDIRECTING_OFFSET UNITYSDK_OFFSET(0xEC9A40)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_FINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xECA3D0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYOUTROTIMELINE_OFFSET UNITYSDK_OFFSET(0xECA3E0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_COMOVETOSTARTLOCATION_OFFSET UNITYSDK_OFFSET(0xECA470)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_OUTROFADEDURATION_OFFSET UNITYSDK_OFFSET(0xECA500)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_INTERPLAYCAMERA_OFFSET UNITYSDK_OFFSET(0xECA510)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_EXECUTECOROUTINE_OFFSET UNITYSDK_OFFSET(0xECA520)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_FINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xECA530)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_RETURNTOIDLE_OFFSET UNITYSDK_OFFSET(0xECA540)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_HANDLEEXECUTEINTERPLAY_OFFSET UNITYSDK_OFFSET(0xECA810)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INTERPLAYCAMERA_OFFSET UNITYSDK_OFFSET(0xECA8A0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0xECA8B0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xECA920)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_BINDPLAYERANIMATOR_OFFSET UNITYSDK_OFFSET(0xEC9EE0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_EXECUTECOROUTINE_OFFSET UNITYSDK_OFFSET(0xECA940)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_FINISH_OFFSET UNITYSDK_OFFSET(0xECA950)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYMAINTIMELINE_OFFSET UNITYSDK_OFFSET(0xECAA50)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYINTROTIMELINE_OFFSET UNITYSDK_OFFSET(0xECAAE0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_ENDDIRECTOR_OFFSET UNITYSDK_OFFSET(0xECAB70)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xECAB80)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_STOPIDLE_OFFSET UNITYSDK_OFFSET(0xECAD50)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_STARTDIRECTOR_OFFSET UNITYSDK_OFFSET(0xECADC0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INGDIRECTOR_OFFSET UNITYSDK_OFFSET(0xECADD0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEC98E0)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_ENDLOCATION_OFFSET UNITYSDK_OFFSET(0xECAE00)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_STARTLOCATION_OFFSET UNITYSDK_OFFSET(0xECAE10)
#define MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xECAE20)

namespace MXField::Directing
{
	inline static constexpr unsigned int FieldInterplayBehavior_TypeDefinitionIndex = 10910;

	class FieldInterplayBehavior : public Il2CppObject
	{
	public:
		::System::Int64 interplayId; // 0x18
		::UnityEngine::Animation* idleAnimation; // 0x20
		::UnityEngine::Transform* startLocation; // 0x28
		::UnityEngine::Transform* endLocation; // 0x30
		::UnityEngine::Playables::PlayableDirector* startDirector; // 0x38
		::UnityEngine::Playables::PlayableDirector* ingDirector; // 0x40
		::UnityEngine::Playables::PlayableDirector* endDirector; // 0x48
		::System::Single introFadeDuration; // 0x50
		::System::Single outroFadeDuration; // 0x54
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x58
		::System::Boolean hideUI; // 0x60
		::Cinemachine::CinemachineVirtualCamera* _InterplayCamera_k__BackingField; // 0x68
		::System::Action* _FinishedCallback_k__BackingField; // 0x70
		::UnityEngine::Coroutine* _ExecuteCoroutine_k__BackingField; // 0x78
		::MXField::Actions::FieldPreventInterplayOverlap* preventOverlapComponent; // 0x80

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_EXECUTE_OFFSET))(nullptr);
		}

		::System::Single get_IntroFadeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INTROFADEDURATION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PrepareStartDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PREPARESTARTDIRECTING_OFFSET))(nullptr);
		}

		::System::Void set_FinishedCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_FINISHEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayOutroTimeline()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYOUTROTIMELINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToStartLocation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_COMOVETOSTARTLOCATION_OFFSET))(nullptr);
		}

		::System::Single get_OutroFadeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_OUTROFADEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_InterplayCamera(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_INTERPLAYCAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_ExecuteCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_EXECUTECOROUTINE_OFFSET))(nullptr);
		}

		::System::Action* get_FinishedCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_FINISHEDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ReturnToIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_RETURNTOIDLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleExecuteInterplay(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_HANDLEEXECUTEINTERPLAY_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_InterplayCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INTERPLAYCAMERA_OFFSET))(nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYIDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BindPlayerAnimator(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_BINDPLAYERANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExecuteCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_SET_EXECUTECOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_FINISH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayMainTimeline()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYMAINTIMELINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayIntroTimeline()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_PLAYINTROTIMELINE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_EndDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_ENDDIRECTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_START_OFFSET))(nullptr);
		}

		::System::Void StopIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_STOPIDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_StartDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_STARTDIRECTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_IngDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_INGDIRECTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_COEXECUTE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_EndLocation()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_ENDLOCATION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_StartLocation()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_GET_STARTLOCATION_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDINTERPLAYBEHAVIOR_ONDESTROY_OFFSET))(nullptr);
		}

	};
}

