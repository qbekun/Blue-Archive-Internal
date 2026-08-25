#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceMoveEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FORCEMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1547870)
#define FORCEMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1547830)
#define FORCEMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15478C0)

	inline static constexpr unsigned int ForceMoveEffectDAOFormatter_TypeDefinitionIndex = 15253;

	class ForceMoveEffectDAOFormatter : public ::System::Collections::CaseInsensitiveHashCodeProvider
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

