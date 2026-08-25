#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ScriptableObject; }

	inline static constexpr unsigned int SoundKey_TypeDefinitionIndex = 3787;

	class SoundKey : public Il2CppObject
	{
	public:
		::System::Single Time; // 0x10
		::UnityEngine::ScriptableObject* Event; // 0x18

	};

