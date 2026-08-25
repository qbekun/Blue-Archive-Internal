#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGButtonToggleTarget; }

#define MX_MINIGAMECCG_UI_ONCLICKHUDBUTTONMESSAGE_GET_BUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x1DEC260)
#define MX_MINIGAMECCG_UI_ONCLICKHUDBUTTONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC270)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickHUDButtonMessage_TypeDefinitionIndex = 20693;

	class OnClickHUDButtonMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::MinigameCCG::UI::CCGButtonToggleTarget* _ButtonType_k__BackingField; // 0x18

		::MX::MinigameCCG::UI::CCGButtonToggleTarget* get_ButtonType()
		{
			return (return (::MX::MinigameCCG::UI::CCGButtonToggleTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKHUDBUTTONMESSAGE_GET_BUTTONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::UI::CCGButtonToggleTarget* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGButtonToggleTarget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKHUDBUTTONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

