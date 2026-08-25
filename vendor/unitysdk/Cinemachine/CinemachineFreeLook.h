#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class LensSettings; }
namespace Cinemachine { class AxisState; }
namespace Cinemachine { class CameraState; }
namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x282E8C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x282E8D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x282ED30)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x282ED50)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET UNITYSDK_OFFSET(0x282EF20)
#define CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x282F440)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2830330)
#define CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x2830360)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2830380)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET UNITYSDK_OFFSET(0x28304B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x282F8A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x2831AF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x2831BD0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET UNITYSDK_OFFSET(0x2831BF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2831C40)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x2831CE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x282FAF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x2831D20)
#define CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET UNITYSDK_OFFSET(0x282FCB0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2831F10)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET UNITYSDK_OFFSET(0x2831CF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_RESET_OFFSET UNITYSDK_OFFSET(0x2831FD0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2831FE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET UNITYSDK_OFFSET(0x28315E0)
#define CINEMACHINE_CINEMACHINEFREELOOK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2832100)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x2832610)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET UNITYSDK_OFFSET(0x2831D30)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x2830430)
#define CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET UNITYSDK_OFFSET(0x2830C50)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_RIGNAMES_OFFSET UNITYSDK_OFFSET(0x2830AF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x2832620)
#define CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x28330C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x28331A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x28331C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x2833300)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_TypeDefinitionIndex = 34221;

	class CinemachineFreeLook : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Transform* m_Follow; // 0xA8
		::System::Boolean m_CommonLens; // 0xB0
		::Cinemachine::LensSettings* m_Lens; // 0xB4
		TransitionParams* m_Transitions; // 0xE8
		BlendHint* m_LegacyBlendHint; // 0xF8
		::Cinemachine::AxisState* m_YAxis; // 0x100
		Recentering* m_YAxisRecentering; // 0x170
		::Cinemachine::AxisState* m_XAxis; // 0x190
		Heading* m_Heading; // 0x200
		Recentering* m_RecenterToTargetHeading; // 0x20C
		BindingMode* m_BindingMode; // 0x228
		::System::Single m_SplineCurvature; // 0x22C
		::Il2CppArray<::System::Object*>* m_Orbits; // 0x230
		::System::Single m_LegacyHeadingBias; // 0x238
		::System::Boolean mUseLegacyRigDefinitions; // 0x23C
		::System::Boolean mIsDestroyed; // 0x23D
		::Cinemachine::CameraState* m_State; // 0x240
		::Il2CppArray<::System::Object*>* m_Rigs; // 0x328
		::Il2CppArray<::System::Object*>* mOrbitals; // 0x330
		::Cinemachine::CinemachineBlend* mBlendA; // 0x338
		::Cinemachine::CinemachineBlend* mBlendB; // 0x340
		CreateRigDelegate* CreateRigOverride; // 0x0
		DestroyRigDelegate* DestroyRigOverride; // 0x8
		::System::Single m_CachedXAxisHeading; // 0x348
		::System::Single m_LastHeadingUpdateFrame; // 0x34C
		::Il2CppArray<::System::Object*>* m_CachedOrbits; // 0x350
		::System::Single m_CachedTension; // 0x358
		::Il2CppArray<::System::Object*>* m_CachedKnots; // 0x360
		::Il2CppArray<::System::Object*>* m_CachedCtrl1; // 0x368
		::Il2CppArray<::System::Object*>* m_CachedCtrl2; // 0x370

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Single UpdateXAxisHeading(::Cinemachine::CinemachineOrbitalTransposer* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateCachedSpline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET))(nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void InvalidateRigCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void DestroyRigs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET))(nullptr);
		}

		::System::Void UpdateRigCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET))(nullptr);
		}

		::System::Void set_PreviousStateIsValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* GetRig(::System::Int32 arg)
		{
			return (return (::Cinemachine::CinemachineVirtualCamera*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* CalculateNewState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::Cinemachine::CameraState*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::System::Void PushSettingsToRigs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetYAxisValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_RESET_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONDESTROY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateRigs(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_PreviousStateIsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_PREVIOUSSTATEISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetLocalPositionForCameraFromInput(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateInputAxisProvider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATEINPUTAXISPROVIDER_OFFSET))(nullptr);
		}

		::System::Int32 LocateExistingRigs(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RigNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_RIGNAMES_OFFSET))(nullptr);
		}

		::System::Single GetYAxisClosestValue(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

	};
}

