#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BlackBoardSumBulletTypeDamagedEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A4390)
#define BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16A4340)
#define BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A43E0)

	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedEffectDAOFormatter_TypeDefinitionIndex = 15369;

	class BlackBoardSumBulletTypeDamagedEffectDAOFormatter : public ::System::Globalization::CharUnicodeInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

