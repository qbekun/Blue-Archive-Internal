#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define UIPCPOPUP_SYSTEM_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x21259F0)
#define UIPCPOPUP_SYSTEM_GET_ISQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x2125A50)
#define UIPCPOPUP_SYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x2125A60)
#define UIPCPOPUP_SYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2125DD0)
#define UIPCPOPUP_SYSTEM_INITIALIZEQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x2126030)
#define UIPCPOPUP_SYSTEM_RESETPOPUP_OFFSET UNITYSDK_OFFSET(0x2125FE0)
#define UIPCPOPUP_SYSTEM_SET_ISQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x21265F0)
#define UIPCPOPUP_SYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x2126600)
#define UIPCPOPUP_SYSTEM_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2126750)
#define UIPCPOPUP_SYSTEM_CODELAYCLOSE_OFFSET UNITYSDK_OFFSET(0x21267B0)
#define UIPCPOPUP_SYSTEM_ONOPEN_OFFSET UNITYSDK_OFFSET(0x2126840)
#define UIPCPOPUP_SYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2126910)
#define UIPCPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET UNITYSDK_OFFSET(0x21261D0)
#define UIPCPOPUP_SYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2126930)
#define UIPCPOPUP_SYSTEM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x2126940)

	inline static constexpr unsigned int UIPCPopup_System_TypeDefinitionIndex = 3909;

	class UIPCPopup_System : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* titleText; // 0x40
		::UnityEngine::UI::Text* contentText; // 0x48
		::UnityEngine::GameObject* oneButtonRoot; // 0x50
		::UnityEngine::UI::Button* confirmButton; // 0x58
		::UnityEngine::UI::Text* confirmButtonText; // 0x60
		::UnityEngine::GameObject* twoButtonRoot; // 0x68
		::UnityEngine::UI::Button* okButton; // 0x70
		::UnityEngine::UI::Text* okButtonText; // 0x78
		::UnityEngine::UI::Button* cancelButton; // 0x80
		::UnityEngine::UI::Text* cancelButtonText; // 0x88
		::UnityEngine::UI::Button* xButton; // 0x90
		Il2CppObject* iconList; // 0x98
		::System::Action* _onOk; // 0xA0
		::System::Action* _onCancel; // 0xA8
		::System::Boolean _isClosing; // 0xB0
		::System::Boolean _IsQuitPopup_k__BackingField; // 0xB1

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsQuitPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_GET_ISQUITPOPUP_OFFSET))(nullptr);
		}

		::System::Void BindEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_BINDEVENTS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_INITIALIZE_OFFSET))(str, str2, str3, arg, nullptr);
		}

		::System::Void InitializeQuitPopup(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_INITIALIZEQUITPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_RESETPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_IsQuitPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_SET_ISQUITPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDelayClose()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_CODELAYCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_ONOPEN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitializeOkCancel(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET))(str, str2, str3, str4, arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPCPOPUP_SYSTEM_ONCLOSE_OFFSET))(nullptr);
		}

	};

