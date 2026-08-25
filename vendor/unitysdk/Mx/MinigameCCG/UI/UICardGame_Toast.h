#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastInfo; }

#define MX_MINIGAMECCG_UI_UICARDGAME_TOAST_FLOATTOAST_OFFSET UNITYSDK_OFFSET(0x1E0BC60)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOAST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E263B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOAST_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x1E263C0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Toast_TypeDefinitionIndex = 20875;

	class UICardGame_Toast : public Il2CppObject
	{
	public:
		Il2CppObject* toastGroups; // 0xD8
		::MX::MinigameCCG::UI::CCGToastInfo* curToastInfo; // 0xE0

		::System::Void FloatToast(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOAST_FLOATTOAST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOAST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOAST_HIDETOAST_OFFSET))(nullptr);
		}

	};
}

