#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AreaTimelineDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x17DB7E0)
#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DB800)
#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC410)
#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17DC420)
#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DC620)
#define MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DC400)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AreaTimelineDAO_TypeDefinitionIndex = 15596;

	class AreaTimelineDAO : public Il2CppObject
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::String* SpawnCheckLogicEffetTemplateId; // 0x18
		::MX::GameData::DAO::Battle::AreaEntityDAO* AreaData; // 0x20

		::System::Boolean ShouldSerializeSpawnCheckLogicEffetTemplateId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AreaTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AreaTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AreaTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AreaTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREATIMELINEDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

