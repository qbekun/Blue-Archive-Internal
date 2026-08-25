#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint3; }

#define UNITY_MATHEMATICS_UINT3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7B2B0)
#define UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F7B2C0)
#define UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F7B2F0)
#define UNITY_MATHEMATICS_UINT3_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x9F7B310)
#define UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B330)
#define UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B350)
#define UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7B3D0)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B3F0)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B4A0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint3_TypeDefinitionIndex = 37579;

	class uint3 : public Il2CppObject
	{
	public:
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::uint3* op_Multiply(::Unity::Mathematics::uint3* arg, ::Unity::Mathematics::uint3* arg)
		{
			return (return (::Unity::Mathematics::uint3*(*)(::Unity::Mathematics::uint3*, ::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint3* op_Addition(::Unity::Mathematics::uint3* arg, ::Unity::Mathematics::uint3* arg)
		{
			return (return (::Unity::Mathematics::uint3*(*)(::Unity::Mathematics::uint3*, ::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint3* op_ExclusiveOr(::Unity::Mathematics::uint3* arg, ::Unity::Mathematics::uint3* arg)
		{
			return (return (::Unity::Mathematics::uint3*(*)(::Unity::Mathematics::uint3*, ::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_EXCLUSIVEOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint3* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

