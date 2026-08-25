#pragma once
#include "unitysdk.h"

#define TBIGINT_SETU64_OFFSET UNITYSDK_OFFSET(0x9E34A70)
#define TBIGINT_GETBLOCK_OFFSET UNITYSDK_OFFSET(0x9E34AA0)
#define TBIGINT_SETU32_OFFSET UNITYSDK_OFFSET(0x9E32CA0)
#define TBIGINT_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9E355F0)
#define TBIGINT_ISZERO_OFFSET UNITYSDK_OFFSET(0x9E34AB0)

	inline static constexpr unsigned int tBigInt_TypeDefinitionIndex = 37250;

	class tBigInt : public Il2CppObject
	{
	public:
		::System::Int32 m_length; // 0x10
		<m_blocks>e__FixedBuffer* m_blocks; // 0x14

		::System::Void SetU64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + TBIGINT_SETU64_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetBlock(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBIGINT_GETBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void SetU32(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TBIGINT_SETU32_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBIGINT_GETLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean IsZero()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TBIGINT_ISZERO_OFFSET))(nullptr);
		}

	};

