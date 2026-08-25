#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

	inline static constexpr unsigned int HightlightMaterialInfo_TypeDefinitionIndex = 9710;

	class HightlightMaterialInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Material* Material; // 0x10
		Il2CppObject* CodeAddColor; // 0x18
		Il2CppObject* CodeMultiplyColor; // 0x2C
		Il2CppObject* CodeAddRimColor; // 0x40

	};

