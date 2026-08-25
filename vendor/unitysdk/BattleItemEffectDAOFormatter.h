#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class BattleItemEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BATTLEITEMEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD9330)
#define BATTLEITEMEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD9380)
#define BATTLEITEMEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8500)

	inline static constexpr unsigned int BattleItemEffectDAOFormatter_TypeDefinitionIndex = 19856;

	class BattleItemEffectDAOFormatter : public ::System::Reflection::Emit::ModuleBuilder
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::BattleItemEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

