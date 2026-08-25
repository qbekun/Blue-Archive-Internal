#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_HardPlayCountResult;
class UIPopup_System;
namespace Cysharp::Threading::Tasks { class UniTask; }

#define UIPOPUP_HARDPLAYCOUNTRECOVER_HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x276A2D0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_2_OFFSET UNITYSDK_OFFSET(0x276A630)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x276A6C0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__ONCLICKOK_B__20_2_OFFSET UNITYSDK_OFFSET(0x276A8B0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x276A940)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x276AC40)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x276AE40)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x276AFD0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_1_OFFSET UNITYSDK_OFFSET(0x276AFE0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_SETDATA_OFFSET UNITYSDK_OFFSET(0x276B020)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__ONCLICKOK_B__20_0_OFFSET UNITYSDK_OFFSET(0x276B060)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x276B250)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x276B950)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x276B9E0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_START_OFFSET UNITYSDK_OFFSET(0x276BA20)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x276BAC0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER_GET_HARDADVENTURESTAGEPLAYCOUNTRECOVERCOST_OFFSET UNITYSDK_OFFSET(0x276B860)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__17_1_OFFSET UNITYSDK_OFFSET(0x276BDB0)
#define UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x276BE40)

	inline static constexpr unsigned int UIPopup_HardPlayCountRecover_TypeDefinitionIndex = 7330;

	class UIPopup_HardPlayCountRecover : public Il2CppObject
	{
	public:
		UILabel* descriptionLabel; // 0xD8
		UILabel* nextCountLabel; // 0xE0
		UILabel* costLabel; // 0xE8
		UILabel* refillCountLabel; // 0xF0
		MXButton* okButton; // 0xF8
		MXButton* cancelButton; // 0x100
		MXButton* backButton; // 0x108
		::MX::Data::CampaignStageInfo* stageInfo; // 0x110
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* stageHistory; // 0x118

		::System::Boolean HandleEventContentPurchasePlayCountHardStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleEventContentPurchasePlayCountHardStageResponseMessage_b__18_2(UIPopup_HardPlayCountResult* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickOk_b__20_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__ONCLICKOK_B__20_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignPurchasePlayCountHardStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleEventContentPurchasePlayCountHardStageResponseMessage_b__18_1(UIPopup_HardPlayCountResult* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* _OnClickOk_b__20_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__ONCLICKOK_B__20_0_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void _HandleCampaignPurchasePlayCountHardStageResponseMessage_b__17_0(UIPopup_HardPlayCountResult* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_START_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_hardAdventureStagePlayCountRecoverCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER_GET_HARDADVENTURESTAGEPLAYCOUNTRECOVERCOST_OFFSET))(nullptr);
		}

		::System::Void _HandleCampaignPurchasePlayCountHardStageResponseMessage_b__17_1(UIPopup_HardPlayCountResult* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLECAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _HandleEventContentPurchasePlayCountHardStageResponseMessage_b__18_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRECOVER__HANDLEEVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_B__18_0_OFFSET))(arg, nullptr);
		}

	};

