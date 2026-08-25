#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class EntityEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ENTITYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDEAD0)
#define ENTITYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD95A0)
#define ENTITYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDEB20)

	inline static constexpr unsigned int EntityEffectDAOFormatter_TypeDefinitionIndex = 19858;

	class EntityEffectDAOFormatter : public EventData
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::EntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::EntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::EntityEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::EntityEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

