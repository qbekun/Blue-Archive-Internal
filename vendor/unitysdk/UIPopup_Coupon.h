#pragma once
#include "unitysdk.h"

class UIInput;
class UILabel;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_COUPON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2764E90)
#define UIPOPUP_COUPON_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2764EA0)
#define UIPOPUP_COUPON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2765010)
#define UIPOPUP_COUPON_ONCHANGECOUPONINPUT_OFFSET UNITYSDK_OFFSET(0x2765300)
#define UIPOPUP_COUPON_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2765360)
#define UIPOPUP_COUPON_HANDLEUSECOUPONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27654D0)
#define UIPOPUP_COUPON_CO_REQUESTCDKEYYOSTARAPI_OFFSET UNITYSDK_OFFSET(0x2765690)
#define UIPOPUP_COUPON_ONCLICKREQUESTUSECOUPONBUTTON_OFFSET UNITYSDK_OFFSET(0x2765720)

	inline static constexpr unsigned int UIPopup_Coupon_TypeDefinitionIndex = 7317;

	class UIPopup_Coupon : public Il2CppObject
	{
	public:
		UIInput* couponInput; // 0xD8
		UILabel* couponeInputPlaceholder; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* backButton; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnChangeCouponInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_ONCHANGECOUPONINPUT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleUseCouponResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_HANDLEUSECOUPONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestCDKeyYostarAPI(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_CO_REQUESTCDKEYYOSTARAPI_OFFSET))(str, nullptr);
		}

		::System::Void OnClickRequestUseCouponButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_COUPON_ONCLICKREQUESTUSECOUPONBUTTON_OFFSET))(nullptr);
		}

	};

