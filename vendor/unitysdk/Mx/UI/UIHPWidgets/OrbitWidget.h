#pragma once
#include "../../../unitysdk.h"

namespace MX::UI::UIHPWidgets
{
	inline static constexpr unsigned int OrbitWidget_TypeDefinitionIndex = 20060;

	class OrbitWidget : public Il2CppObject
	{
	public:
		UIWidget* widget; // 0x10
		::System::Boolean isMinRatioOrbit; // 0x18
		::System::Single distance; // 0x1C
		::System::Boolean isRotate; // 0x20
		::System::Single defaultRotation; // 0x24

	};
}

