#pragma once
#include "../unitysdk.h"

#define SYSTEM_HASHCODE_GENERATEGLOBALSEED_OFFSET UNITYSDK_OFFSET(0x9354750)
#define SYSTEM_HASHCODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_ROL_OFFSET UNITYSDK_OFFSET(0x9354780)
#define SYSTEM_HASHCODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9354790)
#define SYSTEM_HASHCODE_ROUND_OFFSET UNITYSDK_OFFSET(0x9354840)
#define SYSTEM_HASHCODE_QUEUEROUND_OFFSET UNITYSDK_OFFSET(0x93548A0)
#define SYSTEM_HASHCODE_MIXSTATE_OFFSET UNITYSDK_OFFSET(0x9354900)
#define SYSTEM_HASHCODE_MIXEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x9354980)
#define SYSTEM_HASHCODE_MIXFINAL_OFFSET UNITYSDK_OFFSET(0x93549D0)
#define SYSTEM_HASHCODE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_HASHCODE_ADD_OFFSET UNITYSDK_OFFSET(0x9354A00)
#define SYSTEM_HASHCODE_TOHASHCODE_OFFSET UNITYSDK_OFFSET(0x9354CA0)
#define SYSTEM_HASHCODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9354FD0)
#define SYSTEM_HASHCODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9355050)
#define SYSTEM_HASHCODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93550B0)

namespace System
{
	inline static constexpr unsigned int HashCode_TypeDefinitionIndex = 23765;

	class HashCode : public Il2CppObject
	{
	public:
		::System::UInt32 s_seed; // 0x0
		::System::UInt32 _v1; // 0x10
		::System::UInt32 _v2; // 0x14
		::System::UInt32 _v3; // 0x18
		::System::UInt32 _v4; // 0x1C
		::System::UInt32 _queue1; // 0x20
		::System::UInt32 _queue2; // 0x24
		::System::UInt32 _queue3; // 0x28
		::System::UInt32 _length; // 0x2C

		::System::UInt32 GenerateGlobalSeed()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_GENERATEGLOBALSEED_OFFSET))(nullptr);
		}

		::System::Int32 Combine(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Combine(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_COMBINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Combine(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_COMBINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Combine(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_COMBINE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Combine(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_COMBINE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 Rol(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(uint32_t&* arg, uint32_t&* arg, uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, uint32_t&*, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_INITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 Round(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 QueueRound(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_QUEUEROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 MixState(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXSTATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 MixEmptyState()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXEMPTYSTATE_OFFSET))(nullptr);
		}

		::System::UInt32 MixFinal(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXFINAL_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_TOHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

