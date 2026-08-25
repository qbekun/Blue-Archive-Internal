#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;

#define UIPOPUP_GAMERESET_AWAKE_OFFSET UNITYSDK_OFFSET(0xCCFC30)
#define UIPOPUP_GAMERESET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xCCFFF0)
#define UIPOPUP_GAMERESET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCD0000)
#define UIPOPUP_GAMERESET_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCD0120)
#define UIPOPUP_GAMERESET_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0xCCD860)
#define UIPOPUP_GAMERESET_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD01A0)
#define UIPOPUP_GAMERESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD02B0)
#define UIPOPUP_GAMERESET_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xCD02C0)
#define UIPOPUP_GAMERESET_ONCHANGEINPUT_OFFSET UNITYSDK_OFFSET(0xCD04B0)

	inline static constexpr unsigned int UIPopup_GameReset_TypeDefinitionIndex = 9143;

	class UIPopup_GameReset : public Il2CppObject
	{
	public:
		UIInput* inputObject; // 0xD8
		MXButton* closeButton; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* closeButtonX; // 0xF0
		UILabel* messageLabel; // 0xF8
		UILabel* titleLabel; // 0x100
		UILabel* InputPlaceholder; // 0x108
		::System::String* confirmText; // 0x110
		::System::Action* okAction; // 0x118
		Il2CppObject* okFailAction; // 0x120
		::System::Action* cancelAction; // 0x128

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Action* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_INITIALIZE_OFFSET))(str, str2, str3, arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeWithKey(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Action* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_INITIALIZEWITHKEY_OFFSET))(str, str2, str3, arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnChangeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GAMERESET_ONCHANGEINPUT_OFFSET))(nullptr);
		}

	};

