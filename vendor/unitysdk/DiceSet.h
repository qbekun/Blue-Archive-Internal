#pragma once
#include "unitysdk.h"

#define DICESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x208BE50)
#define DICESET_SETDICE_OFFSET UNITYSDK_OFFSET(0x208BC40)

	inline static constexpr unsigned int DiceSet_TypeDefinitionIndex = 3468;

	class DiceSet : public Il2CppObject
	{
	public:
		Il2CppObject* dies; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDice(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICESET_SETDICE_OFFSET))(arg, arg2, nullptr);
		}

	};

