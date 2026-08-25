#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UISprite;
namespace MX::Data { class EventContentSeasonInfo; }
class UIDreammaker_Lobby;
class UIPopup_DreamMaker_Start;

#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONCLICKSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0xD0C5B0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0C6D0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD0C9C0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD0C9D0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_SETUI_OFFSET UNITYSDK_OFFSET(0xD0C9F0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xD0CDC0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION_SETDATA_OFFSET UNITYSDK_OFFSET(0xD0CDE0)
#define UIPOPUP_DREAMMAKER_NEWGAMECAUTION__ONCLICKSTARTNEWGAME_B__12_0_OFFSET UNITYSDK_OFFSET(0xD0CE20)

	inline static constexpr unsigned int UIPopup_Dreammaker_NewgameCaution_TypeDefinitionIndex = 619;

	class UIPopup_Dreammaker_NewgameCaution : public Il2CppObject
	{
	public:
		MXButton* cancelButton; // 0xD8
		MXButton* Xbutton; // 0xE0
		MXButton* okButton; // 0xE8
		UILabel* dayCountText; // 0xF0
		UISprite* totalUsedMaterialIcon; // 0xF8
		UILabel* totalUsedMaterialText; // 0x100
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x108
		UIDreammaker_Lobby* myLobby; // 0x110

		::System::Void OnClickStartNewGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONCLICKSTARTNEWGAME_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, UIDreammaker_Lobby* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, UIDreammaker_Lobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickStartNewGame_b__12_0(UIPopup_DreamMaker_Start* arg)
		{
			((::System::Void(*)(UIPopup_DreamMaker_Start*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_NEWGAMECAUTION__ONCLICKSTARTNEWGAME_B__12_0_OFFSET))(arg, nullptr);
		}

	};

