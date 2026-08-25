#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace MX::Data { class EventContentSeasonInfo; }

#define UIEVENTPREVIEWPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24BA8B0)
#define UIEVENTPREVIEWPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24BAAD0)
#define UIEVENTPREVIEWPOPUP_ONCLICKBEFOREHANDSCENARIOBUTTON_OFFSET UNITYSDK_OFFSET(0x24BAB60)
#define UIEVENTPREVIEWPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24BACB0)
#define UIEVENTPREVIEWPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24BACC0)
#define UIEVENTPREVIEWPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24BACF0)
#define UIEVENTPREVIEWPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24BAD80)
#define UIEVENTPREVIEWPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x24BADA0)
#define UIEVENTPREVIEWPOPUP_ONSCENARIOFINISH_OFFSET UNITYSDK_OFFSET(0x24BADB0)

	inline static constexpr unsigned int UIEventPreviewPopup_TypeDefinitionIndex = 5878;

	class UIEventPreviewPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* bgTexture; // 0xE0
		MXButton* beforehandScenarioButton; // 0xE8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickBeforehandScenarioButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_ONCLICKBEFOREHANDSCENARIOBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP___N__0_OFFSET))(nullptr);
		}

		::System::Void OnScenarioFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTPREVIEWPOPUP_ONSCENARIOFINISH_OFFSET))(nullptr);
		}

	};

