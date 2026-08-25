#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
class UITexture;
class UIEventMeetupList;
class UILabel;
namespace MX::Data { class EventContentSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class EventMeetupCharacter;

#define UIEVENTMEETUPPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24B19D0)
#define UIEVENTMEETUPPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B1B30)
#define UIEVENTMEETUPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B1BD0)
#define UIEVENTMEETUPPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24B1BE0)
#define UIEVENTMEETUPPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24B1CF0)
#define UIEVENTMEETUPPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24B1D40)
#define UIEVENTMEETUPPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24B1DD0)
#define UIEVENTMEETUPPOPUP_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24B2010)
#define UIEVENTMEETUPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B2610)
#define UIEVENTMEETUPPOPUP_ONMEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B2830)

	inline static constexpr unsigned int UIEventMeetupPopup_TypeDefinitionIndex = 5855;

	class UIEventMeetupPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::UnityEngine::Animation* meetupAnimation; // 0xE0
		UITexture* characterThumbnailTexture; // 0xE8
		UIEventMeetupList* meetupList; // 0xF0
		UILabel* meetupListEmptyLabel; // 0xF8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x100
		::Il2CppArray<::System::Object*>* selectedScenarioGroupIds; // 0x108
		::System::Action* meetupAnimationEndedDelegate; // 0x110

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentScenarioGroupHistoryUpdateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnMeetupCharacterSelected(EventMeetupCharacter* arg)
		{
			((::System::Void(*)(EventMeetupCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPPOPUP_ONMEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

	};

