#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }

#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_SET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET_ROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET__TARGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Client::System
{
	inline static constexpr unsigned int CoroutineWithData`1_TypeDefinitionIndex = 37699;

	class CoroutineWithData`1 : public Il2CppObject
	{
	public:
		::UnityEngine::Coroutine* _Routine_k__BackingField; // 0x0
		Il2CppObject* _Result_k__BackingField; // 0x0
		::System::Collections::IEnumerator* __target_k__BackingField; // 0x0

		::System::Void set_Routine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_SET_ROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Result(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Run()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_RUN_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_Routine()
		{
			return (return (::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET_ROUTINE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Result()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, ::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* get__target()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CLIENT_SYSTEM_COROUTINEWITHDATA`1_GET__TARGET_OFFSET))(nullptr);
		}

	};
}

