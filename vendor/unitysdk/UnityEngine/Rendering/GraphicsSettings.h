#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsTier; }
namespace UnityEngine::Rendering { class BuiltinShaderDefine; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }
namespace UnityEngine::Rendering { class RenderPipelineGlobalSettings; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_LIGHTSUSELINEARINTENSITY_OFFSET UNITYSDK_OFFSET(0xA251670)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSELINEARINTENSITY_OFFSET UNITYSDK_OFFSET(0xA2516B0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0xA2516F0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA251730)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0xA251770)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0xA2517B0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0xA2517F0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA251860)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA2518A0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0xA251940)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA2519C0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA251980)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_REGISTERRENDERPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_REGISTERRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA251A00)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_UNREGISTERRENDERPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_UNREGISTERRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA251A40)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GETSETTINGSFORRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GETSETTINGSFORRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA251A80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 31527;

	class GraphicsSettings : public Il2CppObject
	{
	public:
		::System::Boolean get_lightsUseLinearIntensity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_LIGHTSUSELINEARINTENSITY_OFFSET))(nullptr);
		}

		::System::Void set_lightsUseLinearIntensity(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSELINEARINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_lightsUseColorTemperature(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSECOLORTEMPERATURE_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultRenderingLayerMask(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERINGLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_useScriptableRenderPipelineBatching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasShaderDefine(::UnityEngine::Rendering::GraphicsTier* arg, ::UnityEngine::Rendering::BuiltinShaderDefine* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::GraphicsTier*, ::UnityEngine::Rendering::BuiltinShaderDefine*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BuiltinShaderDefine*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScriptableObject* get_INTERNAL_currentRenderPipeline()
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderPipelineAsset* get_currentRenderPipeline()
		{
			return (return (::UnityEngine::Rendering::RenderPipelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET))(nullptr);
		}

		::System::Void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterRenderPipelineSettings(::UnityEngine::Rendering::RenderPipelineGlobalSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineGlobalSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_REGISTERRENDERPIPELINESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterRenderPipeline(::System::String* str, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_REGISTERRENDERPIPELINE_OFFSET))(str, arg, nullptr);
		}

		::System::Void UnregisterRenderPipelineSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_UNREGISTERRENDERPIPELINESETTINGS_OFFSET))(nullptr);
		}

		::System::Void UnregisterRenderPipeline(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_UNREGISTERRENDERPIPELINE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rendering::RenderPipelineGlobalSettings* GetSettingsForRenderPipeline()
		{
			return (return (::UnityEngine::Rendering::RenderPipelineGlobalSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GETSETTINGSFORRENDERPIPELINE_OFFSET))(nullptr);
		}

		::UnityEngine::Object* GetSettingsForRenderPipeline(::System::String* str)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GETSETTINGSFORRENDERPIPELINE_OFFSET))(str, nullptr);
		}

	};
}

