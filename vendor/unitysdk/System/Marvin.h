#pragma once
#include "../unitysdk.h"

#define SYSTEM_MARVIN_COMPUTEHASH32_OFFSET UNITYSDK_OFFSET(0x935AB70)
#define SYSTEM_MARVIN_COMPUTEHASH32_OFFSET UNITYSDK_OFFSET(0x935AC00)
#define SYSTEM_MARVIN_BLOCK_OFFSET UNITYSDK_OFFSET(0x935B130)
#define SYSTEM_MARVIN__ROTL_OFFSET UNITYSDK_OFFSET(0x935B1A0)
#define SYSTEM_MARVIN_GET_DEFAULTSEED_OFFSET UNITYSDK_OFFSET(0x935B1B0)
#define SYSTEM_MARVIN_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x935B200)
#define SYSTEM_MARVIN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x935B210)

namespace System
{
	inline static constexpr unsigned int Marvin_TypeDefinitionIndex = 23792;

	class Marvin : public Il2CppObject
	{
	public:
		::System::UInt64 _DefaultSeed_k__BackingField; // 0x0

		::System::Int32 ComputeHash32(Il2CppObject* arg, ::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_COMPUTEHASH32_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ComputeHash32(uint8_t&* arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(uint8_t&*, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_COMPUTEHASH32_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Block(uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_BLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 _rotl(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN__ROTL_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 get_DefaultSeed()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_GET_DEFAULTSEED_OFFSET))(nullptr);
		}

		::System::UInt64 GenerateSeed()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_GENERATESEED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARVIN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

