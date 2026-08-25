#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Transform; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineExtension; }
namespace Cinemachine { class CameraState&; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class GameObject; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cinemachine { class LensSettings&; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x285C8F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x285C950)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x285C960)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CA10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CAA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CBF0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CCA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CD30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x285CE80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x285CF30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET UNITYSDK_OFFSET(0x285D060)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_MEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x285D0B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_MEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x285D0C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x285D0D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x285D300)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x285D520)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x285D6A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x285D6B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x285D6E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x285D6F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET UNITYSDK_OFFSET(0x285D700)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x285D720)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x285D790)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2859E00)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x285D8A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x285D8B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x285D8C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x285D8D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x285D970)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x285D9C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x285DA40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_START_OFFSET UNITYSDK_OFFSET(0x285DC40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x285DC50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x285DD80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x285DE20)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x285DEC0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x285DF20)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x285E290)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x285E300)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATESLAVESTATUS_OFFSET UNITYSDK_OFFSET(0x285D7E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET UNITYSDK_OFFSET(0x2857950)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET UNITYSDK_OFFSET(0x2857020)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET UNITYSDK_OFFSET(0x285DAE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET UNITYSDK_OFFSET(0x285E310)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x285E320)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x285E3D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET UNITYSDK_OFFSET(0x285E4A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x285E6E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVALIDATECACHEDTARGETS_OFFSET UNITYSDK_OFFSET(0x285E1F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x285EAF0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x285EB00)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x285EB10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETCHANGED_OFFSET UNITYSDK_OFFSET(0x285EB20)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATETARGETCACHE_OFFSET UNITYSDK_OFFSET(0x285EB30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x285ED70)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETASVCAM_OFFSET UNITYSDK_OFFSET(0x285ED80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x285ED90)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETASVCAM_OFFSET UNITYSDK_OFFSET(0x285EDA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x285EDB0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x285EDD0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_LEGACYUPGRADE_OFFSET UNITYSDK_OFFSET(0x285EE90)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x285EEA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285EEB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_TypeDefinitionIndex = 34318;

	class CinemachineVirtualCameraBase : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_ExcludedPropertiesInInspector; // 0x18
		::Il2CppArray<::System::Object*>* m_LockStageInInspector; // 0x20
		::System::Int32 m_ValidatingStreamVersion; // 0x28
		::System::Boolean m_OnValidateCalled; // 0x2C
		::System::Int32 m_StreamingVersion; // 0x30
		::System::Int32 m_Priority; // 0x34
		::System::Int32 m_ActivationId; // 0x38
		::System::Single FollowTargetAttachment; // 0x3C
		::System::Single LookAtTargetAttachment; // 0x40
		StandbyUpdateMode* m_StandbyUpdate; // 0x44
		Il2CppObject* _mExtensions_k__BackingField; // 0x48
		::System::Boolean _PreviousStateIsValid_k__BackingField; // 0x50
		::System::Boolean m_WasStarted; // 0x51
		::System::Boolean mSlaveStatusUpdated; // 0x52
		::Cinemachine::CinemachineVirtualCameraBase* m_parentVcam; // 0x58
		::System::Int32 m_QueuePriority; // 0x60
		::UnityEngine::Transform* m_CachedFollowTarget; // 0x68
		::Cinemachine::CinemachineVirtualCameraBase* m_CachedFollowTargetVcam; // 0x70
		::Cinemachine::ICinemachineTargetGroup* m_CachedFollowTargetGroup; // 0x78
		::UnityEngine::Transform* m_CachedLookAtTarget; // 0x80
		::Cinemachine::CinemachineVirtualCameraBase* m_CachedLookAtTargetVcam; // 0x88
		::Cinemachine::ICinemachineTargetGroup* m_CachedLookAtTargetGroup; // 0x90
		::System::Boolean _FollowTargetChanged_k__BackingField; // 0x98
		::System::Boolean _LookAtTargetChanged_k__BackingField; // 0x99

		::System::Int32 get_ValidatingStreamVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VALIDATINGSTREAMVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ValidatingStreamVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Single DetachedFollowTargetDamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* DetachedFollowTargetDamp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* DetachedFollowTargetDamp(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single DetachedLookAtTargetDamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* DetachedLookAtTargetDamp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* DetachedLookAtTargetDamp(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddExtension(::Cinemachine::CinemachineExtension* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineExtension*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveExtension(::Cinemachine::CinemachineExtension* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineExtension*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_mExtensions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_MEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void set_mExtensions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_MEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InvokePrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InvokeOnTransitionInExtensions(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositionBlendMethod(::Cinemachine::CameraState&* arg, BlendHint* arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, BlendHint*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ISVALID_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_STATE_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return (return (::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PARENTCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKAT_OFFSET))(nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOW_OFFSET))(nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PreviousStateIsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET))(nullptr);
		}

		::System::Void set_PreviousStateIsValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_START_OFFSET))(nullptr);
		}

		::System::Boolean RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

		::System::Void EnsureStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ENSURESTARTED_OFFSET))(nullptr);
		}

		IInputAxisProvider* GetInputAxisProvider()
		{
			return (return (IInputAxisProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETINPUTAXISPROVIDER_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateSlaveStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATESLAVESTATUS_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* ResolveLookAt(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* ResolveFollow(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVcamPoolStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET))(nullptr);
		}

		::System::Void MoveToTopOfPrioritySubqueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CinemachineBlend* CreateBlend(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::CinemachineBlendDefinition* arg, ::Cinemachine::CinemachineBlend* arg)
		{
			return (return (::Cinemachine::CinemachineBlend*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition*, ::Cinemachine::CinemachineBlend*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cinemachine::CameraState* PullStateFromVirtualCamera(::UnityEngine::Vector3* arg, ::Cinemachine::LensSettings&* arg)
		{
			return (return (::Cinemachine::CameraState*(*)(::UnityEngine::Vector3*, ::Cinemachine::LensSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvalidateCachedTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVALIDATECACHEDTARGETS_OFFSET))(nullptr);
		}

		::System::Boolean get_FollowTargetChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_FollowTargetChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LookAtTargetChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_LookAtTargetChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTargetCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATETARGETCACHE_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractFollowTargetGroup()
		{
			return (return (::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ABSTRACTFOLLOWTARGETGROUP_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_FollowTargetAsVcam()
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETASVCAM_OFFSET))(nullptr);
		}

		::Cinemachine::ICinemachineTargetGroup* get_AbstractLookAtTargetGroup()
		{
			return (return (::Cinemachine::ICinemachineTargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ABSTRACTLOOKATTARGETGROUP_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCameraBase* get_LookAtTargetAsVcam()
		{
			return (return (::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETASVCAM_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void LegacyUpgrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_LEGACYUPGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

