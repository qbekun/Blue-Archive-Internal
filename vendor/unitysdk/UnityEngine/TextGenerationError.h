#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextGenerationError; }

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerationError_TypeDefinitionIndex = 37661;

	class TextGenerationError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextGenerationError* None; // 0x0
		::UnityEngine::TextGenerationError* CustomSizeOnNonDynamicFont; // 0x0
		::UnityEngine::TextGenerationError* CustomStyleOnNonDynamicFont; // 0x0
		::UnityEngine::TextGenerationError* NoFont; // 0x0

	};
}

