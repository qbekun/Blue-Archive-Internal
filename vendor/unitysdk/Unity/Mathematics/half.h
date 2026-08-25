#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class half; }

#define UNITY_MATHEMATICS_HALF_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9F79C60)
#define UNITY_MATHEMATICS_HALF_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F79C70)
#define UNITY_MATHEMATICS_HALF_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F79C80)
#define UNITY_MATHEMATICS_HALF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F79CF0)
#define UNITY_MATHEMATICS_HALF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F79D00)
#define UNITY_MATHEMATICS_HALF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F79D80)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int half_TypeDefinitionIndex = 37572;

	class half : public Il2CppObject
	{
	public:
		::System::UInt16 value; // 0x10

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::half* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::half*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_HALF_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

