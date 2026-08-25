#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace NPA::Editor::Auth { class NexonLoginDialog; }

#define NPA_EDITOR_AUTH_NEXONLOGINDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CAEB70)
#define NPA_EDITOR_AUTH_NEXONLOGINDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9CAECA0)
#define NPA_EDITOR_AUTH_NEXONLOGINDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CAF4E0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NexonLoginDialog_TypeDefinitionIndex = 27174;

	class NexonLoginDialog : public Il2CppObject
	{
	public:
		::System::String* DialogTag; // 0x0
		::System::String* _activityID; // 0x18
		::UnityEngine::GameObject* nexonLoginPrefab; // 0x0
		::UnityEngine::Events::UnityAction* onCancelListener; // 0x20
		Il2CppObject* onResultListener; // 0x28
		::UnityEngine::UI::Image* nexonCI; // 0x30
		::UnityEngine::UI::Image* closeImage; // 0x38
		::UnityEngine::UI::Button* CloseButton; // 0x40
		::UnityEngine::UI::Button* LoginButton; // 0x48
		::UnityEngine::UI::InputField* idField; // 0x50
		::UnityEngine::UI::InputField* pwField; // 0x58
		::UnityEngine::UI::Text* errorTextLabel; // 0x60
		::UnityEngine::Events::UnityAction* loginButtonAction; // 0x68

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NEXONLOGINDIALOG_UPDATE_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NexonLoginDialog* Show(::UnityEngine::Events::UnityAction* arg, Il2CppObject* arg)
		{
			return (return (::NPA::Editor::Auth::NexonLoginDialog*(*)(::UnityEngine::Events::UnityAction*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NEXONLOGINDIALOG_SHOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NEXONLOGINDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

