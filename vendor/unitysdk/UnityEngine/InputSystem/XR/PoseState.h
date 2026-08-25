#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::XR { class InputTrackingState; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F223D0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F22420)
#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F22490)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseState_TypeDefinitionIndex = 28570;

	class PoseState : public Il2CppObject
	{
	public:
		::System::Int32 kSizeInBytes; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* s_Format; // 0x0
		::System::Boolean isTracked; // 0x10
		::UnityEngine::XR::InputTrackingState* trackingState; // 0x14
		::UnityEngine::Vector3* position; // 0x18
		::UnityEngine::Quaternion* rotation; // 0x24
		::UnityEngine::Vector3* velocity; // 0x34
		::UnityEngine::Vector3* angularVelocity; // 0x40

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::UnityEngine::XR::InputTrackingState* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::XR::InputTrackingState*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

