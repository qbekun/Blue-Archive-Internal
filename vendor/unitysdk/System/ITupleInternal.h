#pragma once
#include "../unitysdk.h"

#define SYSTEM_ITUPLEINTERNAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ITUPLEINTERNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ITupleInternal_TypeDefinitionIndex = 23847;

	class ITupleInternal : public Il2CppObject
	{
	public:
		::System::String* ToString(::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ITUPLEINTERNAL_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ITUPLEINTERNAL_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

