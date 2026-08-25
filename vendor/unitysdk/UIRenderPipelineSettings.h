#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UIRenderPassSettings; }
namespace UnityEngine::Rendering::Universal { class MXBloomSettings; }

#define UIRENDERPIPELINESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05DA10)

	inline static constexpr unsigned int UIRenderPipelineSettings_TypeDefinitionIndex = 32659;

	class UIRenderPipelineSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::UIRenderPassSettings* PassSettings; // 0x10
		::UnityEngine::Rendering::Universal::MXBloomSettings* BloomSettings; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRENDERPIPELINESETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

