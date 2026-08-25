#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::XR { class Bone; }

#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F26DA0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F26DC0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9F26E00)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F26EF0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x9F26F00)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9F26F10)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F26FC0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F270D0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x9F270F0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9F27110)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int BoneControl_TypeDefinitionIndex = 28588;

	class BoneControl : public ::MX::MinigameCCG::Procedures::CCGSkillVFXType
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _parentBoneIndex_k__BackingField; // 0x140
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0x148
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0x150

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Bone* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::XR::Bone*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET))(nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::XR::Bone*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET))(nullptr);
		}

	};
}

