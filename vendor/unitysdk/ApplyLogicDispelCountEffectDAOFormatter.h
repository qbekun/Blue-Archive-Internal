#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ApplyLogicDispelCountEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16D5D00)
#define APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16D3280)
#define APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16D5D50)

	inline static constexpr unsigned int ApplyLogicDispelCountEffectDAOFormatter_TypeDefinitionIndex = 15387;

	class ApplyLogicDispelCountEffectDAOFormatter : public GetterAdapter
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + APPLYLOGICDISPELCOUNTEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

