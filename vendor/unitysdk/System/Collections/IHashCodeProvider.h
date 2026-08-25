#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int IHashCodeProvider_TypeDefinitionIndex = 25098;

	class IHashCodeProvider : public Il2CppObject
	{
	public:
		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

