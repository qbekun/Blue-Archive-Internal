#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define DICERACECATMULLROMPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D3AB0)

	inline static constexpr unsigned int DiceRaceCatmullRomPoint_TypeDefinitionIndex = 5313;

	class DiceRaceCatmullRomPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10

		::System::Void .ctor(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACECATMULLROMPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

