#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ThermometerRangeSetEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define THERMOMETERRANGESETEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x166B470)
#define THERMOMETERRANGESETEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x166B3D0)
#define THERMOMETERRANGESETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x166B4C0)

	inline static constexpr unsigned int ThermometerRangeSetEffectDAOFormatter_TypeDefinitionIndex = 15349;

	class ThermometerRangeSetEffectDAOFormatter : public __StaticArrayInitTypeSize=262
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERRANGESETEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERRANGESETEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + THERMOMETERRANGESETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

