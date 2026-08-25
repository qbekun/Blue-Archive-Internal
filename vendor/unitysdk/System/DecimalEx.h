#pragma once
#include "../unitysdk.h"

#define SYSTEM_DECIMALEX_DECDIVMOD1E9_OFFSET UNITYSDK_OFFSET(0xA4AD440)
#define SYSTEM_DECIMALEX_HIGH_OFFSET UNITYSDK_OFFSET(0xA4AD530)
#define SYSTEM_DECIMALEX_ASMUTABLE_OFFSET UNITYSDK_OFFSET(0xA4AD4B0)
#define SYSTEM_DECIMALEX_MID_OFFSET UNITYSDK_OFFSET(0xA4AD540)
#define SYSTEM_DECIMALEX_LOW_OFFSET UNITYSDK_OFFSET(0xA4AD550)
#define SYSTEM_DECIMALEX_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA4AD560)
#define SYSTEM_DECIMALEX_SCALE_OFFSET UNITYSDK_OFFSET(0xA4AD570)

namespace System
{
	inline static constexpr unsigned int DecimalEx_TypeDefinitionIndex = 34649;

	class DecimalEx : public Il2CppObject
	{
	public:
		::System::Int32 ScaleShift; // 0x0

		::System::UInt32 DecDivMod1E9(::System::Decimal&* arg)
		{
			return (return (::System::UInt32(*)(::System::Decimal&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_DECDIVMOD1E9_OFFSET))(arg, nullptr);
		}

		::System::UInt32 High(::System::Decimal* arg)
		{
			return (return (::System::UInt32(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_HIGH_OFFSET))(arg, nullptr);
		}

		DecCalc&* AsMutable(::System::Decimal&* arg)
		{
			return (return (DecCalc&*(*)(::System::Decimal&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_ASMUTABLE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 Mid(::System::Decimal* arg)
		{
			return (return (::System::UInt32(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_MID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 Low(::System::Decimal* arg)
		{
			return (return (::System::UInt32(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_LOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative(::System::Decimal* arg)
		{
			return (return (::System::Boolean(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_ISNEGATIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Scale(::System::Decimal* arg)
		{
			return (return (::System::Int32(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMALEX_SCALE_OFFSET))(arg, nullptr);
		}

	};
}

