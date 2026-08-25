#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET UNITYSDK_OFFSET(0xA067B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET UNITYSDK_OFFSET(0xA067B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET UNITYSDK_OFFSET(0xA067D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET UNITYSDK_OFFSET(0xA067D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_SETSOURCESIZE_OFFSET UNITYSDK_OFFSET(0xA068080)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessUtils_TypeDefinitionIndex = 32720;

	class PostProcessUtils : public Il2CppObject
	{
	public:
		::System::Int32 ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::UnityEngine::Material* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ConfigureDithering(::UnityEngine::Rendering::Universal::PostProcessData* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREDITHERING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* arg, ::UnityEngine::Rendering::Universal::FilmGrain* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::UnityEngine::Camera*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ConfigureFilmGrain(::UnityEngine::Rendering::Universal::PostProcessData* arg, ::UnityEngine::Rendering::Universal::FilmGrain* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_CONFIGUREFILMGRAIN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetSourceSize(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSUTILS_SETSOURCESIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

