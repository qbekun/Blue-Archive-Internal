#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BlackBoardMultiAlarmEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B4450)
#define BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16AB050)
#define BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B44A0)

	inline static constexpr unsigned int BlackBoardMultiAlarmEffectDAOFormatter_TypeDefinitionIndex = 15373;

	class BlackBoardMultiAlarmEffectDAOFormatter : public ::System::Numerics::Vector
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMULTIALARMEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

