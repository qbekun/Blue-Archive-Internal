#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class ButtonActivator;

#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKBUTTONX_OFFSET UNITYSDK_OFFSET(0xD24590)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKRESETBUTTON_OFFSET UNITYSDK_OFFSET(0xD246B0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKINCREASEVALUEBUTTON_OFFSET UNITYSDK_OFFSET(0xD247D0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xD24820)
#define UIPOPUP_MINIGAMERHYTHMOPTION_GET_OFFSETSETTINGVALUE_OFFSET UNITYSDK_OFFSET(0xD249B0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xD249C0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD24F50)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xD24620)
#define UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKDECREASEVALUEBUTTON_OFFSET UNITYSDK_OFFSET(0xD25050)
#define UIPOPUP_MINIGAMERHYTHMOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD250A0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_SET_OFFSETSETTINGVALUE_OFFSET UNITYSDK_OFFSET(0xD24700)

	inline static constexpr unsigned int UIPopup_MinigameRhythmOption_TypeDefinitionIndex = 720;

	class UIPopup_MinigameRhythmOption : public Il2CppObject
	{
	public:
		::System::Int32 maxOffset; // 0x0
		::System::Int32 minOffset; // 0x0
		MXButton* CancelButton; // 0xD8
		MXButton* ConfirmButton; // 0xE0
		MXButton* ButtonX; // 0xE8
		MXButton* ResetButton; // 0xF0
		UILabel* offsetValueLabel; // 0xF8
		ButtonActivator* PlusButtonActivator; // 0x100
		ButtonActivator* MinusButtonActivator; // 0x108
		::System::Int32 offsetSettingValue; // 0x110

		::System::Void OnClickButtonX()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKBUTTONX_OFFSET))(nullptr);
		}

		::System::Void OnClickResetButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKRESETBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickIncreaseValueButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKINCREASEVALUEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Int32 get_OffsetSettingValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_GET_OFFSETSETTINGVALUE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickDecreaseValueButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_ONCLICKDECREASEVALUEBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OffsetSettingValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_SET_OFFSETSETTINGVALUE_OFFSET))(arg, nullptr);
		}

	};

