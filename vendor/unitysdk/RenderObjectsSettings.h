#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }

#define RENDEROBJECTSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF89F0)

	inline static constexpr unsigned int RenderObjectsSettings_TypeDefinitionIndex = 32425;

	class RenderObjectsSettings : public Il2CppObject
	{
	public:
		::System::String* passTag; // 0x10
		::UnityEngine::Rendering::Universal::RenderPassEvent* Event; // 0x18
		FilterSettings* filterSettings; // 0x20
		::UnityEngine::Material* overrideMaterial; // 0x28
		::System::Int32 overrideMaterialPassIndex; // 0x30
		::System::Boolean overrideDepthState; // 0x34
		::UnityEngine::Rendering::CompareFunction* depthCompareFunction; // 0x38
		::System::Boolean enableWrite; // 0x3C
		::UnityEngine::Rendering::Universal::StencilStateData* stencilSettings; // 0x40
		CustomCameraSettings* cameraSettings; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDEROBJECTSSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

