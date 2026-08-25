#pragma once
#include "unitysdk.h"

#define DICERACEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3610)
#define DICERACEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C3620)
#define DICERACEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C3630)

	inline static constexpr unsigned int DiceRaceUIOpener_TypeDefinitionIndex = 6957;

	class DiceRaceUIOpener : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

