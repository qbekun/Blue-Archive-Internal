#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ReviveEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define REVIVEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E9490)
#define REVIVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15ECBC0)
#define REVIVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15ECC10)

	inline static constexpr unsigned int ReviveEffectDAOFormatter_TypeDefinitionIndex = 15301;

	class ReviveEffectDAOFormatter : public <ReadFromUnderlyingStreamAsync>d__51
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REVIVEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ReviveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ReviveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REVIVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ReviveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ReviveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + REVIVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

