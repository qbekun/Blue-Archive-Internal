#pragma once
#include "../unitysdk.h"

#define SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IVALUETUPLEINTERNAL_TOSTRINGEND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IValueTupleInternal_TypeDefinitionIndex = 23867;

	class IValueTupleInternal : public Il2CppObject
	{
	public:
		::System::Int32 GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IVALUETUPLEINTERNAL_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::String* ToStringEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IVALUETUPLEINTERNAL_TOSTRINGEND_OFFSET))(nullptr);
		}

	};
}

