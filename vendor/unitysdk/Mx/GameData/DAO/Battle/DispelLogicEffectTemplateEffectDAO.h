#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DispelLogicEffectTemplateEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1518AE0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1518AF0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1518DB0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x151B590)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x151B5E0)
#define MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x151B640)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DispelLogicEffectTemplateEffectDAO_TypeDefinitionIndex = 15238;

	class DispelLogicEffectTemplateEffectDAO : public Il2CppObject
	{
	public:
		::System::String* LogicEffectTemplateToDispel; // 0x58
		::System::Int32 DispelCount; // 0x60

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DISPELLOGICEFFECTTEMPLATEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

