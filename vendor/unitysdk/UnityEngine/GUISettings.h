#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_GUISETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27EBE0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISettings_TypeDefinitionIndex = 36543;

	class GUISettings : public Il2CppObject
	{
	public:
		::System::Boolean m_DoubleClickSelectsWord; // 0x10
		::System::Boolean m_TripleClickSelectsLine; // 0x11
		::UnityEngine::Color* m_CursorColor; // 0x14
		::System::Single m_CursorFlashSpeed; // 0x24
		::UnityEngine::Color* m_SelectionColor; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

