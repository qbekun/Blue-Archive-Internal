#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class Texture2DAtlas; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData&; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class VisibleLight&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA059C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_UPDATEADDITIONALLIGHTSATLAS_OFFSET UNITYSDK_OFFSET(0xA059C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SHRINKUVRECT_OFFSET UNITYSDK_OFFSET(0xA05A190)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_COMPUTEOCTAHEDRALCOOKIESIZE_OFFSET UNITYSDK_OFFSET(0xA05A2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCH2D_OFFSET UNITYSDK_OFFSET(0xA05A3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUPADDITIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA05A6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA05B8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_COMPUTECOOKIEREQUESTPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xA059D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCHUVRECTS_OFFSET UNITYSDK_OFFSET(0xA059ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCHCUBE_OFFSET UNITYSDK_OFFSET(0xA05B920)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTCOOKIESHADERDATAINDEX_OFFSET UNITYSDK_OFFSET(0xA05BAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTUVSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0xA05BAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_ADJUSTUVRECT_OFFSET UNITYSDK_OFFSET(0xA05A530)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0xA05BC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_INITADDITIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA05ADC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_APPROXIMATECOOKIESIZEDIVISOR_OFFSET UNITYSDK_OFFSET(0xA059E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_UPLOADADDITIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA05AF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FILTERANDVALIDATEADDITIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA05A860)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA05C790)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SET_ISKEYWORDLIGHTCOOKIEENABLED_OFFSET UNITYSDK_OFFSET(0xA05C830)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTCOOKIESHADERFORMAT_OFFSET UNITYSDK_OFFSET(0xA05C710)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05C840)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUPMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xA05C040)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GET_ISKEYWORDLIGHTCOOKIEENABLED_OFFSET UNITYSDK_OFFSET(0xA05C8E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightCookieManager_TypeDefinitionIndex = 32657;

	class LightCookieManager : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* s_DirLightProj; // 0x0
		::UnityEngine::Rendering::Texture2DAtlas* m_AdditionalLightsCookieAtlas; // 0x10
		LightCookieShaderData* m_AdditionalLightsCookieShaderData; // 0x18
		Settings* m_Settings; // 0x20
		WorkMemory* m_WorkMem; // 0x40
		::Il2CppArray<::System::Object*>* m_VisibleLightIndexToShaderDataIndex; // 0x48
		::System::Int32 k_MaxCookieSizeDivisor; // 0x0
		::System::Int32 m_CookieSizeDivisor; // 0x50
		::System::UInt32 m_PrevCookieRequestPixelCount; // 0x54
		::System::Boolean _IsKeywordLightCookieEnabled_k__BackingField; // 0x58

		::System::Boolean isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Int32 UpdateAdditionalLightsAtlas(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_UPDATEADDITIONALLIGHTSATLAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShrinkUVRect(::UnityEngine::Vector4&* arg, ::System::Single arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::System::Single, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SHRINKUVRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ComputeOctahedralCookieSize(::UnityEngine::Texture* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_COMPUTEOCTAHEDRALCOOKIESIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* Fetch2D(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCH2D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUPADDITIONALLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_DISPOSE_OFFSET))(nullptr);
		}

		::System::UInt32 ComputeCookieRequestPixelCount(Il2CppObject&* arg)
		{
			return (return (::System::UInt32(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_COMPUTECOOKIEREQUESTPIXELCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 FetchUVRects(::UnityEngine::Rendering::CommandBuffer* arg, Il2CppObject&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::CommandBuffer*, Il2CppObject&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCHUVRECTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector4* FetchCube(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FETCHCUBE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetLightCookieShaderDataIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTCOOKIESHADERDATAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void GetLightUVScaleOffset(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTUVSCALEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AdjustUVRect(::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_ADJUSTUVRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitAdditionalLights(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_INITADDITIONALLIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 ApproximateCookieSizeDivisor(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_APPROXIMATECOOKIESIZEDIVISOR_OFFSET))(arg, nullptr);
		}

		::System::Void UploadAdditionalLights(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightData&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightData&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_UPLOADADDITIONALLIGHTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FilterAndValidateAdditionalLights(::UnityEngine::Rendering::Universal::LightData&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::LightData&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_FILTERANDVALIDATEADDITIONALLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsKeywordLightCookieEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SET_ISKEYWORDLIGHTCOOKIEENABLED_OFFSET))(arg, nullptr);
		}

		LightCookieShaderFormat* GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (LightCookieShaderFormat*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GETLIGHTCOOKIESHADERFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Settings&* arg)
		{
			((::System::Void(*)(Settings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetupMainLight(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::VisibleLight&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VisibleLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_SETUPMAINLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsKeywordLightCookieEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCOOKIEMANAGER_GET_ISKEYWORDLIGHTCOOKIEENABLED_OFFSET))(nullptr);
		}

	};
}

