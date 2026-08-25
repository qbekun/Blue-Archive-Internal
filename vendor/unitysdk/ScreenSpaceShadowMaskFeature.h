#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define SCREENSPACESHADOWMASKFEATURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FF3A60)
#define SCREENSPACESHADOWMASKFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9FF3BA0)
#define SCREENSPACESHADOWMASKFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF3C10)
#define SCREENSPACESHADOWMASKFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3DC0)
#define SCREENSPACESHADOWMASKFEATURE_ISUNSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9FF3AC0)

	inline static constexpr unsigned int ScreenSpaceShadowMaskFeature_TypeDefinitionIndex = 32407;

	class ScreenSpaceShadowMaskFeature : public Il2CppObject
	{
	public:
		Settings* Setting; // 0x20
		ScreenSpaceShadowMaskPass* Pass; // 0x28

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKFEATURE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKFEATURE_CREATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKFEATURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsUnSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKFEATURE_ISUNSUPPORTED_OFFSET))(nullptr);
		}

	};

