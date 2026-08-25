#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerComponent; }
namespace Animancer { class AnimancerState; }

#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_GET_ANIMANCER_OFFSET UNITYSDK_OFFSET(0x4BDED0)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SET_ANIMANCER_OFFSET UNITYSDK_OFFSET(0x4BDEE0)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x4BDF10)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x4BDF20)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BDF30)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_STORETIME_OFFSET UNITYSDK_OFFSET(0x4BDF90)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_STORETIME_OFFSET UNITYSDK_OFFSET(0x4BE060)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x4BE100)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x4BE160)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x4BE2C0)
#define ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x4BE1C0)

namespace Animancer
{
	inline static constexpr unsigned int TimeSynchronizationGroup_TypeDefinitionIndex = 35209;

	class TimeSynchronizationGroup : public ::MX::GameData::DAO::Battle::LevelDotAbilityDAO
	{
	public:
		::Animancer::AnimancerComponent* _Animancer; // 0x48
		Il2CppObject* _NormalizedTime_k__BackingField; // 0x50

		::Animancer::AnimancerComponent* get_Animancer()
		{
			return (return (::Animancer::AnimancerComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_GET_ANIMANCER_OFFSET))(nullptr);
		}

		::System::Void set_Animancer(::Animancer::AnimancerComponent* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SET_ANIMANCER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NormalizedTime()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedTime(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SET_NORMALIZEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Animancer::AnimancerComponent* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean StoreTime(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_STORETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean StoreTime(::System::Object* arg, ::Animancer::AnimancerState* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_STORETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean SyncTime(::System::Object* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::System::Object* arg, ::Animancer::AnimancerState* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SyncTime(::System::Object* arg, ::Animancer::AnimancerState* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Animancer::AnimancerState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_TIMESYNCHRONIZATIONGROUP_SYNCTIME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

