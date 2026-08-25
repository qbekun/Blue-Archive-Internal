#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class UseExclusiveHPBarEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1661B70)
#define USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1661AC0)
#define USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1661BC0)

	inline static constexpr unsigned int UseExclusiveHPBarEffectDAOFormatter_TypeDefinitionIndex = 15345;

	class UseExclusiveHPBarEffectDAOFormatter : public __StaticArrayInitTypeSize=2100
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + USEEXCLUSIVEHPBAREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

