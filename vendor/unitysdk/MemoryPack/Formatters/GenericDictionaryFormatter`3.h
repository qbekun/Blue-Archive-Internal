#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTER`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTER`3_CREATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int GenericDictionaryFormatter`3_TypeDefinitionIndex = 35499;

	class GenericDictionaryFormatter`3 : public ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTER`3_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTER`3_CREATEDICTIONARY_OFFSET))(nullptr);
		}

	};
}

