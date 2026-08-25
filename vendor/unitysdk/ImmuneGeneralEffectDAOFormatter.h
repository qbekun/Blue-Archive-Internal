#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneGeneralEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IMMUNEGENERALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1597320)
#define IMMUNEGENERALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1597370)
#define IMMUNEGENERALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x158FF70)

	inline static constexpr unsigned int ImmuneGeneralEffectDAOFormatter_TypeDefinitionIndex = 15277;

	class ImmuneGeneralEffectDAOFormatter : public Enumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEGENERALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEGENERALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEGENERALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

