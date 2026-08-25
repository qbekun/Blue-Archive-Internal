#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CircleProcedureAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1780B00)
#define CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17809B0)
#define CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1780B50)

	inline static constexpr unsigned int CircleProcedureAuraEntityDAOFormatter_TypeDefinitionIndex = 15538;

	class CircleProcedureAuraEntityDAOFormatter : public ::System::Globalization::TimeSpanStyles
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEPROCEDUREAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

