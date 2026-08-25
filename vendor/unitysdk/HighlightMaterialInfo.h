#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

	inline static constexpr unsigned int HighlightMaterialInfo_TypeDefinitionIndex = 9940;

	class HighlightMaterialInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Color* CodeAddColor; // 0x10
		::UnityEngine::Color* CodeMultiplyColor; // 0x20
		::UnityEngine::Color* CodeAddRimColor; // 0x30

	};

