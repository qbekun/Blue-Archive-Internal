#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneGeneralEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15861D0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1586230)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x158FC40)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x158FB90)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x158FFB0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x158FFC0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneGeneralEffectDAO_TypeDefinitionIndex = 15278;

	class ImmuneGeneralEffectDAO : public Il2CppObject
	{
	public:
		::System::String* ImmuneSkillType; // 0x68
		::System::String* ImmuneCategory; // 0x70
		::FlatData::FontType* FloaterType; // 0x78
		::System::String* ExceptLogicTemplateId00; // 0x80
		::System::String* ExceptLogicTemplateId01; // 0x88
		::System::String* ExceptLogicTemplateId02; // 0x90
		::System::String* ExceptLogicTemplateId03; // 0x98
		::System::String* ExceptLogicTemplateId04; // 0xA0
		::System::String* ExceptLogicTemplateId05; // 0xA8
		::System::String* ExceptLogicGroupId00; // 0xB0
		::System::String* ExceptLogicGroupId01; // 0xB8
		::System::String* ExceptLogicGroupId02; // 0xC0
		::System::String* ExceptLogicGroupId03; // 0xC8
		::System::String* ExceptLogicGroupId04; // 0xD0
		::System::String* ExceptLogicGroupId05; // 0xD8

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEGENERALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

