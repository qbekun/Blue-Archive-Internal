#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AdditionalUIActionEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ADDITIONALUIACTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x169F710)
#define ADDITIONALUIACTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x169F760)
#define ADDITIONALUIACTIONEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1698420)

	inline static constexpr unsigned int AdditionalUIActionEffectDAOFormatter_TypeDefinitionIndex = 15367;

	class AdditionalUIActionEffectDAOFormatter : public ::System::Reflection::RuntimeConstructorInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUIACTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUIACTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALUIACTIONEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

