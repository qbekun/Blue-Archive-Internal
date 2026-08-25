#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BlackBoardSetEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDSETEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B9040)
#define BLACKBOARDSETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B9090)
#define BLACKBOARDSETEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16B9000)

	inline static constexpr unsigned int BlackBoardSetEffectDAOFormatter_TypeDefinitionIndex = 15375;

	class BlackBoardSetEffectDAOFormatter : public ::System::Numerics::Hashing::HashHelpers
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSETEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSETEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

