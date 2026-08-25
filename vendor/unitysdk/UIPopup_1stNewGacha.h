#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_1STNEWGACHA_SETDATA_OFFSET UNITYSDK_OFFSET(0xA98F80)
#define UIPOPUP_1STNEWGACHA_INITPRICEOBJECT_OFFSET UNITYSDK_OFFSET(0xA99470)
#define UIPOPUP_1STNEWGACHA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA99560)
#define UIPOPUP_1STNEWGACHA_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xA99570)
#define UIPOPUP_1STNEWGACHA_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xA99590)
#define UIPOPUP_1STNEWGACHA_GET_CURRSELLINGLEGALLABEL_OFFSET UNITYSDK_OFFSET(0xA99500)
#define UIPOPUP_1STNEWGACHA_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA99620)
#define UIPOPUP_1STNEWGACHA_AWAKE_OFFSET UNITYSDK_OFFSET(0xA996B0)

	inline static constexpr unsigned int UIPopup_1stNewGacha_TypeDefinitionIndex = 7951;

	class UIPopup_1stNewGacha : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* productTitleLabel; // 0xE0
		UILabel* productDescriptionLabel; // 0xE8
		MXButton* okButton; // 0xF0
		MXButton* cancelButton; // 0xF8
		::UnityEngine::GameObject* costUiObjects; // 0x100
		::UnityEngine::GameObject* costUiKrObjects; // 0x108
		::Il2CppArray<::System::Object*>* costCodeLabels; // 0x110
		::Il2CppArray<::System::Object*>* priceLabels; // 0x118
		UILabel* sellingLegalKrLabel; // 0x120
		::System::Action* confirmedCallback; // 0x128
		::System::Action* canceledCallback; // 0x130

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitPriceObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_INITPRICEOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		UILabel* get_CurrSellingLegalLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_GET_CURRSELLINGLEGALLABEL_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STNEWGACHA_AWAKE_OFFSET))(nullptr);
		}

	};

