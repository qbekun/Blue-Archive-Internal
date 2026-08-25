#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class KeyCode; }

#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA9120)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_TOUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x9DA95C0)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_SETUSECOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9DA9620)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_SENDKEYEVENT_OFFSET UNITYSDK_OFFSET(0x9DA9630)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSINPUTSTRING_OFFSET UNITYSDK_OFFSET(0x9DA98F0)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSINPUTANYKEY_OFFSET UNITYSDK_OFFSET(0x9DA9CF0)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_CHECKKEY_OFFSET UNITYSDK_OFFSET(0x9DA9E50)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_CHECKMODIFIER_OFFSET UNITYSDK_OFFSET(0x9DA9820)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSIME_OFFSET UNITYSDK_OFFSET(0x9DAA040)
#define NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_GETCHARACTERFROMKEYCODE_OFFSET UNITYSDK_OFFSET(0x9DAA300)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int GameScaleWebKeyHandlerOSX_TypeDefinitionIndex = 26379;

	class GameScaleWebKeyHandlerOSX : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keyCodes; // 0x10
		Il2CppObject* nextKeyRepeatTimes; // 0x18
		::System::String* oldCompositionString; // 0x20
		::System::Boolean useCompositionString; // 0x28
		Il2CppObject* excludedCodes; // 0x30
		Il2CppObject* keyEvent; // 0x38

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* ToUnityKeyCode(::System::Char arg)
		{
			return (return (::UnityEngine::KeyCode*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_TOUNITYKEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseCompositionString(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_SETUSECOMPOSITIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SendKeyEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_SENDKEYEVENT_OFFSET))(nullptr);
		}

		Il2CppObject* ProcessInputString(Modifier* arg)
		{
			return (return (Il2CppObject*(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSINPUTSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessInputAnyKey(Modifier* arg)
		{
			return (return (::System::Int32(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSINPUTANYKEY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckKey(::UnityEngine::KeyCode* arg, Modifier* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_CHECKKEY_OFFSET))(arg, arg, nullptr);
		}

		Modifier* CheckModifier()
		{
			return (return (Modifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_CHECKMODIFIER_OFFSET))(nullptr);
		}

		::System::String* ProcessIme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_PROCESSIME_OFFSET))(nullptr);
		}

		::System::Int32 GetCharacterFromKeyCode(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBKEYHANDLEROSX_GETCHARACTERFROMKEYCODE_OFFSET))(arg, nullptr);
		}

	};
}

