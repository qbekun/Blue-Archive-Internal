#pragma once
#include "unitysdk.h"

class UIGacha;
class MXButton;
class UIGachaButtonInfo;
class UIFreeGachaDisplay;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class GachaCountType;
namespace MX::Data::Excel { class ShopRecruitExcel; }
class GachaInfoObject;

#define UIBASICGACHABUTTON_ISCHECHCOMPLETETUTORIAL_OFFSET UNITYSDK_OFFSET(0xA72400)
#define UIBASICGACHABUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0xA724F0)
#define UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETONEGACHAAVAILABLEPARCELS|29_2_OFFSET UNITYSDK_OFFSET(0xA73B30)
#define UIBASICGACHABUTTON_SETTICKETTENUSECHECKANDSETTING_OFFSET UNITYSDK_OFFSET(0xA740B0)
#define UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETONETICKETUSE|29_0_OFFSET UNITYSDK_OFFSET(0xA749B0)
#define UIBASICGACHABUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA74BA0)
#define UIBASICGACHABUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xA74BB0)
#define UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETTICKETSPRITENAME|29_1_OFFSET UNITYSDK_OFFSET(0xA74A80)
#define UIBASICGACHABUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA74E20)
#define UIBASICGACHABUTTON_SETGACHACOST_OFFSET UNITYSDK_OFFSET(0xA72A50)
#define UIBASICGACHABUTTON_GET_INFO_OFFSET UNITYSDK_OFFSET(0xA729D0)
#define UIBASICGACHABUTTON_ONCLICKGACHABUTTON_OFFSET UNITYSDK_OFFSET(0xA74E50)

	inline static constexpr unsigned int UIBasicGachaButton_TypeDefinitionIndex = 7863;

	class UIBasicGachaButton : public Il2CppObject
	{
	public:
		UIGacha* gacha; // 0x18
		MXButton* gachaButton; // 0x20
		UIGachaButtonInfo* gachaButtonInfo; // 0x28
		UIFreeGachaDisplay* freeGachaDisplay; // 0x30
		::UnityEngine::GameObject* tutorialGachaDisplay; // 0x38
		::UnityEngine::GameObject* gachaNormalInfoRoot; // 0x40
		UILabel* gachaCostAmountLabel; // 0x48
		::UnityEngine::GameObject* gachaTicketRemainDateRoot; // 0x50
		UILabel* gachaTicketRemainDateLabel; // 0x58
		UISprite* ticketPurchaseBtnGoodsIcons; // 0x60
		UISprite* gemPurchaseBtnGoodsIcons; // 0x68
		::UnityEngine::GameObject* costDefaultRoot; // 0x70
		::UnityEngine::GameObject* costMixRoot; // 0x78
		UILabel* costMixGemLabel; // 0x80
		UILabel* costMixTicketAmountLabel; // 0x88
		UISprite* costMixTicketIcon; // 0x90
		MXButton* gachaDescButton; // 0x98
		::System::Int64 goodsId; // 0xA0
		Il2CppObject* freeRecruitIdUsedGacha; // 0xA8
		::System::String* ticketSpriteName; // 0xB8
		::System::Boolean isTenGacha; // 0xC0
		::System::Int64 oneTicketAmount; // 0x0

		::System::Boolean isChechCompleteTutorial(GachaCountType* arg)
		{
			return ((::System::Boolean(*)(GachaCountType*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_ISCHECHCOMPLETETUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(GachaCountType* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2)
		{
			((::System::Void(*)(GachaCountType*, ::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetTicketTenUseCheckAndSetting_g__SetOneGachaAvailableParcels|29_2(::System::Int64 arg, <>c__DisplayClass29_0&* arg2)
		{
			((::System::Void(*)(::System::Int64, <>c__DisplayClass29_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETONEGACHAAVAILABLEPARCELS|29_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTicketTenUseCheckAndSetting(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_SETTICKETTENUSECHECKANDSETTING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SetTicketTenUseCheckAndSetting_g__SetOneTicketUse|29_0(::System::Int64 arg, <>c__DisplayClass29_0&* arg2)
		{
			((::System::Void(*)(::System::Int64, <>c__DisplayClass29_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETONETICKETUSE|29_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _SetTicketTenUseCheckAndSetting_g__SetTicketSpriteName|29_1(<>c__DisplayClass29_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass29_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON__SETTICKETTENUSECHECKANDSETTING_G__SETTICKETSPRITENAME|29_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetGachaCost(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_SETGACHACOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		GachaInfoObject* get_info()
		{
			return ((GachaInfoObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_GET_INFO_OFFSET))(nullptr);
		}

		::System::Void OnClickGachaButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASICGACHABUTTON_ONCLICKGACHABUTTON_OFFSET))(nullptr);
		}

	};

