#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Text; }

#define NPA_EDITOR_NXPTEXTHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D93810)
#define NPA_EDITOR_NXPTEXTHANDLER_UPDATEFONT_OFFSET UNITYSDK_OFFSET(0x9D938A0)
#define NPA_EDITOR_NXPTEXTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D93960)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPTextHandler_TypeDefinitionIndex = 26311;

	class NXPTextHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* targetTextComponent; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTEXTHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UpdateFont()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTEXTHANDLER_UPDATEFONT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTEXTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

