#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint4; }

#define UNITY_MATHEMATICS_UINT4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7B540)
#define UNITY_MATHEMATICS_UINT4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7B560)
#define UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9F7B570)
#define UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F7B5B0)
#define UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9F7B5D0)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9F7B5F0)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9F7B610)
#define UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x9F7B630)
#define UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B650)
#define UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7B680)
#define UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7B710)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B760)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B940)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint4_TypeDefinitionIndex = 37581;

	class uint4 : public Il2CppObject
	{
	public:
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18
		::System::UInt32 w; // 0x1C

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_.CTOR_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_Multiply(::Unity::Mathematics::uint4* arg, ::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_Addition(::Unity::Mathematics::uint4* arg, ::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_OnesComplement(::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_BitwiseAnd(::Unity::Mathematics::uint4* arg, ::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_BitwiseOr(::Unity::Mathematics::uint4* arg, ::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* op_ExclusiveOr(::Unity::Mathematics::uint4* arg, ::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::uint4*, ::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint4* arg)
		{
			return (return (::System::Boolean(*)(::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

