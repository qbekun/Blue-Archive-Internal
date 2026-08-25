#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Data { class PositionSetting; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_ISUSEPROJECTILE_OFFSET UNITYSDK_OFFSET(0x1CEABE0)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEABF0)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEAD50)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEAE30)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CEAFE0)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CEB090)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB240)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CEB250)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEB510)
#define MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEBDA0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int VisualEffectDAO_TypeDefinitionIndex = 19876;

	class VisualEffectDAO : public Il2CppObject
	{
	public:
		::MX::Visual::Data::PositionSetting* PositionSetting; // 0x10
		::System::Single StartDelaySecond; // 0x68
		::System::Single DurationSecond; // 0x6C
		::System::Boolean RemoveWhenSkillCancel; // 0x70
		::System::Boolean RemoveWhenLogicEffectIsOff; // 0x71
		::System::Boolean EffectPositionFixed; // 0x72
		::System::Boolean IgnorePositionOffsetInMovingAreaWhenEntityIsExpired; // 0x73
		::System::String* PrefabPath; // 0x78
		Il2CppObject* LinkedEffectPrefabPaths; // 0x80

		::System::Boolean IsUseProjectile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_ISUSEPROJECTILE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::AppData::DAO::Battle::VisualEffectDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, ::MX::AppData::DAO::Battle::VisualEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, ::MX::AppData::DAO::Battle::VisualEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::VisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::VisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::VisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_VISUALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

