#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define UIEVENTCHANGEPERMANENT_GET_CHANGEEVENTPERMANENT_OFFSET UNITYSDK_OFFSET(0x2421530)
#define UIEVENTCHANGEPERMANENT_SET_NOTAEVENTADVENTURELISTREQUEST_OFFSET UNITYSDK_OFFSET(0x2421540)
#define UIEVENTCHANGEPERMANENT_ONCLICKEVENTPARMANENTCHANGEBUTTON_OFFSET UNITYSDK_OFFSET(0x2421550)
#define UIEVENTCHANGEPERMANENT_GET_NOTAEVENTADVENTURELISTREQUEST_OFFSET UNITYSDK_OFFSET(0x2421A40)
#define UIEVENTCHANGEPERMANENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2421A50)
#define UIEVENTCHANGEPERMANENT_REFRESHEVENTPERMANENTCHANGEBUTTON_OFFSET UNITYSDK_OFFSET(0x2421A60)
#define UIEVENTCHANGEPERMANENT_SET_CHANGEEVENTPERMANENT_OFFSET UNITYSDK_OFFSET(0x2421D80)
#define UIEVENTCHANGEPERMANENT_SETCHANGEEVENTPERMANENT_OFFSET UNITYSDK_OFFSET(0x2421D90)
#define UIEVENTCHANGEPERMANENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2421F60)
#define UIEVENTCHANGEPERMANENT__REFRESHEVENTPERMANENTCHANGEBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0x2422080)

	inline static constexpr unsigned int UIEventChangePermanent_TypeDefinitionIndex = 5508;

	class UIEventChangePermanent : public Il2CppObject
	{
	public:
		MXButton* eventPermanentChangeButton; // 0x18
		UITexture* eventPermanentChangeButtonTitleTexture; // 0x20
		::System::Boolean _ChangeEventPermanent_k__BackingField; // 0x28
		::System::Boolean _NotAEventAdventureListRequest_k__BackingField; // 0x29
		::System::Int64 changeEventPermanentButtonActiveClearStageId; // 0x30
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x38

		::System::Boolean get_ChangeEventPermanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_GET_CHANGEEVENTPERMANENT_OFFSET))(nullptr);
		}

		::System::Void set_NotAEventAdventureListRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_SET_NOTAEVENTADVENTURELISTREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEventParmanentChangeButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_ONCLICKEVENTPARMANENTCHANGEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean get_NotAEventAdventureListRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_GET_NOTAEVENTADVENTURELISTREQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshEventPermanentChangeButton(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_REFRESHEVENTPERMANENTCHANGEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChangeEventPermanent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_SET_CHANGEEVENTPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetChangeEventPermanent(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_SETCHANGEEVENTPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshEventPermanentChangeButton_b__14_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCHANGEPERMANENT__REFRESHEVENTPERMANENTCHANGEBUTTON_B__14_0_OFFSET))(arg, nullptr);
		}

	};

