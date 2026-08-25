#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NormalAttackBulletEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define NORMALATTACKBULLETENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x176EB90)
#define NORMALATTACKBULLETENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x176EBE0)
#define NORMALATTACKBULLETENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x176EB50)

	inline static constexpr unsigned int NormalAttackBulletEntityDAOFormatter_TypeDefinitionIndex = 15526;

	class NormalAttackBulletEntityDAOFormatter : public <ReadAsyncInternal>d__66
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKBULLETENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKBULLETENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKBULLETENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

