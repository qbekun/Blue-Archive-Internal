#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET UNITYSDK_OFFSET(0x9FD3E10)
#define UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET UNITYSDK_OFFSET(0x9FD41B0)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET UNITYSDK_OFFSET(0x9FD41E0)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET UNITYSDK_OFFSET(0x9FD4370)
#define UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET UNITYSDK_OFFSET(0x9FD43C0)
#define UNITYENGINE_RENDERING_COLORUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FD4440)
#define UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET UNITYSDK_OFFSET(0x9FD4490)
#define UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET UNITYSDK_OFFSET(0x9FD44F0)
#define UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET UNITYSDK_OFFSET(0x9FD4640)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET UNITYSDK_OFFSET(0x9FD46C0)
#define UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET UNITYSDK_OFFSET(0x9FD4750)
#define UNITYENGINE_RENDERING_COLORUTILS_GET_LENSIMPERFECTIONEXPOSURESCALE_OFFSET UNITYSDK_OFFSET(0x9FD4300)
#define UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET UNITYSDK_OFFSET(0x9FD4800)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET UNITYSDK_OFFSET(0x9FD4830)
#define UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET UNITYSDK_OFFSET(0x9FD48D0)
#define UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x9FD4A50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorUtils_TypeDefinitionIndex = 34054;

	class ColorUtils : public Il2CppObject
	{
	public:
		::System::Single s_LightMeterCalibrationConstant; // 0x0
		::System::Single s_LensAttenuation; // 0x4

		Il2CppObject* PrepareLiftGammaGain(::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARELIFTGAMMAGAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Luminance(::UnityEngine::Color&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_LUMINANCE_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertEV100ToExposure(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEV100TOEXPOSURE_OFFSET))(arg, nullptr);
		}

		::System::Single ComputeISO(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEISO_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* CIExyToLMS(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CIEXYTOLMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* ToRGBA(::System::UInt32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TORGBA_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertExposureToEV100(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_CONVERTEXPOSURETOEV100_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToHex(::UnityEngine::Color* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_TOHEX_OFFSET))(arg, nullptr);
		}

		::System::Single ComputeEV100(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ComputeEV100FromAvgLuminance(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COMPUTEEV100FROMAVGLUMINANCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_lensImperfectionExposureScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_GET_LENSIMPERFECTIONEXPOSURESCALE_OFFSET))(nullptr);
		}

		::System::Single StandardIlluminantY(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_STANDARDILLUMINANTY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* PrepareSplitToning(::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESPLITTONING_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ColorBalanceToLMSCoeffs(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_COLORBALANCETOLMSCOEFFS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* PrepareShadowsMidtonesHighlights(::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORUTILS_PREPARESHADOWSMIDTONESHIGHLIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

