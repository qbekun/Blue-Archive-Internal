#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

	inline static constexpr unsigned int RenderPassInputSummary_TypeDefinitionIndex = 32783;

	class RenderPassInputSummary : public Il2CppObject
	{
	public:
		::System::Boolean requiresDepthTexture; // 0x10
		::System::Boolean requiresDepthPrepass; // 0x11
		::System::Boolean requiresNormalsTexture; // 0x12
		::System::Boolean requiresColorTexture; // 0x13
		::System::Boolean requiresMotionVectors; // 0x14
		::UnityEngine::Rendering::Universal::RenderPassEvent* requiresDepthNormalAtEvent; // 0x18
		::UnityEngine::Rendering::Universal::RenderPassEvent* requiresDepthTextureEarliestEvent; // 0x1C

	};

