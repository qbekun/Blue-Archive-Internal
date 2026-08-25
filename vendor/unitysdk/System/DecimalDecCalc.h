#pragma once
#include "../unitysdk.h"

#define SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x9385720)
#define SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET UNITYSDK_OFFSET(0x9385760)

namespace System
{
	inline static constexpr unsigned int DecimalDecCalc_TypeDefinitionIndex = 23890;

	class DecimalDecCalc : public Il2CppObject
	{
	public:
		::System::UInt32 D32DivMod1E9(::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_D32DIVMOD1E9_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 DecDivMod1E9(::System::MutableDecimal&* arg)
		{
			return (return (::System::UInt32(*)(::System::MutableDecimal&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALDECCALC_DECDIVMOD1E9_OFFSET))(arg, nullptr);
		}

	};
}

