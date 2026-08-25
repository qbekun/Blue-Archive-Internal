#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;
namespace UnityEngine { class Vector3; }

#define CHARACTEROFFSETPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x259DCC0)

	inline static constexpr unsigned int CharacterOffsetPair_TypeDefinitionIndex = 300;

	class CharacterOffsetPair : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCharacter* character; // 0x10
		::UnityEngine::Vector3* offset; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROFFSETPAIR_.CTOR_OFFSET))(nullptr);
		}

	};

