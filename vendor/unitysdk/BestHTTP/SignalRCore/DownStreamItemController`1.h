#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::Futures { class FutureState; }
namespace BestHTTP::Futures { class FutureErrorCallback; }

#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_SET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int DownStreamItemController`1_TypeDefinitionIndex = 21452;

	class DownStreamItemController`1 : public Il2CppObject
	{
	public:
		::System::Int64 invocationId; // 0x0
		::BestHTTP::SignalRCore::HubConnection* hubConnection; // 0x0
		Il2CppObject* future; // 0x0
		::System::Boolean _IsCanceled_k__BackingField; // 0x0

		::System::Exception* get_error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* OnItem(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSuccess(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONSUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsCanceled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_SET_ISCANCELED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Futures::FutureState* get_state()
		{
			return (return (::BestHTTP::Futures::FutureState*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_STATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* OnError(::BestHTTP::Futures::FutureErrorCallback* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::Futures::FutureErrorCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONERROR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnComplete(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_GET_ISCANCELED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::HubConnection* arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_DOWNSTREAMITEMCONTROLLER`1_CANCEL_OFFSET))(nullptr);
		}

	};
}

