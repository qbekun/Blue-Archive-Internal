#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UIUCHUDButton; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace MXUnderCover { class UIUCItemQuickSlotButton; }
namespace MXUnderCover { class ItemDataAsset; }
namespace MXUnderCover { class UCItemModel; }
namespace MXUnderCover { class UIUCMainButtonController; }
namespace MXUnderCover { class SwitchedPlayerMessage; }
namespace MXUnderCover { class LoadItemMessage; }
namespace MXUnderCover { class AcquireItemMessage; }
namespace MXUnderCover { class StartLoadInvenMessage; }

#define MXUNDERCOVER_UIUCITEMBUTTON__SETPLAYERBUTTONSENABLEONQUICKSLOT_B__17_1_OFFSET UNITYSDK_OFFSET(0xDC1B90)
#define MXUNDERCOVER_UIUCITEMBUTTON__INIT_B__7_0_OFFSET UNITYSDK_OFFSET(0xDC1BD0)
#define MXUNDERCOVER_UIUCITEMBUTTON__ONSWITCHPLAYER_B__12_0_OFFSET UNITYSDK_OFFSET(0xDC1C20)
#define MXUNDERCOVER_UIUCITEMBUTTON_OPENQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC1C70)
#define MXUNDERCOVER_UIUCITEMBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC1D70)
#define MXUNDERCOVER_UIUCITEMBUTTON_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xDC1E00)
#define MXUNDERCOVER_UIUCITEMBUTTON_BINDITEMBYQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC1FE0)
#define MXUNDERCOVER_UIUCITEMBUTTON__CLOSEQUICKSLOT_G__ENDANI|16_0_OFFSET UNITYSDK_OFFSET(0xDC2150)
#define MXUNDERCOVER_UIUCITEMBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0xDC2490)
#define MXUNDERCOVER_UIUCITEMBUTTON_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC2B60)
#define MXUNDERCOVER_UIUCITEMBUTTON_SETPLAYERBUTTONSENABLEONQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC21A0)
#define MXUNDERCOVER_UIUCITEMBUTTON_BINDITEMTOQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC2FB0)
#define MXUNDERCOVER_UIUCITEMBUTTON_HANDLELOADITEM_OFFSET UNITYSDK_OFFSET(0xDC3120)
#define MXUNDERCOVER_UIUCITEMBUTTON__OPENQUICKSLOT_G__ENDANI|15_1_OFFSET UNITYSDK_OFFSET(0xDC3180)
#define MXUNDERCOVER_UIUCITEMBUTTON_CLOSEQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC31A0)
#define MXUNDERCOVER_UIUCITEMBUTTON_HANDLEACQUIREITEM_OFFSET UNITYSDK_OFFSET(0xDC32F0)
#define MXUNDERCOVER_UIUCITEMBUTTON_HANDLELOADINVEN_OFFSET UNITYSDK_OFFSET(0xDC3520)
#define MXUNDERCOVER_UIUCITEMBUTTON__OPENQUICKSLOT_B__15_0_OFFSET UNITYSDK_OFFSET(0xDC35C0)
#define MXUNDERCOVER_UIUCITEMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC3830)
#define MXUNDERCOVER_UIUCITEMBUTTON_SETBUTTONAFTERUSE_OFFSET UNITYSDK_OFFSET(0xDC3960)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCItemButton_TypeDefinitionIndex = 10021;

	class UIUCItemButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* itemQuickSlotObject; // 0xF8
		::MXUnderCover::UIUCHUDButton* itemQuickSlotButton; // 0x100
		::UnityEngine::Animation* QuickSlotAni; // 0x108
		::Il2CppArray<::System::Object*>* QuickSlotButtons; // 0x110
		::UnityEngine::Coroutine* quickSlotOpenAni; // 0x118
		::UnityEngine::Coroutine* quickSlotCloseAni; // 0x120

		::System::Boolean _SetPlayerButtonsEnableOnQuickSlot_b__17_1(::MXUnderCover::UIUCItemQuickSlotButton* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UIUCItemQuickSlotButton*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__SETPLAYERBUTTONSENABLEONQUICKSLOT_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Init_b__7_0(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__INIT_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnSwitchPlayer_b__12_0(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__ONSWITCHPLAYER_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenQuickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_OPENQUICKSLOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void BindItemByQuickSlot(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_BINDITEMBYQUICKSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void _CloseQuickSlot_g__EndAni|16_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__CLOSEQUICKSLOT_G__ENDANI|16_0_OFFSET))(nullptr);
		}

		::System::Void Init(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayerButtonsEnableOnQuickSlot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_SETPLAYERBUTTONSENABLEONQUICKSLOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean BindItemToQuickSlot(::MXUnderCover::UCItemModel* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_BINDITEMTOQUICKSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleLoadItem(::MXUnderCover::LoadItemMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::LoadItemMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_HANDLELOADITEM_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenQuickSlot_g__EndAni|15_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__OPENQUICKSLOT_G__ENDANI|15_1_OFFSET))(nullptr);
		}

		::System::Void CloseQuickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_CLOSEQUICKSLOT_OFFSET))(nullptr);
		}

		::System::Void HandleAcquireItem(::MXUnderCover::AcquireItemMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::AcquireItemMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_HANDLEACQUIREITEM_OFFSET))(arg, nullptr);
		}

		::System::Void HandleLoadInven(::MXUnderCover::StartLoadInvenMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::StartLoadInvenMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_HANDLELOADINVEN_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenQuickSlot_b__15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON__OPENQUICKSLOT_B__15_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetButtonAfterUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCITEMBUTTON_SETBUTTONAFTERUSE_OFFSET))(nullptr);
		}

	};
}

