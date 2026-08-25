#pragma once
#include "../unitysdk.h"

namespace TMPro { class VerticalAlignmentOptions; }

namespace TMPro
{
	inline static constexpr unsigned int VerticalAlignmentOptions_TypeDefinitionIndex = 33733;

	class VerticalAlignmentOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::VerticalAlignmentOptions* Top; // 0x0
		::TMPro::VerticalAlignmentOptions* Middle; // 0x0
		::TMPro::VerticalAlignmentOptions* Bottom; // 0x0
		::TMPro::VerticalAlignmentOptions* Baseline; // 0x0
		::TMPro::VerticalAlignmentOptions* Geometry; // 0x0
		::TMPro::VerticalAlignmentOptions* Capline; // 0x0

	};
}

