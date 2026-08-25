#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15760B0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15763F0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1576450)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15760C0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x157D150)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1586080)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneEffectDAO_TypeDefinitionIndex = 15276;

	class ImmuneEffectDAO : public Il2CppObject
	{
	public:
		::System::String* TargetLogicEffectTemplateId00; // 0x68
		::System::String* TargetLogicEffectTemplateId01; // 0x70
		::System::String* TargetLogicEffectTemplateId02; // 0x78
		::System::String* TargetLogicEffectTemplateId03; // 0x80
		::System::String* TargetLogicEffectTemplateId04; // 0x88
		::System::String* TargetLogicEffectTemplateId05; // 0x90
		::System::String* TargetLogicEffectTemplateId06; // 0x98
		::System::String* TargetLogicEffectTemplateId07; // 0xA0
		::System::String* TargetLogicEffectTemplateId08; // 0xA8
		::System::String* TargetLogicEffectTemplateId09; // 0xB0
		::System::String* TargetLogicEffectTemplateId10; // 0xB8
		::System::String* TargetLogicEffectTemplateId11; // 0xC0
		::System::String* TargetLogicEffectTemplateId12; // 0xC8
		::FlatData::FontType* FloaterType; // 0xD0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

