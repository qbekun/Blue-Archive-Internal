#pragma once
#include "unitysdk.h"

class ShiftingCraftNewItemInfoScrollController;
class MXButton;

#define UIPOPUP_CRAFTNEWITEM_INIT_OFFSET UNITYSDK_OFFSET(0x23A0DE0)
#define UIPOPUP_CRAFTNEWITEM_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23A0E00)
#define UIPOPUP_CRAFTNEWITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x23A0ED0)
#define UIPOPUP_CRAFTNEWITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A1190)
#define UIPOPUP_CRAFTNEWITEM_REFRESHSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x23A0E30)
#define UIPOPUP_CRAFTNEWITEM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x23A11A0)

	inline static constexpr unsigned int UIPopup_CraftNewItem_TypeDefinitionIndex = 5186;

	class UIPopup_CraftNewItem : public Il2CppObject
	{
	public:
		ShiftingCraftNewItemInfoScrollController* scrollController; // 0xD8
		MXButton* confirmBtn; // 0xE0
		MXButton* closeBtn; // 0xE8
		Il2CppObject* latestIdList; // 0xF0

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshScrollItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_REFRESHSCROLLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTNEWITEM_ONCLOSE_OFFSET))(nullptr);
		}

	};

