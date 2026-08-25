#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace MXUnderCover { class UCSightVisual; }
class RotateWithInAngle;
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCPlayer; }
class RotateData;
class EntityCompositionData;
namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class Vector3; }

#define MXUNDERCOVER_UCSIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8B4F0)
#define MXUNDERCOVER_UCSIGHT_SET_ONENTERTARGET_OFFSET UNITYSDK_OFFSET(0xD8B600)
#define MXUNDERCOVER_UCSIGHT_CO_ROTATETOFRONT_OFFSET UNITYSDK_OFFSET(0xD8B610)
#define MXUNDERCOVER_UCSIGHT_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xD8B6B0)
#define MXUNDERCOVER_UCSIGHT_ONENTERPLAYER_OFFSET UNITYSDK_OFFSET(0xD8B6C0)
#define MXUNDERCOVER_UCSIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8B6E0)
#define MXUNDERCOVER_UCSIGHT_GET_ONEXITTARGET_OFFSET UNITYSDK_OFFSET(0xD8B730)
#define MXUNDERCOVER_UCSIGHT_SET_STAYTIME_OFFSET UNITYSDK_OFFSET(0xD8B740)
#define MXUNDERCOVER_UCSIGHT_GET_STAYTIME_OFFSET UNITYSDK_OFFSET(0xD8B750)
#define MXUNDERCOVER_UCSIGHT_CO_GUARDMODE_OFFSET UNITYSDK_OFFSET(0xD8B760)
#define MXUNDERCOVER_UCSIGHT_GET_DETECTINGRATE_OFFSET UNITYSDK_OFFSET(0xD8B810)
#define MXUNDERCOVER_UCSIGHT_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD8B980)
#define MXUNDERCOVER_UCSIGHT_ROTATETOFRONT_OFFSET UNITYSDK_OFFSET(0xD8BA10)
#define MXUNDERCOVER_UCSIGHT_GET_ONSTAYTARGET_OFFSET UNITYSDK_OFFSET(0xD8BBC0)
#define MXUNDERCOVER_UCSIGHT_ON_OFFSET UNITYSDK_OFFSET(0xD8BBD0)
#define MXUNDERCOVER_UCSIGHT_GET_ISINPLAYERBOX_OFFSET UNITYSDK_OFFSET(0xD8B870)
#define MXUNDERCOVER_UCSIGHT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD8BC00)
#define MXUNDERCOVER_UCSIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD8BD20)
#define MXUNDERCOVER_UCSIGHT_ISINSIGHT_OFFSET UNITYSDK_OFFSET(0xD8BD90)
#define MXUNDERCOVER_UCSIGHT_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD8C500)
#define MXUNDERCOVER_UCSIGHT_ONOVERPLAYER_OFFSET UNITYSDK_OFFSET(0xD8C510)
#define MXUNDERCOVER_UCSIGHT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD8C5B0)
#define MXUNDERCOVER_UCSIGHT_STARTGUARDMODE_OFFSET UNITYSDK_OFFSET(0xD8CC00)
#define MXUNDERCOVER_UCSIGHT_GET_HITS_OFFSET UNITYSDK_OFFSET(0xD8CD40)
#define MXUNDERCOVER_UCSIGHT_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0xD8CD50)
#define MXUNDERCOVER_UCSIGHT_SET_ONOVERTARGET_OFFSET UNITYSDK_OFFSET(0xD8CD60)
#define MXUNDERCOVER_UCSIGHT_ONSTAYPLAYER_OFFSET UNITYSDK_OFFSET(0xD8CAC0)
#define MXUNDERCOVER_UCSIGHT_GET_ISINPLAYER_OFFSET UNITYSDK_OFFSET(0xD8CD70)
#define MXUNDERCOVER_UCSIGHT_SET_ONEXITTARGET_OFFSET UNITYSDK_OFFSET(0xD8CE80)
#define MXUNDERCOVER_UCSIGHT_SET_ONSTAYTARGET_OFFSET UNITYSDK_OFFSET(0xD8CE90)
#define MXUNDERCOVER_UCSIGHT_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0xD8CEA0)
#define MXUNDERCOVER_UCSIGHT_REBIND_OFFSET UNITYSDK_OFFSET(0xD8CEB0)
#define MXUNDERCOVER_UCSIGHT_ISPOINTINSIGHT_OFFSET UNITYSDK_OFFSET(0xD8C060)
#define MXUNDERCOVER_UCSIGHT_STOPIFRUNNING_OFFSET UNITYSDK_OFFSET(0xD8BB50)
#define MXUNDERCOVER_UCSIGHT_GET_ONOVERTARGET_OFFSET UNITYSDK_OFFSET(0xD8CFC0)
#define MXUNDERCOVER_UCSIGHT_OFF_OFFSET UNITYSDK_OFFSET(0xD89110)
#define MXUNDERCOVER_UCSIGHT_ONEXITPLAYER_OFFSET UNITYSDK_OFFSET(0xD8CBE0)
#define MXUNDERCOVER_UCSIGHT_GET_ONENTERTARGET_OFFSET UNITYSDK_OFFSET(0xD8CFD0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSight_TypeDefinitionIndex = 9703;

	class UCSight : public Il2CppObject
	{
	public:
		::System::Int32 SightIndex; // 0x30
		::System::Single ViewDistance; // 0x34
		::System::Single ViewAngle; // 0x38
		::UnityEngine::LayerMask* ObstacleMask; // 0x3C
		::System::Single Tolerance; // 0x40
		::MXUnderCover::UCSightVisual* Visual; // 0x48
		RotateWithInAngle* RotateWithInAngle; // 0x50
		::System::Boolean detectBox; // 0x58
		::System::Single ToleranceInBox; // 0x5C
		Il2CppObject* _Targets_k__BackingField; // 0x60
		Il2CppObject* _OnEnterTarget_k__BackingField; // 0x68
		Il2CppObject* _OnStayTarget_k__BackingField; // 0x70
		Il2CppObject* _OnExitTarget_k__BackingField; // 0x78
		Il2CppObject* _OnOverTarget_k__BackingField; // 0x80
		::Il2CppArray<::System::Object*>* _Hits_k__BackingField; // 0x88
		::System::Single _stayTime_k__BackingField; // 0x90
		CoroutineAsyncOperation* guardModeOperation; // 0x98
		CoroutineAsyncOperation* rotateToFrontOperation; // 0xA0
		::System::Boolean _Pause_k__BackingField; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OnEnterTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_ONENTERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_RotateToFront(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_CO_ROTATETOFRONT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Targets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_TARGETS_OFFSET))(nullptr);
		}

		::System::Void OnEnterPlayer(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONENTERPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnExitTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ONEXITTARGET_OFFSET))(nullptr);
		}

		::System::Void set_stayTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_STAYTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_stayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_STAYTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_GuardMode(RotateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RotateData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_CO_GUARDMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_DetectingRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_DETECTINGRATE_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SYNCTOMODEL_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* RotateToFront(::System::Single arg)
		{
			return ((CoroutineAsyncOperation*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ROTATETOFRONT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnStayTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ONSTAYTARGET_OFFSET))(nullptr);
		}

		::System::Void On()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInPlayerBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ISINPLAYERBOX_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsInSight(::MXUnderCover::UCPlayer* arg, float&* arg2)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCPlayer*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ISINSIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnOverPlayer(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONOVERPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_FIXEDUPDATE_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* StartGuardMode(RotateData* arg)
		{
			return ((CoroutineAsyncOperation*(*)(RotateData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_STARTGUARDMODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Hits()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_HITS_OFFSET))(nullptr);
		}

		::System::Boolean get_Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_PAUSE_OFFSET))(nullptr);
		}

		::System::Void set_OnOverTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_ONOVERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnStayPlayer(::MXUnderCover::UCPlayer* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONSTAYPLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsInPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ISINPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_OnExitTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_ONEXITTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnStayTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_ONSTAYTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_SET_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_REBIND_OFFSET))(nullptr);
		}

		::System::Boolean IsPointInSight(::UnityEngine::Vector3* arg, float&* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ISPOINTINSIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopIfRunning()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_STOPIFRUNNING_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnOverTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ONOVERTARGET_OFFSET))(nullptr);
		}

		::System::Void Off()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_OFF_OFFSET))(nullptr);
		}

		::System::Void OnExitPlayer(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_ONEXITPLAYER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnEnterTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHT_GET_ONENTERTARGET_OFFSET))(nullptr);
		}

	};
}

