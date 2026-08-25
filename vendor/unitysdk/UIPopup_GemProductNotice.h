#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIShopListElement_Gem;
class UIScrollView;
class UIGrid;
class UILabel;
class UIToggle;
class GemProductNoticeDelegator;

#define UIPOPUP_GEMPRODUCTNOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2766E60)
#define UIPOPUP_GEMPRODUCTNOTICE_CANCEL_OFFSET UNITYSDK_OFFSET(0x2766EA0)
#define UIPOPUP_GEMPRODUCTNOTICE_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2766F50)
#define UIPOPUP_GEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x2766F60)
#define UIPOPUP_GEMPRODUCTNOTICE___N__0_OFFSET UNITYSDK_OFFSET(0x2766FE0)
#define UIPOPUP_GEMPRODUCTNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2766FF0)
#define UIPOPUP_GEMPRODUCTNOTICE_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x2767180)
#define UIPOPUP_GEMPRODUCTNOTICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2767190)
#define UIPOPUP_GEMPRODUCTNOTICE_ONBACK_OFFSET UNITYSDK_OFFSET(0x2767560)
#define UIPOPUP_GEMPRODUCTNOTICE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2767570)
#define UIPOPUP_GEMPRODUCTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2767600)
#define UIPOPUP_GEMPRODUCTNOTICE_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2767680)

	inline static constexpr unsigned int UIPopup_GemProductNotice_TypeDefinitionIndex = 7319;

	class UIPopup_GemProductNotice : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::UnityEngine::GameObject* Type1; // 0xE0
		UIShopListElement_Gem* Type1_Element; // 0xE8
		::UnityEngine::GameObject* Type2; // 0xF0
		UIShopListElement_Gem* Type2_Element1; // 0xF8
		UIShopListElement_Gem* Type2_Element2; // 0x100
		::UnityEngine::GameObject* Type3Scroll; // 0x108
		UIScrollView* ItemListScrollView; // 0x110
		UIGrid* ItemGrid; // 0x118
		UIShopListElement_Gem* shopListElementPrefab; // 0x120
		UILabel* descriptionLabel; // 0x128
		UIGrid* buttonGrid; // 0x130
		MXButton* cancelButton; // 0x138
		UILabel* cancelLabel; // 0x140
		MXButton* okButton; // 0x148
		UILabel* okLabel; // 0x150
		UIToggle* doNotOpenTodayToggle; // 0x158
		::UnityEngine::GameObject* doNotOpenTodayOnRoot; // 0x160
		Il2CppObject* shopListElementList; // 0x168
		GemProductNoticeDelegator* productNoticeDelegator; // 0x170
		Il2CppObject* closeCallback; // 0x178

		::System::Void Initialize(GemProductNoticeDelegator* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(GemProductNoticeDelegator*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_CANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnChangeDoNotOpenTodayToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMPRODUCTNOTICE_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

	};

