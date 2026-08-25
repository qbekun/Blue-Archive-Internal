#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class PositionType; }

namespace NPA::Promotion
{
	inline static constexpr unsigned int PositionType_TypeDefinitionIndex = 27375;

	class PositionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Promotion::PositionType* CENTER; // 0x0
		::NPA::Promotion::PositionType* CENTER_TOP; // 0x0
		::NPA::Promotion::PositionType* CENTER_BOTTOM; // 0x0
		::NPA::Promotion::PositionType* LEFT_TOP; // 0x0
		::NPA::Promotion::PositionType* LEFT_BOTTOM; // 0x0
		::NPA::Promotion::PositionType* RIGHT_TOP; // 0x0
		::NPA::Promotion::PositionType* RIGHT_BOTTOM; // 0x0

	};
}

