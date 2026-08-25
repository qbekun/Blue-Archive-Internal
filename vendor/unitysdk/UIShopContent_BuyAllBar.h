#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }

#define UISHOPCONTENT_BUYALLBAR_ADD_BUYALLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAACAF0)
#define UISHOPCONTENT_BUYALLBAR_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0A20)
#define UISHOPCONTENT_BUYALLBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB0A40)
#define UISHOPCONTENT_BUYALLBAR_ADD_CANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAACB90)
#define UISHOPCONTENT_BUYALLBAR_SETSELECTEDELEMENTCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0xAAEEB0)
#define UISHOPCONTENT_BUYALLBAR_REMOVE_CANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAB0A50)
#define UISHOPCONTENT_BUYALLBAR_REMOVE_BUYALLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xAB0AF0)
#define UISHOPCONTENT_BUYALLBAR_SETBUYALLBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xAAEE60)
#define UISHOPCONTENT_BUYALLBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB0B90)
#define UISHOPCONTENT_BUYALLBAR_ONCLICKBUYALLBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0DA0)

	inline static constexpr unsigned int UIShopContent_BuyAllBar_TypeDefinitionIndex = 7985;

	class UIShopContent_BuyAllBar : public Il2CppObject
	{
	public:
		UILabel* selectedElementCountLabel; // 0x18
		MXButton* buyAllButton; // 0x20
		::UnityEngine::GameObject* buyAllButtonDisableRoot; // 0x28
		MXButton* cancelButton; // 0x30
		::System::Action* BuyAllButtonClicked; // 0x38
		::System::Action* CancelButtonClicked; // 0x40

		::System::Void add_BuyAllButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_ADD_BUYALLBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_CancelButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_ADD_CANCELBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectedElementCountLabel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_SETSELECTEDELEMENTCOUNTLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CancelButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_REMOVE_CANCELBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BuyAllButtonClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_REMOVE_BUYALLBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetBuyAllButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_SETBUYALLBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickBuyAllButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPCONTENT_BUYALLBAR_ONCLICKBUYALLBUTTON_OFFSET))(nullptr);
		}

	};

