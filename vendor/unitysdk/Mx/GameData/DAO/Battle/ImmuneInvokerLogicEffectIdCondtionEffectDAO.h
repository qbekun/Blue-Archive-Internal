#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerLogicEffectIdCondtionEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C1900)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15C53D0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15C5420)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15C1810)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15C5790)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C57A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneInvokerLogicEffectIdCondtionEffectDAO_TypeDefinitionIndex = 15284;

	class ImmuneInvokerLogicEffectIdCondtionEffectDAO : public Il2CppObject
	{
	public:
		::System::String* ImmuneSkillType; // 0x68
		::System::String* ImmuneCategory; // 0x70
		::System::String* CheckLogicEffectGroupId; // 0x78
		::FlatData::FontType* FloaterType; // 0x80

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

