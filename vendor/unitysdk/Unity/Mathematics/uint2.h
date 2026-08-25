#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint2; }

#define UNITY_MATHEMATICS_UINT2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7B0A0)
#define UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F7B0B0)
#define UNITY_MATHEMATICS_UINT2_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9F7B0D0)
#define UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B0F0)
#define UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B110)
#define UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7B190)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B1B0)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B230)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint2_TypeDefinitionIndex = 37577;

	class uint2 : public Il2CppObject
	{
	public:
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint2* op_Multiply(::Unity::Mathematics::uint2* arg, ::Unity::Mathematics::uint2* arg)
		{
			return (return (::Unity::Mathematics::uint2*(*)(::Unity::Mathematics::uint2*, ::Unity::Mathematics::uint2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint2* op_BitwiseAnd(::Unity::Mathematics::uint2* arg, ::System::UInt32 arg)
		{
			return (return (::Unity::Mathematics::uint2*(*)(::Unity::Mathematics::uint2*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint2* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::uint2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

