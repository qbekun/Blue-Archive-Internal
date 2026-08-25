#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11CB760)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CBA20)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CCA00)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11CE040)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CE030)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SubPartDummySpawnData_TypeDefinitionIndex = 13364;

	class SubPartDummySpawnData : public Il2CppObject
	{
	public:
		::System::String* PartName; // 0x10
		::System::String* SpawnTemplateId; // 0x18
		::System::Single PositionHeight; // 0x20
		::UnityEngine::Vector2* Position; // 0x24
		::UnityEngine::Vector2* Direction; // 0x2C
		Il2CppObject* SpawnConditionIdList; // 0x38
		Il2CppObject* SpawnCommandIdList; // 0x40

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SubPartDummySpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SubPartDummySpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SubPartDummySpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SubPartDummySpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYSPAWNDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

