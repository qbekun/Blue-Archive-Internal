#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ShadowmaskMode; }
namespace UnityEngine { class ColorSpace; }

#define UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F5730)
#define UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F5770)
#define UNITYENGINE_QUALITYSETTINGS_GET_SHADOWMASKMODE_OFFSET UNITYSDK_OFFSET(0xA1F57B0)
#define UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F57F0)
#define UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0xA1F5830)
#define UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0xA1F5870)
#define UNITYENGINE_QUALITYSETTINGS_GET_BILLBOARDSFACECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F58B0)
#define UNITYENGINE_QUALITYSETTINGS_GET_MAXQUEUEDFRAMES_OFFSET UNITYSDK_OFFSET(0xA1F58F0)
#define UNITYENGINE_QUALITYSETTINGS_GET_DESIREDCOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA1F4950)
#define UNITYENGINE_QUALITYSETTINGS_GET_ACTIVECOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA1F5930)

namespace UnityEngine
{
	inline static constexpr unsigned int QualitySettings_TypeDefinitionIndex = 31005;

	class QualitySettings : public Il2CppObject
	{
	public:
		::System::Int32 get_pixelLightCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_PIXELLIGHTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_pixelLightCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_PIXELLIGHTCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ShadowmaskMode* get_shadowmaskMode()
		{
			return (return (::UnityEngine::ShadowmaskMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_SHADOWMASKMODE_OFFSET))(nullptr);
		}

		::System::Void set_vSyncCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_VSYNCCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_antiAliasing()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_ANTIALIASING_OFFSET))(nullptr);
		}

		::System::Void set_antiAliasing(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_SET_ANTIALIASING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_billboardsFaceCameraPosition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_BILLBOARDSFACECAMERAPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_maxQueuedFrames()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_MAXQUEUEDFRAMES_OFFSET))(nullptr);
		}

		::UnityEngine::ColorSpace* get_desiredColorSpace()
		{
			return (return (::UnityEngine::ColorSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_DESIREDCOLORSPACE_OFFSET))(nullptr);
		}

		::UnityEngine::ColorSpace* get_activeColorSpace()
		{
			return (return (::UnityEngine::ColorSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_GET_ACTIVECOLORSPACE_OFFSET))(nullptr);
		}

	};
}

