#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatusAddEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define STATUSADDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x162FFF0)
#define STATUSADDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1630040)
#define STATUSADDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x162FFB0)

	inline static constexpr unsigned int StatusAddEffectDAOFormatter_TypeDefinitionIndex = 15323;

	class StatusAddEffectDAOFormatter : public <>c__DisplayClass8_0
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSADDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSADDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

