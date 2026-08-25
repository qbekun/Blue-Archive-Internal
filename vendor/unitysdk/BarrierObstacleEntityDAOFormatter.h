#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BarrierObstacleEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BARRIEROBSTACLEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17BA720)
#define BARRIEROBSTACLEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BA760)
#define BARRIEROBSTACLEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BA7C0)

	inline static constexpr unsigned int BarrierObstacleEntityDAOFormatter_TypeDefinitionIndex = 15562;

	class BarrierObstacleEntityDAOFormatter : public ::System::Reflection::Emit::MethodBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BARRIEROBSTACLEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

