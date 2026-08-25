#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObstacleEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OBSTACLEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17AF070)
#define OBSTACLEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17AF0C0)
#define OBSTACLEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17AA1E0)

	inline static constexpr unsigned int ObstacleEntityDAOFormatter_TypeDefinitionIndex = 15558;

	class ObstacleEntityDAOFormatter : public NullTextReader
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSTACLEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

