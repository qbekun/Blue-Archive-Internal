#pragma once
#include "unitysdk.h"

namespace FlatData { class Difficulty; }
namespace UnityEngine { class Color; }

#define UICOLORRAIDBOSSDIFFICULTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BC0)

	inline static constexpr unsigned int UIColorRaidBossDifficulty_TypeDefinitionIndex = 4985;

	class UIColorRaidBossDifficulty : public Il2CppObject
	{
	public:
		::FlatData::Difficulty* Difficulty; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORRAIDBOSSDIFFICULTY_.CTOR_OFFSET))(nullptr);
		}

	};

