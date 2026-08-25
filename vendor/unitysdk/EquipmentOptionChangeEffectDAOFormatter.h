#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class EquipmentOptionChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15289F0)
#define EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1528A40)
#define EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1525040)

	inline static constexpr unsigned int EquipmentOptionChangeEffectDAOFormatter_TypeDefinitionIndex = 15243;

	class EquipmentOptionChangeEffectDAOFormatter : public ::System::Diagnostics::Tracing::EventSourceAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOPTIONCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

