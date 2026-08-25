#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RenderTextureDescriptor; }

#define UNITYENGINE_RENDERING_XRGRAPHICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FAA6D0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9FAA6E0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x9FAA6F0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_LOADEDDEVICENAME_OFFSET UNITYSDK_OFFSET(0x9FAA740)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0x9FAA790)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_ISDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x9FAA7C0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x9FAA7F0)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_STEREORENDERINGMODE_OFFSET UNITYSDK_OFFSET(0x9FAA800)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_RENDERVIEWPORTSCALE_OFFSET UNITYSDK_OFFSET(0x9FAA830)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x9FAA860)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9FAA890)
#define UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0x9FAA8E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRGraphics_TypeDefinitionIndex = 33931;

	class XRGraphics : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_ENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_eyeTextureDesc()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREDESC_OFFSET))(nullptr);
		}

		::System::String* get_loadedDeviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_LOADEDDEVICENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_eyeTextureWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_isDeviceActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_ISDEVICEACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_eyeTextureResolutionScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET))(arg, nullptr);
		}

		StereoRenderingMode* get_stereoRenderingMode()
		{
			return (return (StereoRenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_STEREORENDERINGMODE_OFFSET))(nullptr);
		}

		::System::Single get_renderViewportScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_RENDERVIEWPORTSCALE_OFFSET))(nullptr);
		}

		::System::Int32 get_eyeTextureHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTUREHEIGHT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_supportedDevices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_SUPPORTEDDEVICES_OFFSET))(nullptr);
		}

		::System::Single get_eyeTextureResolutionScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET))(nullptr);
		}

	};
}

