#pragma once
#include "unitysdk.h"

#define TBGDICEFXVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x208BA50)
#define TBGDICEFXVISUAL_SETDICE_OFFSET UNITYSDK_OFFSET(0x208BA60)

	inline static constexpr unsigned int TBGDiceFxVisual_TypeDefinitionIndex = 3469;

	class TBGDiceFxVisual : public Il2CppObject
	{
	public:
		Il2CppObject* DiceSets; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGDICEFXVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDice(::System::Int32 arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGDICEFXVISUAL_SETDICE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

