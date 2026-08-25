#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider2D; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINECONFINER2D_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x282C460)
#define CINEMACHINE_CINEMACHINECONFINER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x282D530)
#define CINEMACHINE_CINEMACHINECONFINER2D_CALCULATEHALFFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x282D480)
#define CINEMACHINE_CINEMACHINECONFINER2D_VALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x282D540)
#define CINEMACHINE_CINEMACHINECONFINER2D_RESET_OFFSET UNITYSDK_OFFSET(0x282D570)
#define CINEMACHINE_CINEMACHINECONFINER2D_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x282D580)
#define CINEMACHINE_CINEMACHINECONFINER2D_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x282D5A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_TypeDefinitionIndex = 34212;

	class CinemachineConfiner2D : public Il2CppObject
	{
	public:
		::UnityEngine::Collider2D* m_BoundingShape2D; // 0x28
		::System::Single m_Damping; // 0x30
		::System::Single m_MaxWindowSize; // 0x34
		::System::Single m_MaxComputationTimePerFrameInSeconds; // 0x38
		::System::Single k_cornerAngleTreshold; // 0x0
		ShapeCache* m_shapeCache; // 0x40

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateHalfFrustumHeight(::Cinemachine::CameraState&* arg, float&* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::CameraState&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_CALCULATEHALFFRUSTUMHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValidateCache(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_VALIDATECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_RESET_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void InvalidateCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_INVALIDATECACHE_OFFSET))(nullptr);
		}

	};
}

