#pragma once
#include "unitysdk.h"

class UIGacha;
class UIGachaButtonInfo;
class MXButton;
class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class UIDirectPayGachaButtonInfo;
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::Data { class PickupDuplicateBonusExcelData; }
class UIPopup_GachaCharList;

#define UITHREESTARSELECTBUTTONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA75AA0)
#define UITHREESTARSELECTBUTTONINFO__ONCLICKTHREESTARSELECTTICKETUSEBUTTON_B__22_2_OFFSET UNITYSDK_OFFSET(0xA7D3C0)
#define UITHREESTARSELECTBUTTONINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA7D400)
#define UITHREESTARSELECTBUTTONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7D490)
#define UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETBUYWAITBUTTON_OFFSET UNITYSDK_OFFSET(0xA7D960)
#define UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETBUYBUTTON_OFFSET UNITYSDK_OFFSET(0xA7DA10)
#define UITHREESTARSELECTBUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7DD70)
#define UITHREESTARSELECTBUTTONINFO__ONCLICKTHREESTARSELECTTICKETUSEBUTTON_B__22_1_OFFSET UNITYSDK_OFFSET(0xA7DD80)
#define UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETUSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA7DEF0)

	inline static constexpr unsigned int UIThreeStarSelectButtonInfo_TypeDefinitionIndex = 7886;

	class UIThreeStarSelectButtonInfo : public Il2CppObject
	{
	public:
		UIGacha* gacha; // 0x18
		UIGachaButtonInfo* gachaButtonInfo; // 0x20
		MXButton* threeStarSelectTicketBuyButton; // 0x28
		MXButton* threeStarSelectTicketBuyDisableButton; // 0x30
		MXButton* threeStarSelectTicketUseButton; // 0x38
		::Il2CppArray<::System::Object*>* threeStarSelectTicketBuyButtonLabels; // 0x40
		::Il2CppArray<::System::Object*>* threeStarSelectTicketBuyEndDayRoots; // 0x48
		::Il2CppArray<::System::Object*>* threeStarSelectTicketBuyEndDayLabels; // 0x50
		::Il2CppArray<::System::Object*>* threeStarSelectTicketBuyCostAmountLabels; // 0x58
		::Il2CppArray<::System::Object*>* threeStarSelectTicketIconTextures; // 0x60
		UILabel* threeStarSelectTicketUseEndDayLabel; // 0x68
		UILabel* threeStarSelectTicketUseCostAmountLabel; // 0x70
		UISprite* threeStarSelectTicketIconSprite; // 0x78
		MXButton* threeStarSelectTicketBuyWaitButton; // 0x80
		MXButton* gachaDescButton; // 0x88
		::UnityEngine::GameObject* threeStarSelectTicketUseEndDayLabelParent; // 0x90
		Il2CppObject* graceTimeAlertAlreadyShowed; // 0x0
		UIDirectPayGachaButtonInfo* directPayGacha; // 0x98
		::MX::Data::Excel::ShopRecruitExcel* excel; // 0xA0

		::System::Void SetData(UIDirectPayGachaButtonInfo* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2)
		{
			((::System::Void(*)(UIDirectPayGachaButtonInfo*, ::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _OnClickThreeStarSelectTicketUseButton_b__22_2(::MX::Data::PickupDuplicateBonusExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::PickupDuplicateBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO__ONCLICKTHREESTARSELECTTICKETUSEBUTTON_B__22_2_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickThreeStarSelectTicketBuyWaitButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETBUYWAITBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickThreeStarSelectTicketBuyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETBUYBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickThreeStarSelectTicketUseButton_b__22_1(UIPopup_GachaCharList* arg)
		{
			((::System::Void(*)(UIPopup_GachaCharList*, ::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO__ONCLICKTHREESTARSELECTTICKETUSEBUTTON_B__22_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickThreeStarSelectTicketUseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITHREESTARSELECTBUTTONINFO_ONCLICKTHREESTARSELECTTICKETUSEBUTTON_OFFSET))(nullptr);
		}

	};

