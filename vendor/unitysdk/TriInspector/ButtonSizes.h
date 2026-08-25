#pragma once
#include "../unitysdk.h"

namespace TriInspector { class ButtonSizes; }

namespace TriInspector
{
	inline static constexpr unsigned int ButtonSizes_TypeDefinitionIndex = 37861;

	class ButtonSizes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TriInspector::ButtonSizes* Small; // 0x0
		::TriInspector::ButtonSizes* Medium; // 0x0
		::TriInspector::ButtonSizes* Large; // 0x0
		::TriInspector::ButtonSizes* Gigantic; // 0x0

	};
}

