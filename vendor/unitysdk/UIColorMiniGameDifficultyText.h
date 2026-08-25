#pragma once
#include "unitysdk.h"

namespace FlatData { class Difficulty; }
namespace UnityEngine { class Color; }

#define UICOLORMINIGAMEDIFFICULTYTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343BF0)

	inline static constexpr unsigned int UIColorMiniGameDifficultyText_TypeDefinitionIndex = 4988;

	class UIColorMiniGameDifficultyText : public Il2CppObject
	{
	public:
		::FlatData::Difficulty* difficulty; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORMINIGAMEDIFFICULTYTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

