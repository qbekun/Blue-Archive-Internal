#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define STATCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x162C320)
#define STATCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162C370)
#define STATCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1627150)

	inline static constexpr unsigned int StatChangeEffectDAOFormatter_TypeDefinitionIndex = 15321;

	class StatChangeEffectDAOFormatter : public <>c__DisplayClass6_0
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

