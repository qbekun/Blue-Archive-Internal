#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class PlayTrachBranchDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define PLAYTRACHBRANCHDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DB740)
#define PLAYTRACHBRANCHDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DB790)
#define PLAYTRACHBRANCHDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DB700)

	inline static constexpr unsigned int PlayTrachBranchDAOFormatter_TypeDefinitionIndex = 15593;

	class PlayTrachBranchDAOFormatter : public ::System::IO::Directory
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYTRACHBRANCHDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYTRACHBRANCHDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYTRACHBRANCHDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

