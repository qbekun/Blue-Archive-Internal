#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_TUPLEFORMATTERTYPES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9078830)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int TupleFormatterTypes_TypeDefinitionIndex = 35528;

	class TupleFormatterTypes : public Il2CppObject
	{
	public:
		Il2CppObject* TupleFormatters; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTERTYPES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

