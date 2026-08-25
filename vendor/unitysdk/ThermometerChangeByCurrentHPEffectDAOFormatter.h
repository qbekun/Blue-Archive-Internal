#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ThermometerChangeByCurrentHPEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x166B840)
#define THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1670F20)
#define THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1670F70)

	inline static constexpr unsigned int ThermometerChangeByCurrentHPEffectDAOFormatter_TypeDefinitionIndex = 15351;

	class ThermometerChangeByCurrentHPEffectDAOFormatter : public __StaticArrayInitTypeSize=256
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERCHANGEBYCURRENTHPEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

