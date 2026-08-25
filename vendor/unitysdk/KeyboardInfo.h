#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector2; }

#define KEYBOARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2191C60)

	inline static constexpr unsigned int KeyboardInfo_TypeDefinitionIndex = 4102;

	class KeyboardInfo : public Il2CppObject
	{
	public:
		::UnityEngine::KeyCode* KeyCode; // 0x10
		::UnityEngine::Vector2* LocalPos; // 0x14
		::UnityEngine::Vector2* LocalScale; // 0x1C
		::System::Boolean IsDisplay; // 0x24
		::System::String* BG; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYBOARDINFO_.CTOR_OFFSET))(nullptr);
		}

	};

