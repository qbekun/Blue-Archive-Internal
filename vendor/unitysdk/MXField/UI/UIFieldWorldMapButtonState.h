#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class UIFieldWorldMapButtonState; }

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMapButtonState_TypeDefinitionIndex = 10759;

	class UIFieldWorldMapButtonState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXField::UI::UIFieldWorldMapButtonState* Locked; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Normal; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Selected; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Toggle; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Combat; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Combat_VeryHard; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* Inactive; // 0x0
		::MXField::UI::UIFieldWorldMapButtonState* UnderCover; // 0x0

	};
}

