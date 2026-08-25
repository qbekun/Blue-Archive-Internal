#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CircleAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CIRCLEAURAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x177C2D0)
#define CIRCLEAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x177C310)
#define CIRCLEAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x177C360)

	inline static constexpr unsigned int CircleAuraEntityDAOFormatter_TypeDefinitionIndex = 15536;

	class CircleAuraEntityDAOFormatter : public StringParser
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAURAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

