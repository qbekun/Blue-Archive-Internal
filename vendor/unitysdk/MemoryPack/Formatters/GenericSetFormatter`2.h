#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTER`2_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int GenericSetFormatter`2_TypeDefinitionIndex = 35497;

	class GenericSetFormatter`2 : public MaxHPCapGaugeValueEffectDAOFormatter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTER`2_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSet()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTER`2_CREATESET_OFFSET))(nullptr);
		}

	};
}

