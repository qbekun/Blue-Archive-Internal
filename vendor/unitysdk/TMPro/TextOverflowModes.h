#pragma once
#include "../unitysdk.h"

namespace TMPro { class TextOverflowModes; }

namespace TMPro
{
	inline static constexpr unsigned int TextOverflowModes_TypeDefinitionIndex = 33737;

	class TextOverflowModes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::TextOverflowModes* Overflow; // 0x0
		::TMPro::TextOverflowModes* Ellipsis; // 0x0
		::TMPro::TextOverflowModes* Masking; // 0x0
		::TMPro::TextOverflowModes* Truncate; // 0x0
		::TMPro::TextOverflowModes* ScrollRect; // 0x0
		::TMPro::TextOverflowModes* Page; // 0x0
		::TMPro::TextOverflowModes* Linked; // 0x0

	};
}

