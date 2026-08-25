#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET UNITYSDK_OFFSET(0x982B9F0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET UNITYSDK_OFFSET(0x982F1C0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x982C6B0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET UNITYSDK_OFFSET(0x982CE40)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET UNITYSDK_OFFSET(0x982DE40)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x9836AE0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x982CC60)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET UNITYSDK_OFFSET(0x982F140)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET UNITYSDK_OFFSET(0x98369D0)

namespace System::Numerics
{
	inline static constexpr unsigned int NumericsHelpers_TypeDefinitionIndex = 37099;

	class NumericsHelpers : public Il2CppObject
	{
	public:
		::System::Void GetDoubleParts(::System::Double arg, int32_t&* arg, int32_t&* arg, uint64_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Double, int32_t&*, int32_t&*, uint64_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Double GetDoubleFromParts(::System::Int32 arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DangerousMakeTwosComplement(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 MakeUlong(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Abs(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 CombineHash(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CombineHash(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CbitHighZero(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CbitHighZero(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET))(arg, nullptr);
		}

	};
}

