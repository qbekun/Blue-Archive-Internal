#pragma once
#include "unitysdk.h"

#define DECCALC_DECDIVMOD1E9_OFFSET UNITYSDK_OFFSET(0xA4AD4C0)

	inline static constexpr unsigned int DecCalc_TypeDefinitionIndex = 34648;

	class DecCalc : public Il2CppObject
	{
	public:
		::System::UInt32 TenToPowerNine; // 0x0
		::System::UInt32 uflags; // 0x10
		::System::UInt32 uhi; // 0x14
		::System::UInt32 ulo; // 0x18
		::System::UInt32 umid; // 0x1C
		::System::UInt64 ulomidLE; // 0x18

		::System::UInt32 DecDivMod1E9(DecCalc&* arg)
		{
			return (return (::System::UInt32(*)(DecCalc&*, ::PVOID))((::PBYTE)hIl2Cpp + DECCALC_DECDIVMOD1E9_OFFSET))(arg, nullptr);
		}

	};

