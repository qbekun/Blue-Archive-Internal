#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UIUCItemButton; }
class UIItemQuickSlotBindType;
namespace MXUnderCover { class UCItemModel; }
class UCButtonVisualState;
namespace MXUnderCover { class ItemDataAsset; }

#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETCOUNTLABELS_OFFSET UNITYSDK_OFFSET(0xDC3CB0)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETAFTERUSE_OFFSET UNITYSDK_OFFSET(0xDC3A60)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETITEM_OFFSET UNITYSDK_OFFSET(0xDC3070)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_ONPRESSEND_OFFSET UNITYSDK_OFFSET(0xDC3F50)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETSTATE_OFFSET UNITYSDK_OFFSET(0xDC2A00)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC4140)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_REFRESHEQUIPBG_OFFSET UNITYSDK_OFFSET(0xDC37D0)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETBEFOREACQUIRE_OFFSET UNITYSDK_OFFSET(0xDC2B00)
#define MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON__ONPRESSEND_B__12_0_OFFSET UNITYSDK_OFFSET(0xDC4150)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCItemQuickSlotButton_TypeDefinitionIndex = 10022;

	class UIUCItemQuickSlotButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* EmptyObject; // 0xA8
		::Il2CppArray<::System::Object*>* countLabels; // 0xB0
		::MXUnderCover::UIUCItemButton* itemButton; // 0xB8
		::UnityEngine::GameObject* EquipedBg; // 0xC0
		::UnityEngine::GameObject* UnEquipedBg; // 0xC8
		UIItemQuickSlotBindType* QuickSlotBindType; // 0xD0
		::MXUnderCover::UCItemModel* curItemModel; // 0xD8

		::System::Void SetCountLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETCOUNTLABELS_OFFSET))(nullptr);
		}

		::System::Void SetAfterUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETAFTERUSE_OFFSET))(nullptr);
		}

		::System::Void SetItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_ONPRESSEND_OFFSET))(nullptr);
		}

		::System::Void SetState(UCButtonVisualState* arg)
		{
			((::System::Void(*)(UCButtonVisualState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshEquipBg(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_REFRESHEQUIPBG_OFFSET))(arg, nullptr);
		}

		::System::Void SetBeforeAcquire(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON_SETBEFOREACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnPressEnd_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMQUICKSLOTBUTTON__ONPRESSEND_B__12_0_OFFSET))(nullptr);
		}

	};
}

