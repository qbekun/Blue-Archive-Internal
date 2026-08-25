#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class KeyCode; }

#define NPA_EDITOR_WEB_NXPMACOSKEY_FROMUNITYKEYCODE_OFFSET UNITYSDK_OFFSET(0x9DAA170)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPMacOSKey_TypeDefinitionIndex = 26384;

	class NXPMacOSKey : public Il2CppObject
	{
	public:
		Key* FromUnityKeyCode(::UnityEngine::KeyCode* arg)
		{
			return (return (Key*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMACOSKEY_FROMUNITYKEYCODE_OFFSET))(arg, nullptr);
		}

	};
}

