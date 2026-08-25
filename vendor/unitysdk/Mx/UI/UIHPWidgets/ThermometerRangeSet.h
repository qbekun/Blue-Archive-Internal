#pragma once
#include "../../../unitysdk.h"

namespace MX::UI::UIHPWidgets
{
	inline static constexpr unsigned int ThermometerRangeSet_TypeDefinitionIndex = 20061;

	class ThermometerRangeSet : public Il2CppObject
	{
	public:
		UITexture* thermometerBG; // 0x10
		UILabel* rangePercentLabel; // 0x18
		::System::Boolean rangePercentIsRangeMin; // 0x20
		::System::Int32 minRatioBoundary; // 0x24
		::System::Int32 maxRatioBoundary; // 0x28
		Il2CppObject* orbitWidgets; // 0x30

	};
}

