#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_BITARRAYVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9072840)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int BitArrayView_TypeDefinitionIndex = 35472;

	class BitArrayView : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_array; // 0x10
		::System::Int32 m_length; // 0x18
		::System::Int32 _version; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BITARRAYVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

