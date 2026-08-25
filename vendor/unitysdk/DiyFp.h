#pragma once
#include "unitysdk.h"

#define DIYFP_CREATEANDGETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0xA4C6E10)
#define DIYFP_CREATEANDGETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0xA4C7060)
#define DIYFP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4C6F30)
#define DIYFP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4C7180)
#define DIYFP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4C71F0)
#define DIYFP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA4C7200)
#define DIYFP_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA4C7280)
#define DIYFP_SUBTRACT_OFFSET UNITYSDK_OFFSET(0xA4C72F0)
#define DIYFP_GETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0xA4C6FA0)

	inline static constexpr unsigned int DiyFp_TypeDefinitionIndex = 34658;

	class DiyFp : public Il2CppObject
	{
	public:
		::System::Int32 DoubleImplicitBitIndex; // 0x0
		::System::Int32 SingleImplicitBitIndex; // 0x0
		::System::Int32 SignificandSize; // 0x0
		::System::UInt64 f; // 0x10
		::System::Int32 e; // 0x18

		DiyFp* CreateAndGetBoundaries(::System::Double arg, DiyFp&* arg, DiyFp&* arg)
		{
			return (return (DiyFp*(*)(::System::Double, DiyFp&*, DiyFp&*, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_CREATEANDGETBOUNDARIES_OFFSET))(arg, arg, arg, nullptr);
		}

		DiyFp* CreateAndGetBoundaries(::System::Single arg, DiyFp&* arg, DiyFp&* arg)
		{
			return (return (DiyFp*(*)(::System::Single, DiyFp&*, DiyFp&*, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_CREATEANDGETBOUNDARIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		DiyFp* Multiply(DiyFp&* arg)
		{
			return (return (DiyFp*(*)(DiyFp&*, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_MULTIPLY_OFFSET))(arg, nullptr);
		}

		DiyFp* Normalize()
		{
			return (return (DiyFp*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIYFP_NORMALIZE_OFFSET))(nullptr);
		}

		DiyFp* Subtract(DiyFp&* arg)
		{
			return (return (DiyFp*(*)(DiyFp&*, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void GetBoundaries(::System::Int32 arg, DiyFp&* arg, DiyFp&* arg)
		{
			((::System::Void(*)(::System::Int32, DiyFp&*, DiyFp&*, ::PVOID))((::PBYTE)hIl2Cpp + DIYFP_GETBOUNDARIES_OFFSET))(arg, arg, arg, nullptr);
		}

	};

