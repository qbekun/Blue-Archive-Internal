#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F1B0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x146F2F0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x146F4C0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x146F300)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x146F520)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146F530)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x146F8A0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x146F8B0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_GET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x146F8C0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PlayerSpawnPointInfo_TypeDefinitionIndex = 15122;

	class PlayerSpawnPointInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _Pos_k__BackingField; // 0x10
		::System::UInt32 _RotKey_k__BackingField; // 0x1C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::PlayerSpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::PlayerSpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Pos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_GET_POS_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::PlayerSpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::PlayerSpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Pos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SET_POS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RotKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_SET_ROTKEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_RotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINTINFO_GET_ROTKEY_OFFSET))(nullptr);
		}

	};
}

