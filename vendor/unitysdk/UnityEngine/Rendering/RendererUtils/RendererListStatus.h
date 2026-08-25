#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::RendererUtils { class RendererListStatus; }

namespace UnityEngine::Rendering::RendererUtils
{
	inline static constexpr unsigned int RendererListStatus_TypeDefinitionIndex = 31591;

	class RendererListStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RendererUtils::RendererListStatus* kRendererListInvalid; // 0x0
		::UnityEngine::Rendering::RendererUtils::RendererListStatus* kRendererListProcessing; // 0x0
		::UnityEngine::Rendering::RendererUtils::RendererListStatus* kRendererListEmpty; // 0x0
		::UnityEngine::Rendering::RendererUtils::RendererListStatus* kRendererListPopulated; // 0x0

	};
}

