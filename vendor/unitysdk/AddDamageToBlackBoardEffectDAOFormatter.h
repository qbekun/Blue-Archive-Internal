#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AddDamageToBlackBoardEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C30B0)
#define ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C3100)
#define ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16C1320)

	inline static constexpr unsigned int AddDamageToBlackBoardEffectDAOFormatter_TypeDefinitionIndex = 15379;

	class AddDamageToBlackBoardEffectDAOFormatter : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDDAMAGETOBLACKBOARDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

