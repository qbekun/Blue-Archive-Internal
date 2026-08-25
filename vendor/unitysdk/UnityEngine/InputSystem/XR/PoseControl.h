#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::XR { class PoseState; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x9F224E0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9F224F0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9F22720)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F22740)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9F22750)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9F22770)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9F22790)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F22960)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9F22980)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9F22990)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F22C30)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F22C50)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9F22E10)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F22E20)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9F22EB0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x9F22EC0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F22EE0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseControl_TypeDefinitionIndex = 28571;

	class PoseControl : public ::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _velocity_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x1A0

		::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::PoseState* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::XR::PoseState*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::XR::PoseState*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET))(nullptr);
		}

	};
}

