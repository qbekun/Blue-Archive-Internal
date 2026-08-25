#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SPOOKYHASH_HASH_OFFSET UNITYSDK_OFFSET(0xA21CFC0)
#define UNITYENGINE_SPOOKYHASH_END_OFFSET UNITYSDK_OFFSET(0xA21D9E0)
#define UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET UNITYSDK_OFFSET(0xA21DBB0)
#define UNITYENGINE_SPOOKYHASH_ROT64_OFFSET UNITYSDK_OFFSET(0xA21DCC0)
#define UNITYENGINE_SPOOKYHASH_SHORT_OFFSET UNITYSDK_OFFSET(0xA21D2C0)
#define UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET UNITYSDK_OFFSET(0xA21DCD0)
#define UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET UNITYSDK_OFFSET(0xA21DDC0)
#define UNITYENGINE_SPOOKYHASH_MIX_OFFSET UNITYSDK_OFFSET(0xA21D840)

namespace UnityEngine
{
	inline static constexpr unsigned int SpookyHash_TypeDefinitionIndex = 31081;

	class SpookyHash : public Il2CppObject
	{
	public:
		::System::Void Hash(::System::Object** arg, ::System::UInt64 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt64, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_HASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void End(::System::Object** arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg)
		{
			((::System::Void(*)(::System::Object**, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_END_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndPartial(uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg)
		{
			((::System::Void(*)(uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ENDPARTIAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Rot64(uint64_t&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(uint64_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_ROT64_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Short(::System::Object** arg, ::System::UInt64 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt64, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShortMix(uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg)
		{
			((::System::Void(*)(uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTMIX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShortEnd(uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg)
		{
			((::System::Void(*)(uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_SHORTEND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Mix(::System::Object** arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg)
		{
			((::System::Void(*)(::System::Object**, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_MIX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

