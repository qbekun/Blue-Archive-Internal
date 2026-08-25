#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_RANDOM_INITSTATE_OFFSET UNITYSDK_OFFSET(0xA22CE40)
#define UNITYENGINE_RANDOM_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA22CE80)
#define UNITYENGINE_RANDOM_SET_STATE_OFFSET UNITYSDK_OFFSET(0xA22CF10)
#define UNITYENGINE_RANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0xA22CF90)
#define UNITYENGINE_RANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0xA22CFE0)
#define UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET UNITYSDK_OFFSET(0xA22D020)
#define UNITYENGINE_RANDOM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA22D060)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET UNITYSDK_OFFSET(0xA22D0A0)
#define UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0xA22D140)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0xA22D180)
#define UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA22CED0)
#define UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA22CF50)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA22D100)

namespace UnityEngine
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 31125;

	class Random : public Il2CppObject
	{
	public:
		::System::Void InitState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_INITSTATE_OFFSET))(arg, nullptr);
		}

		State* get_state()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_state(State* arg)
		{
			((::System::Void(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Single Range(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Range(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 RandomRangeInt(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_insideUnitSphere()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET))(nullptr);
		}

		::System::Void GetRandomUnitCircle(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_insideUnitCircle()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET))(nullptr);
		}

		::System::Void get_state_Injected(State&* arg)
		{
			((::System::Void(*)(State&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_state_Injected(State&* arg)
		{
			((::System::Void(*)(State&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_insideUnitSphere_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

