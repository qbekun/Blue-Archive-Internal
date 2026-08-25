#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_GET_PARCELLIST_OFFSET UNITYSDK_OFFSET(0x1E1F5A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x1E1F650)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1E1F710)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E1F7F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1E1F8D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E1F8E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E1F960)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FC40)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x1E1FC50)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E1FC70)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ResultPopup_TypeDefinitionIndex = 20848;

	class UICardGame_ResultPopup : public Il2CppObject
	{
	public:
		UILabel* stageLabel; // 0xD8
		UITexture* pointIcon; // 0xE0
		UILabel* pointNameLabel; // 0xE8
		UILabel* hasPointAmountLabel; // 0xF0
		UILabel* rewardPointAmountLabel; // 0xF8
		MXButton* confirmBtn; // 0x100
		MXButton* closeBtn; // 0x108
		MXButton* cancelBtn; // 0x110
		UILabel* emptyLabel; // 0x118
		Il2CppObject* callback; // 0x120
		::System::Single originTimeScale; // 0x128
		UISmallParcelList* parcelList; // 0x130

		UISmallParcelList* get_ParcelList()
		{
			return (return (UISmallParcelList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_GET_PARCELLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_COOPENANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0(::System::Boolean arg, ::System::Action* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP___N__0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESULTPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}

