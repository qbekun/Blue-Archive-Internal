#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlackBoardAlarmOnReachEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16AAD30)
#define BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16A4760)
#define BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16AAD80)

	inline static constexpr unsigned int BlackBoardAlarmOnReachEffectDAOFormatter_TypeDefinitionIndex = 15371;

	class BlackBoardAlarmOnReachEffectDAOFormatter : public ::System::Numerics::Vector`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDALARMONREACHEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

