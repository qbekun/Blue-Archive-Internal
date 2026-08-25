#pragma once
#include "unitysdk.h"

#define TBGDICEVISUAL_GET_DICECOUNT_OFFSET UNITYSDK_OFFSET(0x208BE60)
#define TBGDICEVISUAL_SETDICE_OFFSET UNITYSDK_OFFSET(0x208BEA0)
#define TBGDICEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x208BFF0)

	inline static constexpr unsigned int TBGDiceVisual_TypeDefinitionIndex = 3470;

	class TBGDiceVisual : public Il2CppObject
	{
	public:
		Il2CppObject* dies; // 0x18

		::System::Int32 get_DiceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGDICEVISUAL_GET_DICECOUNT_OFFSET))(nullptr);
		}

		::System::Void SetDice(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGDICEVISUAL_SETDICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGDICEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

