#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastType; }
namespace MX::MinigameCCG::UI { class CCGToastInfo; }

#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x1E26680)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27570)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_FLOATTOAST_OFFSET UNITYSDK_OFFSET(0x1E260C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_GET_TOASTTYPE_OFFSET UNITYSDK_OFFSET(0x1E27580)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ToastGroup_TypeDefinitionIndex = 20880;

	class UICardGame_ToastGroup : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::CCGToastType* toastType; // 0x18
		Il2CppObject* toastElements; // 0x20

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_HIDETOAST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FloatToast(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_FLOATTOAST_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::CCGToastType* get_ToastType()
		{
			return (return (::MX::MinigameCCG::UI::CCGToastType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOASTGROUP_GET_TOASTTYPE_OFFSET))(nullptr);
		}

	};
}

