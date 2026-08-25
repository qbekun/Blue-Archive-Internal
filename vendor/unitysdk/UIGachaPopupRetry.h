#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class UIGachaResult;
class UIGachaPopupRetyTypeTicket;
class UIGachaPopupRetyTypeGem;
class UIGachaPopupRetyTypeMix;
class RetryType;
namespace UnityEngine { class Coroutine; }
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIGACHAPOPUPRETRY_SETGACHARETRYTYPECLOSE_OFFSET UNITYSDK_OFFSET(0x25B6610)
#define UIGACHAPOPUPRETRY_SETGACHARETRYTYPE_OFFSET UNITYSDK_OFFSET(0x25B6690)
#define UIGACHAPOPUPRETRY_ISONETICKETTENUSE_OFFSET UNITYSDK_OFFSET(0x25B7020)
#define UIGACHAPOPUPRETRY_AWAKE_OFFSET UNITYSDK_OFFSET(0x25B79E0)
#define UIGACHAPOPUPRETRY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25B7CC0)
#define UIGACHAPOPUPRETRY_CLOSE_OFFSET UNITYSDK_OFFSET(0x25B8DD0)
#define UIGACHAPOPUPRETRY_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x25B8E10)
#define UIGACHAPOPUPRETRY_ONCLICKPURCHASEBUTTON_OFFSET UNITYSDK_OFFSET(0x25B8E50)
#define UIGACHAPOPUPRETRY_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x25B9DF0)
#define UIGACHAPOPUPRETRY_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x25B8CC0)
#define UIGACHAPOPUPRETRY_WAITOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x25B8D60)
#define UIGACHAPOPUPRETRY_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x25B6950)
#define UIGACHAPOPUPRETRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x25B9EF0)

	inline static constexpr unsigned int UIGachaPopupRetry_TypeDefinitionIndex = 6270;

	class UIGachaPopupRetry : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UILabel* titleLabel; // 0x20
		UILabel* messageLabel; // 0x28
		UILabel* gachaResourceAmountLabel; // 0x30
		::UnityEngine::GameObject* gemIcon; // 0x38
		UISprite* ticketIcon; // 0x40
		UILabel* gachaResourceCostAmountLabel; // 0x48
		MXButton* purchaseButton; // 0x50
		MXButton* cancelButton; // 0x58
		UIGachaResult* gachaResult; // 0x60
		UIGachaPopupRetyTypeTicket* gachaPopupRetyTypeTicket; // 0x68
		UIGachaPopupRetyTypeGem* gachaPopupRetyTypeGem; // 0x70
		UIGachaPopupRetyTypeMix* gachaPopupRetyTypeMix; // 0x78
		::System::String* ticketSpriteName; // 0x80
		RetryType* retryType; // 0x88
		::System::Int64 gachaResourceAmount; // 0x90
		::System::Int64 gachaResourceCostAmount; // 0x98
		::System::Int64 gachaGemCostAmount; // 0xA0
		Il2CppObject* gachableParcels; // 0xA8
		::UnityEngine::Coroutine* openAnimationCoroutine; // 0xB0
		::System::Single purchaseButtonWaitTime; // 0xB8
		::System::Single purchaseButtonLastTime; // 0xBC

		::System::Void SetGachaRetryTypeClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_SETGACHARETRYTYPECLOSE_OFFSET))(nullptr);
		}

		::System::Void SetGachaRetryType(RetryType* arg)
		{
			((::System::Void(*)(RetryType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_SETGACHARETRYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOneTicketTenUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_ISONETICKETTENUSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchaseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_ONCLICKPURCHASEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* get_excel()
		{
			return ((::MX::Data::Excel::ShopRecruitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitOpenAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_WAITOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Int64 get_goodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETRY_.CTOR_OFFSET))(nullptr);
		}

	};

