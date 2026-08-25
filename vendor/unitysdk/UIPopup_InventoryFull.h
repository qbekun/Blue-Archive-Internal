#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class InventoryFullScrollController;

#define UIPOPUP_INVENTORYFULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2702100)
#define UIPOPUP_INVENTORYFULL__AWAKE_B__7_0_OFFSET UNITYSDK_OFFSET(0x2702110)
#define UIPOPUP_INVENTORYFULL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2702130)
#define UIPOPUP_INVENTORYFULL_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2702410)
#define UIPOPUP_INVENTORYFULL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2702480)
#define UIPOPUP_INVENTORYFULL_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x27026A0)

	inline static constexpr unsigned int UIPopup_InventoryFull_TypeDefinitionIndex = 7083;

	class UIPopup_InventoryFull : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* confirmButton; // 0xE0
		UILabel* messageLabel; // 0xE8
		InventoryFullScrollController* _scrollController; // 0xF0
		::System::Action* onClickConfirm; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL__AWAKE_B__7_0_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL_INITIALIZE_OFFSET))(arg, arg2, str, nullptr);
		}

		InventoryFullScrollController* get_scrollController()
		{
			return ((InventoryFullScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVENTORYFULL_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};

