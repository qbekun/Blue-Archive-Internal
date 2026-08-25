#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class ParticleEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE45A0)
#define MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5AB0)
#define MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5AA0)
#define MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE5D40)
#define MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE5AC0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int ParticleEffectDAO_TypeDefinitionIndex = 19869;

	class ParticleEffectDAO : public Il2CppObject
	{
	public:
		::System::String* ParticleEffectName; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Single Duration; // 0x20
		::System::Single StartDelay; // 0x24
		Il2CppObject* LinkedEffectPrefabPaths; // 0x28

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::ParticleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::ParticleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::ParticleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::ParticleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_PARTICLEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

