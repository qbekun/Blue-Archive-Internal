#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class RenderTextureDescriptor&; }

#define UNITYENGINE_XR_XRSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA4AB060)
#define UNITYENGINE_XR_XRSETTINGS_GET_ISDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0xA4AB0A0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0xA4AB0E0)
#define UNITYENGINE_XR_XRSETTINGS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET UNITYSDK_OFFSET(0xA4AB120)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREWIDTH_OFFSET UNITYSDK_OFFSET(0xA4AB170)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0xA4AB1B0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0xA4AB1F0)
#define UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALE_OFFSET UNITYSDK_OFFSET(0xA4AB2B0)
#define UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AB2F0)
#define UNITYENGINE_XR_XRSETTINGS_GET_LOADEDDEVICENAME_OFFSET UNITYSDK_OFFSET(0xA4AB330)
#define UNITYENGINE_XR_XRSETTINGS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0xA4AB370)
#define UNITYENGINE_XR_XRSETTINGS_GET_STEREORENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA4AB3B0)
#define UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4AB270)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRSettings_TypeDefinitionIndex = 38025;

	class XRSettings : public Il2CppObject
	{
	public:
		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_isDeviceActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_ISDEVICEACTIVE_OFFSET))(nullptr);
		}

		::System::Single get_eyeTextureResolutionScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTURERESOLUTIONSCALE_OFFSET))(nullptr);
		}

		::System::Void set_eyeTextureResolutionScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_SET_EYETEXTURERESOLUTIONSCALE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_eyeTextureWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_eyeTextureHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_eyeTextureDesc()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_OFFSET))(nullptr);
		}

		::System::Single get_renderViewportScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALE_OFFSET))(nullptr);
		}

		::System::Single get_renderViewportScaleInternal()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_RENDERVIEWPORTSCALEINTERNAL_OFFSET))(nullptr);
		}

		::System::String* get_loadedDeviceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_LOADEDDEVICENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_supportedDevices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_SUPPORTEDDEVICES_OFFSET))(nullptr);
		}

		StereoRenderingMode* get_stereoRenderingMode()
		{
			return (return (StereoRenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_STEREORENDERINGMODE_OFFSET))(nullptr);
		}

		::System::Void get_eyeTextureDesc_Injected(::UnityEngine::RenderTextureDescriptor&* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRSETTINGS_GET_EYETEXTUREDESC_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

