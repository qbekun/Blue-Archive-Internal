#pragma once
#include "unitysdk.h"

namespace FlatData { class CurrencyTypes; }
class UILabel;
class MXButton;
namespace MX::GameLogic::Parcel { class CurrencySnapshot; }

#define UITOPRESOURCEDISPLAY_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xB7A6B0)
#define UITOPRESOURCEDISPLAY_SETVALUETEXT_OFFSET UNITYSDK_OFFSET(0xB78A40)
#define UITOPRESOURCEDISPLAY_ONCLICKADD_OFFSET UNITYSDK_OFFSET(0xB7A7D0)
#define UITOPRESOURCEDISPLAY_SETVALUEEMPTY_OFFSET UNITYSDK_OFFSET(0xB789E0)
#define UITOPRESOURCEDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB7A8B0)
#define UITOPRESOURCEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7AA20)
#define UITOPRESOURCEDISPLAY_GET_AMOUNTTEXT_OFFSET UNITYSDK_OFFSET(0xB7A740)

	inline static constexpr unsigned int UITopResourceDisplay_TypeDefinitionIndex = 8496;

	class UITopResourceDisplay : public Il2CppObject
	{
	public:
		::FlatData::CurrencyTypes* currencyType; // 0x18
		UILabel* _amountText; // 0x20
		MXButton* _button; // 0x28

		MXButton* get_button()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void SetValueText(::MX::GameLogic::Parcel::CurrencySnapshot* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_SETVALUETEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAdd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_ONCLICKADD_OFFSET))(nullptr);
		}

		::System::Void SetValueEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_SETVALUEEMPTY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		UILabel* get_amountText()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOPRESOURCEDISPLAY_GET_AMOUNTTEXT_OFFSET))(nullptr);
		}

	};

