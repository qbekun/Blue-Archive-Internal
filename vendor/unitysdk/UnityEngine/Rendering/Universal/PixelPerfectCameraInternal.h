#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IPixelPerfectCamera; }
namespace UnityEngine::Experimental::Rendering::Universal { class PixelPerfectCamera; }
namespace UnityEngine { class Rect; }

#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CALCULATECAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA021750)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CORRECTCINEMACHINEORTHOSIZE_OFFSET UNITYSDK_OFFSET(0xA021E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0223B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA022430)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA022490)
#define UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CALCULATEFINALBLITPIXELRECT_OFFSET UNITYSDK_OFFSET(0xA022550)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PixelPerfectCameraInternal_TypeDefinitionIndex = 32489;

	class PixelPerfectCameraInternal : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::IPixelPerfectCamera* m_Component; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera* m_SerializableComponent; // 0x18
		::System::Single originalOrthoSize; // 0x20
		::System::Boolean hasPostProcessLayer; // 0x24
		::System::Boolean cropFrameXAndY; // 0x25
		::System::Boolean cropFrameXOrY; // 0x26
		::System::Boolean useStretchFill; // 0x27
		::System::Int32 zoom; // 0x28
		::System::Boolean useOffscreenRT; // 0x2C
		::System::Int32 offscreenRTWidth; // 0x30
		::System::Int32 offscreenRTHeight; // 0x34
		::UnityEngine::Rect* pixelRect; // 0x38
		::System::Single orthoSize; // 0x48
		::System::Single unitsPerPixel; // 0x4C
		::System::Int32 cinemachineVCamZoom; // 0x50

		::System::Void CalculateCameraProperties(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CALCULATECAMERAPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Single CorrectCinemachineOrthoSize(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CORRECTCINEMACHINEORTHOSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::IPixelPerfectCamera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IPixelPerfectCamera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* CalculateFinalBlitPixelRect(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PIXELPERFECTCAMERAINTERNAL_CALCULATEFINALBLITPIXELRECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

