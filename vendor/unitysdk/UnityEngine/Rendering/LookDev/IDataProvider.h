#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::LookDev { class Sky; }
namespace UnityEngine::Rendering::LookDev { class StageRuntimeInterface; }
namespace UnityEngine { class RenderTexture&; }

#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_GET_SUPPORTEDDEBUGMODES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_UPDATESKY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_ONBEGINRENDERING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_ONENDRENDERING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_GETSHADOWMASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_UPDATEDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_FIRSTINITSCENE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::LookDev
{
	inline static constexpr unsigned int IDataProvider_TypeDefinitionIndex = 34137;

	class IDataProvider : public Il2CppObject
	{
	public:
		Il2CppObject* get_supportedDebugModes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_GET_SUPPORTEDDEBUGMODES_OFFSET))(nullptr);
		}

		::System::Void UpdateSky(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::LookDev::Sky* arg, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::LookDev::Sky*, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_UPDATESKY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnBeginRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_ONBEGINRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_ONENDRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void GetShadowMask(::UnityEngine::RenderTexture&* arg, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture&*, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_GETSHADOWMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cleanup(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_CLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDebugMode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_UPDATEDEBUGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void FirstInitScene(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_IDATAPROVIDER_FIRSTINITSCENE_OFFSET))(arg, nullptr);
		}

	};
}

