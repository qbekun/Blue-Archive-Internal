#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x282DDB0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x282DDC0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x282DDD0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x282DE00)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x282DE90)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x282DEB0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x282E420)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExternalCamera_TypeDefinitionIndex = 34215;

	class CinemachineExternalCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA0
		::UnityEngine::Camera* m_Camera; // 0xA8
		::Cinemachine::CameraState* m_State; // 0xB0
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x198
		BlendHint* m_BlendHint; // 0x1A0

		::UnityEngine::Transform* get_Follow()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_FOLLOW_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_LOOKAT_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Follow(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_FOLLOW_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_SET_LOOKAT_OFFSET))(arg, nullptr);
		}

	};
}

