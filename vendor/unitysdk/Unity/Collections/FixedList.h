#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_FIXEDLIST_PADDINGBYTES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList_TypeDefinitionIndex = 37020;

	class FixedList : public Il2CppObject
	{
	public:
		::System::Int32 PaddingBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST_PADDINGBYTES_OFFSET))(nullptr);
		}

	};
}

