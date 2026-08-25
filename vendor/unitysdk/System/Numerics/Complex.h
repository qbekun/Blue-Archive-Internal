#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_COMPLEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9836590)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x98365A0)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x9836660)
#define SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98366A0)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98367C0)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9836880)
#define SYSTEM_NUMERICS_COMPLEX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9836900)

namespace System::Numerics
{
	inline static constexpr unsigned int Complex_TypeDefinitionIndex = 37097;

	class Complex : public Il2CppObject
	{
	public:
		::System::Numerics::Complex* Zero; // 0x0
		::System::Numerics::Complex* One; // 0x10
		::System::Numerics::Complex* ImaginaryOne; // 0x20
		::System::Double s_sqrtRescaleThreshold; // 0x30
		::System::Double s_asinOverflowThreshold; // 0x38
		::System::Double s_log2; // 0x40
		::System::Double m_real; // 0x10
		::System::Double m_imaginary; // 0x18

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Numerics::Complex* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::Complex*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

