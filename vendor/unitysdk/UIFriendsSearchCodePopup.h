#pragma once
#include "unitysdk.h"

class MXButton;
class UIInput;
namespace UnityEngine { class GameObject; }

#define UIFRIENDSSEARCHCODEPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x25745A0)
#define UIFRIENDSSEARCHCODEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x25745D0)
#define UIFRIENDSSEARCHCODEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x25745E0)
#define UIFRIENDSSEARCHCODEPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x25748C0)
#define UIFRIENDSSEARCHCODEPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2570330)
#define UIFRIENDSSEARCHCODEPOPUP_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0x2574920)

	inline static constexpr unsigned int UIFriendsSearchCodePopup_TypeDefinitionIndex = 6164;

	class UIFriendsSearchCodePopup : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0x18
		MXButton* cancelButton; // 0x20
		UIInput* codeInput; // 0x28
		::UnityEngine::GameObject* inputPlaceHolder; // 0x30
		Il2CppObject* onConfirmAction; // 0x38

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_INITIALIZE_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnInputChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHCODEPOPUP_ONINPUTCHANGED_OFFSET))(nullptr);
		}

	};

