#pragma once
#include "unitysdk.h"

#define COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DB740)
#define COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14D5540)
#define COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DB790)

	inline static constexpr unsigned int CountLogicEffectCategoryEffectDAOFormatter_TypeDefinitionIndex = 15213;

	class CountLogicEffectCategoryEffectDAOFormatter : public ::System::Globalization::TextInfoToUpperData
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTCATEGORYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

