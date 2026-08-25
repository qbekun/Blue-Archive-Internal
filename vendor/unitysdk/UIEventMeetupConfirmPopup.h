#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class UISprite;
namespace MX::Data { class EventContentSeasonInfo; }
class EventMeetupCharacter;

#define UIEVENTMEETUPCONFIRMPOPUP_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x24AF4E0)
#define UIEVENTMEETUPCONFIRMPOPUP_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x24AF570)
#define UIEVENTMEETUPCONFIRMPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AF600)
#define UIEVENTMEETUPCONFIRMPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24AF8F0)
#define UIEVENTMEETUPCONFIRMPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24AFD20)
#define UIEVENTMEETUPCONFIRMPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24AFD30)

	inline static constexpr unsigned int UIEventMeetupConfirmPopup_TypeDefinitionIndex = 5845;

	class UIEventMeetupConfirmPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* characterThumbnailTexture; // 0xE0
		UILabel* desceriptionLabel; // 0xE8
		UISprite* ticketIconSprite; // 0xF0
		UILabel* currTicketCountLabel; // 0xF8
		UILabel* nextTicketCountLabel; // 0x100
		MXButton* cancelButton; // 0x108
		MXButton* okButton; // 0x110
		::System::Action* confirmedCallback; // 0x118

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, EventMeetupCharacter* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, EventMeetupCharacter*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPCONFIRMPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

	};

