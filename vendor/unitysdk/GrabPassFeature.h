#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define GRABPASSFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF2C40)
#define GRABPASSFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9FF2FF0)
#define GRABPASSFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3030)

	inline static constexpr unsigned int GrabPassFeature_TypeDefinitionIndex = 32405;

	class GrabPassFeature : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderPassEvent* grabPassEvent; // 0x20
		::UnityEngine::Rendering::Universal::RenderPassEvent* drawPassEvent; // 0x24
		::System::String* textureName; // 0x28
		::System::String* lightModeName; // 0x30
		::System::Int32 downScale; // 0x38
		GrabScreenPass* m_GrabScreenPass; // 0x40
		DrawGrabPassLightModePass* m_DrawObjectsPass; // 0x48

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRABPASSFEATURE_CREATE_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + GRABPASSFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRABPASSFEATURE_.CTOR_OFFSET))(nullptr);
		}

	};

