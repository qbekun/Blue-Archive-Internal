#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class KeyCode; }

#define NPA_EDITOR_WEB_NXPWINDOWSKEY_FROMUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x9DB8670)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWindowsKey_TypeDefinitionIndex = 26410;

	class NXPWindowsKey : public Il2CppObject
	{
	public:
		Key* FromUnityKeyCode(::UnityEngine::KeyCode* arg)
		{
			return (return (Key*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWINDOWSKEY_FROMUNITYKEYCODE_OFFSET))(arg, nullptr);
		}

	};
}

