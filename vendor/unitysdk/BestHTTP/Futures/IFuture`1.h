#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Futures { class FutureErrorCallback; }
namespace BestHTTP::Futures { class FutureState; }

#define BESTHTTP_FUTURES_IFUTURE`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_ONITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_IFUTURE`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Futures
{
	inline static constexpr unsigned int IFuture`1_TypeDefinitionIndex = 23335;

	class IFuture`1 : public Il2CppObject
	{
	public:
		Il2CppObject* OnError(::BestHTTP::Futures::FutureErrorCallback* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::Futures::FutureErrorCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_ONERROR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSuccess(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_ONSUCCESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnComplete(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_GET_VALUE_OFFSET))(nullptr);
		}

		Il2CppObject* OnItem(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_ONITEM_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_GET_ERROR_OFFSET))(nullptr);
		}

		::BestHTTP::Futures::FutureState* get_state()
		{
			return (return (::BestHTTP::Futures::FutureState*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_IFUTURE`1_GET_STATE_OFFSET))(nullptr);
		}

	};
}

