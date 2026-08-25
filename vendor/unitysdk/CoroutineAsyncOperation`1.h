#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }

#define COROUTINEASYNCOPERATION`1_WRAPPER_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COROUTINEASYNCOPERATION`1_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CoroutineAsyncOperation`1_TypeDefinitionIndex = 9170;

	class CoroutineAsyncOperation`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Empty; // 0x0
		::UnityEngine::Coroutine* coroutine; // 0x0
		::UnityEngine::MonoBehaviour* owner; // 0x0
		::System::Boolean isDone; // 0x0
		Il2CppObject* _Result_k__BackingField; // 0x0

		::System::Collections::IEnumerator* Wrapper(::System::Collections::IEnumerator* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_WRAPPER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_STOP_OFFSET))(nullptr);
		}

		::System::Void set_Result(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		Il2CppObject* Create(::UnityEngine::MonoBehaviour* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::MonoBehaviour*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Result()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION`1_GET_ISDONE_OFFSET))(nullptr);
		}

	};

