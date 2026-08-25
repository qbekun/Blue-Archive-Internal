#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class WriteEntityToBlackboardEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16BDB20)
#define WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16BDB70)
#define WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16BB240)

	inline static constexpr unsigned int WriteEntityToBlackboardEffectDAOFormatter_TypeDefinitionIndex = 15377;

	class WriteEntityToBlackboardEffectDAOFormatter : public ::Unity::ThrowStub
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::WriteEntityToBlackboardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WRITEENTITYTOBLACKBOARDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

