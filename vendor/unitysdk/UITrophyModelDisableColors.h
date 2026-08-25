#pragma once
#include "unitysdk.h"

namespace FlatData { class Rarity; }
namespace UnityEngine { class Color; }

#define UITROPHYMODELDISABLECOLORS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343C00)

	inline static constexpr unsigned int UITrophyModelDisableColors_TypeDefinitionIndex = 4989;

	class UITrophyModelDisableColors : public Il2CppObject
	{
	public:
		::FlatData::Rarity* Rarity; // 0x10
		::UnityEngine::Color* Color; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYMODELDISABLECOLORS_.CTOR_OFFSET))(nullptr);
		}

	};

