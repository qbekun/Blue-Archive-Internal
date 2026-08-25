#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerLayer; }
namespace Animancer { class AnimancerState; }

#define ANIMANCER_TIMESYNCHRONIZER`1_GET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SET_CURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_GET_SYNCHRONIZEDEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SET_SYNCHRONIZEDEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_STORETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_STORETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int TimeSynchronizer`1_TypeDefinitionIndex = 35210;

	class TimeSynchronizer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _CurrentGroup_k__BackingField; // 0x0
		::System::Boolean _SynchronizeDefaultGroup_k__BackingField; // 0x0
		::System::Double _NormalizedTime_k__BackingField; // 0x0

		Il2CppObject* get_CurrentGroup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_GET_CURRENTGROUP_OFFSET))(nullptr);
		}

		::System::Void set_CurrentGroup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SET_CURRENTGROUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SynchronizeDefaultGroup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_GET_SYNCHRONIZEDEFAULTGROUP_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizeDefaultGroup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SET_SYNCHRONIZEDEFAULTGROUP_OFFSET))(arg, nullptr);
		}

		::System::Double get_NormalizedTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SET_NORMALIZEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StoreTime(::Animancer::AnimancerLayer* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerLayer*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_STORETIME_OFFSET))(arg, nullptr);
		}

		::System::Void StoreTime(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_STORETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean SyncTime(::Animancer::AnimancerLayer* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerLayer*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::Animancer::AnimancerLayer* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerLayer*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::Animancer::AnimancerState* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerState*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::Animancer::AnimancerState* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerState*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZER`1_SYNCTIME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

