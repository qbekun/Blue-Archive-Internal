#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Data::DataModel { class EventContentClueSearchRewardInfo; }
namespace MX::Data::DataModel { class EventContentClueInfo; }

#define UIEVENTCULEREWARDLISTITEM_SETCULEROUNDREWARDDATA_OFFSET UNITYSDK_OFFSET(0x249DC90)
#define UIEVENTCULEREWARDLISTITEM_SETREWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x249DE20)
#define UIEVENTCULEREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET UNITYSDK_OFFSET(0x249E160)
#define UIEVENTCULEREWARDLISTITEM_SETCULEREWARDDATA_OFFSET UNITYSDK_OFFSET(0x249E300)
#define UIEVENTCULEREWARDLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x249E450)
#define UIEVENTCULEREWARDLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x249E570)

	inline static constexpr unsigned int UIEventCuleRewardListItem_TypeDefinitionIndex = 5773;

	class UIEventCuleRewardListItem : public Il2CppObject
	{
	public:
		MXButton* totalRewardPopupBtn; // 0x18
		::UnityEngine::Transform* totalRewardPopupBtnRoot; // 0x20
		::UnityEngine::GameObject* clueRoundRewardRoot; // 0x28
		UILabel* clueRoundName; // 0x30
		::UnityEngine::GameObject* clueRewardRoot; // 0x38
		UILabel* clueInfoName; // 0x40
		Il2CppObject* smallParcelCard; // 0x48
		Il2CppObject* showMoreRewardList; // 0x50

		::System::Void SetCuleRoundRewardData(::MX::Data::DataModel::EventContentClueSearchRewardInfo* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::DataModel::EventContentClueSearchRewardInfo*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_SETCULEROUNDREWARDDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetRewardParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_SETREWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void OnClicktotalRewardPopupButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetCuleRewardData(::MX::Data::DataModel::EventContentClueInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::DataModel::EventContentClueInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_SETCULEREWARDDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

