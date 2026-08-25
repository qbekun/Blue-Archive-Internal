#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ReloadAmmoEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define RELOADAMMOEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E5720)
#define RELOADAMMOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E5770)
#define RELOADAMMOEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E40D0)

	inline static constexpr unsigned int ReloadAmmoEffectDAOFormatter_TypeDefinitionIndex = 15297;

	class ReloadAmmoEffectDAOFormatter : public ::System::IO::SearchOption
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RELOADAMMOEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RELOADAMMOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RELOADAMMOEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

