#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FormIndexCheckModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FORMINDEXCHECKMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FC000)
#define FORMINDEXCHECKMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FC050)
#define FORMINDEXCHECKMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FBBB0)

	inline static constexpr unsigned int FormIndexCheckModifierDAOFormatter_TypeDefinitionIndex = 15455;

	class FormIndexCheckModifierDAOFormatter : public QueueDebugView
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMINDEXCHECKMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMINDEXCHECKMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMINDEXCHECKMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

