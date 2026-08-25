#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AbilityDAOWithOrder&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ABILITYDAOWITHORDERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17908F0)
#define ABILITYDAOWITHORDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1790C40)
#define ABILITYDAOWITHORDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1790C90)

	inline static constexpr unsigned int AbilityDAOWithOrderFormatter_TypeDefinitionIndex = 15548;

	class AbilityDAOWithOrderFormatter : public ResolveEventHolder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABILITYDAOWITHORDERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&*, ::PVOID))((::PBYTE)hIl2Cpp + ABILITYDAOWITHORDERFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AbilityDAOWithOrder&*, ::PVOID))((::PBYTE)hIl2Cpp + ABILITYDAOWITHORDERFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

