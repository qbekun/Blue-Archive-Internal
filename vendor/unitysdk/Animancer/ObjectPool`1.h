#pragma once
#include "../unitysdk.h"

#define ANIMANCER_OBJECTPOOL`1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_INCREASECAPACITYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_INCREASECOUNTTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL`1_GETDETAILS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ObjectPool`1_TypeDefinitionIndex = 35097;

	class ObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Items; // 0x0

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void IncreaseCapacityTo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_INCREASECAPACITYTO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Acquire()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_ACQUIRE_OFFSET))(nullptr);
		}

		::System::Void IncreaseCountTo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_INCREASECOUNTTO_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDetails()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL`1_GETDETAILS_OFFSET))(nullptr);
		}

	};
}

