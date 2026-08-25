#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NormalAttackPhaseDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define NORMALATTACKPHASEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17F19A0)
#define NORMALATTACKPHASEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17F19F0)
#define NORMALATTACKPHASEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F1950)

	inline static constexpr unsigned int NormalAttackPhaseDAOFormatter_TypeDefinitionIndex = 15612;

	class NormalAttackPhaseDAOFormatter : public ::System::IO::StreamReader
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackPhaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKPHASEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

