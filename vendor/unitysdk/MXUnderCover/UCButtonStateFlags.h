#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCButtonStateFlags; }

namespace MXUnderCover
{
	inline static constexpr unsigned int UCButtonStateFlags_TypeDefinitionIndex = 10014;

	class UCButtonStateFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXUnderCover::UCButtonStateFlags* None; // 0x0
		::MXUnderCover::UCButtonStateFlags* Press; // 0x0
		::MXUnderCover::UCButtonStateFlags* Drag; // 0x0
		::MXUnderCover::UCButtonStateFlags* DragOut; // 0x0

	};
}

