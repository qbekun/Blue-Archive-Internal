#pragma once
#include "../unitysdk.h"

namespace NPA { class SizeUnit; }

namespace NPA
{
	inline static constexpr unsigned int SizeUnit_TypeDefinitionIndex = 25650;

	class SizeUnit : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::SizeUnit* None; // 0x0
		::NPA::SizeUnit* Ratio; // 0x0
		::NPA::SizeUnit* ScreenPixel; // 0x0

	};
}

