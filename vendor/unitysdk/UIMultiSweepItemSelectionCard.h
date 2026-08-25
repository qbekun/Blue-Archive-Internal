#pragma once
#include "unitysdk.h"

class UIParcelCard;
class MXButton;
class SelectedMultiSweepItemInfo;

#define UIMULTISWEEPITEMSELECTIONCARD_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x270BEC0)
#define UIMULTISWEEPITEMSELECTIONCARD_ONSELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x270BEF0)
#define UIMULTISWEEPITEMSELECTIONCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x270BA90)
#define UIMULTISWEEPITEMSELECTIONCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x270BF20)
#define UIMULTISWEEPITEMSELECTIONCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x270C040)

	inline static constexpr unsigned int UIMultiSweepItemSelectionCard_TypeDefinitionIndex = 7120;

	class UIMultiSweepItemSelectionCard : public Il2CppObject
	{
	public:
		UIParcelCard* itemCard; // 0x18
		MXButton* selectButton; // 0x20
		SelectedMultiSweepItemInfo* itemParcelInfo; // 0x28

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPITEMSELECTIONCARD_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void OnSelectedAsIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPITEMSELECTIONCARD_ONSELECTEDASINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(SelectedMultiSweepItemInfo* arg)
		{
			((::System::Void(*)(SelectedMultiSweepItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPITEMSELECTIONCARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPITEMSELECTIONCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPITEMSELECTIONCARD_.CTOR_OFFSET))(nullptr);
		}

	};

