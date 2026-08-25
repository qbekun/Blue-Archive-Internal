#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3Int; }

#define BRICK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F80C10)
#define BRICK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F80C50)

	inline static constexpr unsigned int Brick_TypeDefinitionIndex = 33778;

	class Brick : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3Int* position; // 0x10
		::System::Int32 subdivisionLevel; // 0x1C

		::System::Boolean Equals(Brick* arg)
		{
			return (return (::System::Boolean(*)(Brick*, ::PVOID))((::PBYTE)hIl2Cpp + BRICK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3Int* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BRICK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

