#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneEffectBaseDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1572610)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15728D0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1572920)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1573F30)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1575FB0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1575FC0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneEffectBaseDAO_TypeDefinitionIndex = 15274;

	class ImmuneEffectBaseDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Boolean Dispellable; // 0x60

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneEffectBaseDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEEFFECTBASEDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

