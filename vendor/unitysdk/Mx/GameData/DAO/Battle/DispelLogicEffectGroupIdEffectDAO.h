#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DispelLogicEffectGroupIdEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1514200)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1515EE0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1515F30)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1515F90)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1515FA0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1516260)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DispelLogicEffectGroupIdEffectDAO_TypeDefinitionIndex = 15236;

	class DispelLogicEffectGroupIdEffectDAO : public Il2CppObject
	{
	public:
		::System::String* LogicEffectGroupIdToDispel; // 0x58
		::System::Int32 DispelCount; // 0x60

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTGROUPIDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

