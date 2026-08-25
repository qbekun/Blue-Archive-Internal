#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

namespace UnityEngine
{
	inline static constexpr unsigned int UICharInfo_TypeDefinitionIndex = 37670;

	class UICharInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* cursorPos; // 0x10
		::System::Single charWidth; // 0x18

	};
}

