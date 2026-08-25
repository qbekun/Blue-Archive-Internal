#pragma once
#include "unitysdk.h"

class CameraFindType;
class PositionType;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }

#define INSTANTIATECAMERASCREENFXINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C0B30)
#define INSTANTIATECAMERASCREENFXINFO_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x20C0BA0)
#define INSTANTIATECAMERASCREENFXINFO_INSTANTIATEPREFABTOCAMERA_OFFSET UNITYSDK_OFFSET(0x20C0E70)

	inline static constexpr unsigned int InstantiateCameraScreenFxInfo_TypeDefinitionIndex = 3637;

	class InstantiateCameraScreenFxInfo : public Il2CppObject
	{
	public:
		CameraFindType* cameraFindType; // 0x28
		PositionType* positionOrigin; // 0x2C
		::UnityEngine::Vector3* localPosOffset; // 0x30
		::System::Boolean scaleFxToFrustumSize; // 0x3C
		::UnityEngine::Vector3* scaleAtNarrowAspect; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATECAMERASCREENFXINFO_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* InstantiateFx(::UnityEngine::Component* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Component*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATECAMERASCREENFXINFO_INSTANTIATEFX_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* InstantiatePrefabToCamera(::UnityEngine::Camera* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATECAMERASCREENFXINFO_INSTANTIATEPREFABTOCAMERA_OFFSET))(arg, nullptr);
		}

	};

