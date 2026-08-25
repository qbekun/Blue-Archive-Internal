#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::XR { class Eyes; }

#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x9F27120)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9F27140)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F272D0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9F272E0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F274E0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F27500)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F27520)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F27540)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F27550)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F27560)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F27750)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x9F27760)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F27770)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F27780)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F277A0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F277C0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F27800)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x9F27820)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int EyesControl_TypeDefinitionIndex = 28589;

	class EyesControl : public ::MX::MinigameCCG::Procedures::CCGHitActiveTiming
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _fixationPoint_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _leftEyeOpenAmount_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::AxisControl* _rightEyeOpenAmount_k__BackingField; // 0x1C8

		::System::Void set_fixationPoint(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::Eyes* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::XR::Eyes*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Eyes* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::XR::Eyes*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_leftEyeOpenAmount()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_fixationPoint()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_rightEyeOpenAmount()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET))(nullptr);
		}

	};
}

