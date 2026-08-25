#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountEntityListCombinedModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E7590)
#define COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E5BE0)
#define COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E75E0)

	inline static constexpr unsigned int CountEntityListCombinedModifierDAOFormatter_TypeDefinitionIndex = 15407;

	class CountEntityListCombinedModifierDAOFormatter : public ::System::Globalization::TextInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTENTITYLISTCOMBINEDMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

