#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NotMoveEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define NOTMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15DC270)
#define NOTMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15DC2B0)
#define NOTMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15DC300)

	inline static constexpr unsigned int NotMoveEffectDAOFormatter_TypeDefinitionIndex = 15293;

	class NotMoveEffectDAOFormatter : public <WriteAsyncInternal>d__59
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NOTMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NOTMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

