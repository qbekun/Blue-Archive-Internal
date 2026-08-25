#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIWidget;
class MissionProgressContent;
class UIPopup_Tooltip;
class MissionContentBase;

#define UIMISSIONRECEIVEBUTTON_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0x269A260)
#define UIMISSIONRECEIVEBUTTON_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0x269A450)
#define UIMISSIONRECEIVEBUTTON__ONCLICKSHORTCUT_B__9_1_OFFSET UNITYSDK_OFFSET(0x269A470)
#define UIMISSIONRECEIVEBUTTON__ONCLICKSHORTCUT_B__9_0_OFFSET UNITYSDK_OFFSET(0x269A4A0)
#define UIMISSIONRECEIVEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x269A5B0)
#define UIMISSIONRECEIVEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x269A5C0)
#define UIMISSIONRECEIVEBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0x269A840)

	inline static constexpr unsigned int UIMissionReceiveButton_TypeDefinitionIndex = 6818;

	class UIMissionReceiveButton : public Il2CppObject
	{
	public:
		MXButton* receiveButton; // 0x18
		MXButton* shortcutButton; // 0x20
		::UnityEngine::GameObject* disableObject; // 0x28
		UILabel* disabledButtonLabel; // 0x30
		UIWidget* layout; // 0x38
		MissionProgressContent* progressContent; // 0x40

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void OnClickReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON_ONCLICKRECEIVE_OFFSET))(nullptr);
		}

		::System::Void _OnClickShortcut_b__9_1(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON__ONCLICKSHORTCUT_B__9_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickShortcut_b__9_0(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON__ONCLICKSHORTCUT_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Refresh(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONRECEIVEBUTTON_REFRESH_OFFSET))(arg, nullptr);
		}

	};

