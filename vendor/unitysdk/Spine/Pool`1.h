#pragma once
#include "../unitysdk.h"

#define SPINE_POOL`1_OBTAIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_FREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_SET_PEAK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_GET_PEAK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_POOL`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int Pool`1_TypeDefinitionIndex = 35001;

	class Pool`1 : public Il2CppObject
	{
	public:
		::System::Int32 max; // 0x0
		Il2CppObject* freeObjects; // 0x0
		::System::Int32 _Peak_k__BackingField; // 0x0

		Il2CppObject* Obtain()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_OBTAIN_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Free(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Peak(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_SET_PEAK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_RESET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Peak()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_GET_PEAK_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POOL`1_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

