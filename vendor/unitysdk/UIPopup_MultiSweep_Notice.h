#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UISprite;
class UIInput;

#define UIPOPUP_MULTISWEEP_NOTICE_SETDATA_OFFSET UNITYSDK_OFFSET(0x27113C0)
#define UIPOPUP_MULTISWEEP_NOTICE_ONCLICKDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x2711CA0)
#define UIPOPUP_MULTISWEEP_NOTICE_ONCLICKNORMALBUTTON_OFFSET UNITYSDK_OFFSET(0x2711D10)
#define UIPOPUP_MULTISWEEP_NOTICE_GETPRESETNAME_OFFSET UNITYSDK_OFFSET(0x2711B30)
#define UIPOPUP_MULTISWEEP_NOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2711F00)
#define UIPOPUP_MULTISWEEP_NOTICE_ONCHANGEINPUT_OFFSET UNITYSDK_OFFSET(0x2711F10)
#define UIPOPUP_MULTISWEEP_NOTICE_SETNORMALBUTTONSACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x27120A0)
#define UIPOPUP_MULTISWEEP_NOTICE_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2712150)
#define UIPOPUP_MULTISWEEP_NOTICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2712470)
#define UIPOPUP_MULTISWEEP_NOTICE_SETPREVINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x2711BF0)

	inline static constexpr unsigned int UIPopup_MultiSweep_Notice_TypeDefinitionIndex = 7127;

	class UIPopup_MultiSweep_Notice : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* dropDownList; // 0xD8
		UILabel* currentTabLabel; // 0xE0
		MXButton* dropDownArrowButton; // 0xE8
		UISprite* dropDownArrowSprite; // 0xF0
		UIInput* input; // 0xF8
		MXButton* confirmButton; // 0x100
		UILabel* inputLabel; // 0x108
		Il2CppObject* normalButtons; // 0x110
		Il2CppObject* pressedButtons; // 0x118
		Il2CppObject* normalButtonLabels; // 0x120
		Il2CppObject* pressedButtonLabels; // 0x128
		Il2CppObject* presetNames; // 0x130
		Il2CppObject* OnConfirm; // 0x138
		::System::Int32 tabIndex; // 0x140

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickDropDownList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_ONCLICKDROPDOWNLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickNormalButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_ONCLICKNORMALBUTTON_OFFSET))(nullptr);
		}

		::System::String* GetPresetName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_GETPRESETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnChangeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_ONCHANGEINPUT_OFFSET))(nullptr);
		}

		::System::Void SetNormalButtonsActiveCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_SETNORMALBUTTONSACTIVECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetPrevInputText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_NOTICE_SETPREVINPUTTEXT_OFFSET))(str, nullptr);
		}

	};

