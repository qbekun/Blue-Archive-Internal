#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x2849B70)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_EFFECTIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x284B270)
#define CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x284FF80)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x284FF90)
#define CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x284A960)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x28499C0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0x28500C0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2850170)
#define CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET UNITYSDK_OFFSET(0x284BCE0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x2850270)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x284A7D0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET UNITYSDK_OFFSET(0x284BB80)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x2850250)
#define CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2850280)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x2850610)
#define CINEMACHINE_CINEMACHINETRANSPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x284D1F0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x284C680)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2850620)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTransposer_TypeDefinitionIndex = 34272;

	class CinemachineTransposer : public Il2CppObject
	{
	public:
		BindingMode* m_BindingMode; // 0x20
		::UnityEngine::Vector3* m_FollowOffset; // 0x24
		::System::Single m_XDamping; // 0x30
		::System::Single m_YDamping; // 0x34
		::System::Single m_ZDamping; // 0x38
		AngularDampingMode* m_AngularDampingMode; // 0x3C
		::System::Single m_PitchDamping; // 0x40
		::System::Single m_YawDamping; // 0x44
		::System::Single m_RollDamping; // 0x48
		::System::Single m_AngularDamping; // 0x4C
		::System::Boolean _HideOffsetInInspector_k__BackingField; // 0x50
		::UnityEngine::Vector3* m_PreviousTargetPosition; // 0x54
		::UnityEngine::Quaternion* m_PreviousReferenceOrientation; // 0x60
		::UnityEngine::Quaternion* m_targetOrientationOnAssign; // 0x70
		::UnityEngine::Vector3* m_PreviousOffset; // 0x80
		::UnityEngine::Transform* m_previousTarget; // 0x90

		::UnityEngine::Quaternion* GetReferenceOrientation(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_EffectiveOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_EFFECTIVEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_HideOffsetInInspector(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetTargetCameraPosition(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_AngularDamping()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET))(nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void TrackTarget(::System::Single arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitPrevFrameStateInfo(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_Damping()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HideOffsetInInspector()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_HIDEOFFSETININSPECTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetOffsetForMinimumTargetDistance(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_ISVALID_OFFSET))(nullptr);
		}

	};
}

