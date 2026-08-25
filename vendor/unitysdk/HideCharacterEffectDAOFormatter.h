#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HideCharacterEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HIDECHARACTEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x156EAF0)
#define HIDECHARACTEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x156EAB0)
#define HIDECHARACTEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x156EB40)

	inline static constexpr unsigned int HideCharacterEffectDAOFormatter_TypeDefinitionIndex = 15269;

	class HideCharacterEffectDAOFormatter : public ::System::Collections::Generic::InternalStringComparer
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HIDECHARACTEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDECHARACTEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HideCharacterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HIDECHARACTEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

