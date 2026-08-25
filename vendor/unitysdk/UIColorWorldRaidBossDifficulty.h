#pragma once
#include "unitysdk.h"

namespace FlatData { class WorldRaidDifficulty; }
namespace UnityEngine { class Color; }

#define UICOLORWORLDRAIDBOSSDIFFICULTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343C10)

	inline static constexpr unsigned int UIColorWorldRaidBossDifficulty_TypeDefinitionIndex = 4990;

	class UIColorWorldRaidBossDifficulty : public Il2CppObject
	{
	public:
		::FlatData::WorldRaidDifficulty* Difficulty; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORWORLDRAIDBOSSDIFFICULTY_.CTOR_OFFSET))(nullptr);
		}

	};

