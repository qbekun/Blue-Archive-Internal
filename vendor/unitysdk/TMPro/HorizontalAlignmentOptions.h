#pragma once
#include "../unitysdk.h"

namespace TMPro { class HorizontalAlignmentOptions; }

namespace TMPro
{
	inline static constexpr unsigned int HorizontalAlignmentOptions_TypeDefinitionIndex = 33732;

	class HorizontalAlignmentOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::HorizontalAlignmentOptions* Left; // 0x0
		::TMPro::HorizontalAlignmentOptions* Center; // 0x0
		::TMPro::HorizontalAlignmentOptions* Right; // 0x0
		::TMPro::HorizontalAlignmentOptions* Justified; // 0x0
		::TMPro::HorizontalAlignmentOptions* Flush; // 0x0
		::TMPro::HorizontalAlignmentOptions* Geometry; // 0x0

	};
}

