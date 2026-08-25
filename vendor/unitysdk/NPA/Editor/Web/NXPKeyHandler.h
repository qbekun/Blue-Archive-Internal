#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Web { class NXPSharedMemoryClient; }
namespace UnityEngine { class KeyCode; }

#define NPA_EDITOR_WEB_NXPKEYHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAD780)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_TOUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x9DAD920)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_SETUSECOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9DAD980)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_SENDKEYEVENT_OFFSET UNITYSDK_OFFSET(0x9DAD990)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSINPUTSTRING_OFFSET UNITYSDK_OFFSET(0x9DADBE0)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSINPUTANYKEY_OFFSET UNITYSDK_OFFSET(0x9DADE70)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_CHECKKEY_OFFSET UNITYSDK_OFFSET(0x9DADFB0)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_CHECKMODIFIER_OFFSET UNITYSDK_OFFSET(0x9DADB50)
#define NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSIME_OFFSET UNITYSDK_OFFSET(0x9DAE200)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPKeyHandler_TypeDefinitionIndex = 26394;

	class NXPKeyHandler : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keyCodes; // 0x10
		::NPA::Editor::Web::NXPSharedMemoryClient* sharedMemoryClient; // 0x18
		Il2CppObject* nextKeyRepeatTimes; // 0x20
		::System::String* oldCompositionString; // 0x28
		::System::Boolean useCompositionString; // 0x30

		::System::Void .ctor(::NPA::Editor::Web::NXPSharedMemoryClient* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPSharedMemoryClient*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* ToUnityKeyCode(::System::Char arg)
		{
			return (return (::UnityEngine::KeyCode*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_TOUNITYKEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseCompositionString(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_SETUSECOMPOSITIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SendKeyEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_SENDKEYEVENT_OFFSET))(nullptr);
		}

		Il2CppObject* ProcessInputString(Modifier* arg)
		{
			return (return (Il2CppObject*(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSINPUTSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessInputAnyKey(Modifier* arg)
		{
			return (return (::System::Int32(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSINPUTANYKEY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckKey(::UnityEngine::KeyCode* arg, Modifier* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_CHECKKEY_OFFSET))(arg, arg, nullptr);
		}

		Modifier* CheckModifier()
		{
			return (return (Modifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_CHECKMODIFIER_OFFSET))(nullptr);
		}

		::System::String* ProcessIme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPKEYHANDLER_PROCESSIME_OFFSET))(nullptr);
		}

	};
}

