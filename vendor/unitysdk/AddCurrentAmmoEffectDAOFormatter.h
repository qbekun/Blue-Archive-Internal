#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AddCurrentAmmoEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ADDCURRENTAMMOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E9110)
#define ADDCURRENTAMMOEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15E5A90)
#define ADDCURRENTAMMOEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15E9160)

	inline static constexpr unsigned int AddCurrentAmmoEffectDAOFormatter_TypeDefinitionIndex = 15299;

	class AddCurrentAmmoEffectDAOFormatter : public ::System::Reflection::RuntimeEventInfo
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTAMMOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTAMMOEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTAMMOEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

