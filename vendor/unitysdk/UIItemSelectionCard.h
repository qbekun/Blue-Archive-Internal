#pragma once
#include "unitysdk.h"

class UIParcelCard;
class MXButton;
class UIWidget;
namespace UnityEngine { class GameObject; }
class SelectedItemInfo;

#define UIITEMSELECTIONCARD_SETPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x272EC80)
#define UIITEMSELECTIONCARD_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x272EE70)
#define UIITEMSELECTIONCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x272EEA0)
#define UIITEMSELECTIONCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x272EFC0)
#define UIITEMSELECTIONCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x272EB00)
#define UIITEMSELECTIONCARD__SETDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x272EFF0)
#define UIITEMSELECTIONCARD_HANDLESELECTCARD_OFFSET UNITYSDK_OFFSET(0x272EFD0)

	inline static constexpr unsigned int UIItemSelectionCard_TypeDefinitionIndex = 7190;

	class UIItemSelectionCard : public Il2CppObject
	{
	public:
		UIParcelCard* itemCard; // 0x18
		MXButton* selectButton; // 0x20
		UIWidget* nonEquipmentCardWidget; // 0x28
		::UnityEngine::GameObject* nonEquipmentCardDisableDim; // 0x30
		SelectedItemInfo* itemPickParcelInfo; // 0x38

		::System::Void SetProductSelect(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_SETPRODUCTSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__6_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD__SETDATA_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void HandleSelectCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSELECTIONCARD_HANDLESELECTCARD_OFFSET))(arg, nullptr);
		}

	};

