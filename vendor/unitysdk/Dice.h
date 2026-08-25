#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define DICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x208BF40)
#define DICE_SETDICE_OFFSET UNITYSDK_OFFSET(0x208BF50)

	inline static constexpr unsigned int Dice_TypeDefinitionIndex = 3467;

	class Dice : public Il2CppObject
	{
	public:
		::System::Int32 DiceCount; // 0x10
		::UnityEngine::GameObject* RootObject; // 0x18
		Il2CppObject* dies; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDice(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICE_SETDICE_OFFSET))(arg, nullptr);
		}

	};

