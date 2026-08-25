#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define MENUITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A4EC0)

	inline static constexpr unsigned int MenuItem_TypeDefinitionIndex = 30325;

	class MenuItem : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::UIElements::VisualElement* element; // 0x18
		::System::Action* action; // 0x20
		Il2CppObject* actionUserData; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENUITEM_.CTOR_OFFSET))(nullptr);
		}

	};

