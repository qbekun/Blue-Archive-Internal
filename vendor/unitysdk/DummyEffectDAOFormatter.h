#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DummyEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define DUMMYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1524B50)
#define DUMMYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1524BA0)
#define DUMMYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15210F0)

	inline static constexpr unsigned int DummyEffectDAOFormatter_TypeDefinitionIndex = 15241;

	class DummyEffectDAOFormatter : public TraceFormat
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DummyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DummyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DummyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DummyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DUMMYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

