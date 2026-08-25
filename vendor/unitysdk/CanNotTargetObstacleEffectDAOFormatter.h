#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CanNotTargetObstacleEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16579A0)
#define CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1657960)
#define CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16579F0)

	inline static constexpr unsigned int CanNotTargetObstacleEffectDAOFormatter_TypeDefinitionIndex = 15341;

	class CanNotTargetObstacleEffectDAOFormatter : public HS
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CANNOTTARGETOBSTACLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

