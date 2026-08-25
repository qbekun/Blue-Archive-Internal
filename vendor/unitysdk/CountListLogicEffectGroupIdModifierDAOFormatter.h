#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectGroupIdModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E9E40)
#define COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E9E90)
#define COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E9690)

	inline static constexpr unsigned int CountListLogicEffectGroupIdModifierDAOFormatter_TypeDefinitionIndex = 15413;

	class CountListLogicEffectGroupIdModifierDAOFormatter : public ::System::Globalization::ISimpleCollator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

