#pragma once
#include "unitysdk.h"

namespace MX::Core::Math { class IRandomService; }

#define <>C__DISPLAYCLASS13_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS13_0`1__SELECTRANDOM_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass13_0`1_TypeDefinitionIndex = 12766;

	class <>c__DisplayClass13_0`1 : public Il2CppObject
	{
	public:
		::MX::Core::Math::IRandomService* random; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _SelectRandom_b__0(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_0`1__SELECTRANDOM_B__0_OFFSET))(arg, nullptr);
		}

	};

