#pragma once
#include "unitysdk.h"

namespace FlatData { class ArmorType; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int ArmorIconProperty_TypeDefinitionIndex = 8117;

	class ArmorIconProperty : public Il2CppObject
	{
	public:
		::FlatData::ArmorType* ArmorType; // 0x10
		::UnityEngine::Color* Color; // 0x14

	};

