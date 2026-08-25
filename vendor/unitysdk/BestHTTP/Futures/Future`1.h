#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Futures { class FutureState; }
namespace BestHTTP::Futures { class FutureErrorCallback; }

#define BESTHTTP_FUTURES_FUTURE`1_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ASSIGN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FLUSHCOMPLATIONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ASSIGNIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FAIL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FLUSHERRORCALLBACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_BEGINPROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FLUSHSUCCESSCALLBACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_CLEARCALLBACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FAILIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ASSIGNITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_ONITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_FINISH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURE`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Futures
{
	inline static constexpr unsigned int Future`1_TypeDefinitionIndex = 23339;

	class Future`1 : public Il2CppObject
	{
	public:
		::BestHTTP::Futures::FutureState* _state; // 0x0
		Il2CppObject* _value; // 0x0
		::System::Exception* _error; // 0x0
		Il2CppObject* _processFunc; // 0x0
		Il2CppObject* _itemCallbacks; // 0x0
		Il2CppObject* _successCallbacks; // 0x0
		Il2CppObject* _errorCallbacks; // 0x0
		Il2CppObject* _complationCallbacks; // 0x0

		::System::Void ThreadFunc(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_THREADFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void Assign(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ASSIGN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSuccess(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ONSUCCESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void FlushComplationCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FLUSHCOMPLATIONCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void AssignImpl(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ASSIGNIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void Fail(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FAIL_OFFSET))(arg, nullptr);
		}

		::System::Void FlushErrorCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FLUSHERRORCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void BeginProcess(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_BEGINPROCESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Process(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void FlushSuccessCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FLUSHSUCCESSCALLBACKS_OFFSET))(nullptr);
		}

		Il2CppObject* OnError(::BestHTTP::Futures::FutureErrorCallback* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::Futures::FutureErrorCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* OnComplete(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_CLEARCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void FailImpl(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FAILIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void AssignItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ASSIGNITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnItem(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_ONITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_FINISH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::Futures::FutureState* get_state()
		{
			return (return (::BestHTTP::Futures::FutureState*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURE`1_GET_STATE_OFFSET))(nullptr);
		}

	};
}

