#pragma once
#include "unitysdk.h"

class UIGacha;
class UIGachaButtonInfo;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UIDirectPayGachaButtonInfo;
namespace MX::Data::Excel { class ShopRecruitExcel; }
class UIPopup_System;

#define UINEWGACHABUTTONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA79CF0)
#define UINEWGACHABUTTONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA75500)
#define UINEWGACHABUTTONINFO_ASKBUYGACHAUSEINVISIBLETOKEN_OFFSET UNITYSDK_OFFSET(0xA79D00)
#define UINEWGACHABUTTONINFO_ONCLICKNEWGACHAWAITBUTTON_OFFSET UNITYSDK_OFFSET(0xA79DE0)
#define UINEWGACHABUTTONINFO__ASKBUYGACHAUSEINVISIBLETOKEN_B__16_0_OFFSET UNITYSDK_OFFSET(0xA79E90)
#define UINEWGACHABUTTONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA79F30)
#define UINEWGACHABUTTONINFO_ONCLICKNEWGACHABUTTON_OFFSET UNITYSDK_OFFSET(0xA7A210)

	inline static constexpr unsigned int UINewGachaButtonInfo_TypeDefinitionIndex = 7873;

	class UINewGachaButtonInfo : public Il2CppObject
	{
	public:
		UIGacha* gacha; // 0x18
		UIGachaButtonInfo* gachaButtonInfo; // 0x20
		::UnityEngine::GameObject* newGachaEndDayRoot; // 0x28
		UILabel* newGachaEndDayLabel; // 0x30
		MXButton* newGachaButton; // 0x38
		MXButton* newGachaDisableButton; // 0x40
		::Il2CppArray<::System::Object*>* newGachaMoneyIconSprites; // 0x48
		::Il2CppArray<::System::Object*>* newGachaTicketIconSprites; // 0x50
		::Il2CppArray<::System::Object*>* newGachaCostAmountLabels; // 0x58
		MXButton* newGachaWaitButton; // 0x60
		MXButton* gachaDescButton; // 0x68
		UIDirectPayGachaButtonInfo* directPayGacha; // 0x70
		::MX::Data::Excel::ShopRecruitExcel* excel; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(UIDirectPayGachaButtonInfo* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2)
		{
			((::System::Void(*)(UIDirectPayGachaButtonInfo*, ::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AskBuyGachaUseInvisibleToken()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_ASKBUYGACHAUSEINVISIBLETOKEN_OFFSET))(nullptr);
		}

		::System::Void OnClickNewGachaWaitButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_ONCLICKNEWGACHAWAITBUTTON_OFFSET))(nullptr);
		}

		::System::Void _AskBuyGachaUseInvisibleToken_b__16_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO__ASKBUYGACHAUSEINVISIBLETOKEN_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickNewGachaButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINEWGACHABUTTONINFO_ONCLICKNEWGACHABUTTON_OFFSET))(nullptr);
		}

	};

