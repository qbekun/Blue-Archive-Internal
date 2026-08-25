#pragma once
#include "unitysdk.h"

#define DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CE80)
#define DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CE90)
#define DOUBLEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CEB0)

	inline static constexpr unsigned int DoublePoint_TypeDefinitionIndex = 34372;

	class DoublePoint : public Il2CppObject
	{
	public:
		::System::Double X; // 0x10
		::System::Double Y; // 0x18

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(DoublePoint* arg)
		{
			((::System::Void(*)(DoublePoint*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(IntPoint* arg)
		{
			((::System::Void(*)(IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

