#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AdditionalUISetEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ADDITIONALUISETEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1698060)
#define ADDITIONALUISETEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16980A0)
#define ADDITIONALUISETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16980F0)

	inline static constexpr unsigned int AdditionalUISetEffectDAOFormatter_TypeDefinitionIndex = 15365;

	class AdditionalUISetEffectDAOFormatter : public ::System::Reflection::RuntimeModule
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUISETEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUISETEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUISETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

