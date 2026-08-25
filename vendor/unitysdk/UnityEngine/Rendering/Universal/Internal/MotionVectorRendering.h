#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class MotionVectorRendering; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering::Universal::Internal { class PreviousFrameData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_UPDATEMOTIONDATA_OFFSET UNITYSDK_OFFSET(0xA0B9480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0B9C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0B9CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_GETMOTIONDATAFORCAMERA_OFFSET UNITYSDK_OFFSET(0xA0B9D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_CALCULATETIME_OFFSET UNITYSDK_OFFSET(0xA0B9EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA0B9F10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MotionVectorRendering_TypeDefinitionIndex = 32864;

	class MotionVectorRendering : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* s_Instance; // 0x0
		Il2CppObject* m_CameraFrameData; // 0x10
		::System::UInt32 m_FrameCount; // 0x18
		::System::Single m_LastTime; // 0x1C
		::System::Single m_Time; // 0x20

		::System::Void UpdateMotionData(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::CameraData* arg, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::CameraData*, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_UPDATEMOTIONDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_CLEAR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* GetMotionDataForCamera(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_GETMOTIONDATAFORCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalculateTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_CALCULATETIME_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* get_instance()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERING_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

