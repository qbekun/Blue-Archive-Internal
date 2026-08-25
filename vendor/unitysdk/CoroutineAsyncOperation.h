#pragma once
#include "unitysdk.h"

class CoroutineAsyncOperation;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }

#define COROUTINEASYNCOPERATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xCDB3E0)
#define COROUTINEASYNCOPERATION_STOP_OFFSET UNITYSDK_OFFSET(0xCDB580)
#define COROUTINEASYNCOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB460)
#define COROUTINEASYNCOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0xCDB650)
#define COROUTINEASYNCOPERATION_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0xCDB660)
#define COROUTINEASYNCOPERATION_WRAPPER_OFFSET UNITYSDK_OFFSET(0xCDB5C0)

	inline static constexpr unsigned int CoroutineAsyncOperation_TypeDefinitionIndex = 9168;

	class CoroutineAsyncOperation : public Il2CppObject
	{
	public:
		CoroutineAsyncOperation* Empty; // 0x0
		::UnityEngine::Coroutine* coroutine; // 0x10
		::UnityEngine::MonoBehaviour* owner; // 0x18
		::System::Boolean isDone; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_STOP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, ::System::Collections::IEnumerator* arg2)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_GET_ISDONE_OFFSET))(nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wrapper(::System::Collections::IEnumerator* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEASYNCOPERATION_WRAPPER_OFFSET))(arg, nullptr);
		}

	};

