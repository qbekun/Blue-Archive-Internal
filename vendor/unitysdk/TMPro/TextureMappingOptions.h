#pragma once
#include "../unitysdk.h"

namespace TMPro { class TextureMappingOptions; }

namespace TMPro
{
	inline static constexpr unsigned int TextureMappingOptions_TypeDefinitionIndex = 33739;

	class TextureMappingOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::TextureMappingOptions* Character; // 0x0
		::TMPro::TextureMappingOptions* Line; // 0x0
		::TMPro::TextureMappingOptions* Paragraph; // 0x0
		::TMPro::TextureMappingOptions* MatchAspect; // 0x0

	};
}

