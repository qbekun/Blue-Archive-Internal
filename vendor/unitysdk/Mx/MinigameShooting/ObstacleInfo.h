#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x1470280)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x1470290)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_PREFABPATHKEY_OFFSET UNITYSDK_OFFSET(0x14702A0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x14702B0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14702C0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14702D0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1470560)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14709B0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1470B20)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14702E0)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1470B70)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_PREFABPATHKEY_OFFSET UNITYSDK_OFFSET(0x1470B80)
#define MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x1470B90)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ObstacleInfo_TypeDefinitionIndex = 15126;

	class ObstacleInfo : public Il2CppObject
	{
	public:
		::System::UInt32 _PrefabPathKey_k__BackingField; // 0x10
		::UnityEngine::Vector3* _Pos_k__BackingField; // 0x14
		::System::UInt32 _RotKey_k__BackingField; // 0x20
		Il2CppObject* _Scale_k__BackingField; // 0x24

		::System::Void set_RotKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_ROTKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Pos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_POS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_PrefabPathKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_PREFABPATHKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_RotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_ROTKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::ObstacleInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::ObstacleInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::ObstacleInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::ObstacleInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Scale(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Scale()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_PrefabPathKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_SET_PREFABPATHKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Pos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBSTACLEINFO_GET_POS_OFFSET))(nullptr);
		}

	};
}

