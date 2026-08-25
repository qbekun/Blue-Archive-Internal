#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CircleAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CIRCLEAREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17091B0)
#define CIRCLEAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x170C740)
#define CIRCLEAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x170C790)

	inline static constexpr unsigned int CircleAreaEntityDAOFormatter_TypeDefinitionIndex = 15484;

	class CircleAreaEntityDAOFormatter : public TimeSpanResult
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

