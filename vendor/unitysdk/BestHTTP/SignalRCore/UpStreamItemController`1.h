#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::Futures { class FutureState; }
namespace BestHTTP::Futures { class FutureErrorCallback; }

#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GETUPLOADCHANNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_STREAMINGIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_HUB_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_FINISH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_UPLOADPARAM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int UpStreamItemController`1_TypeDefinitionIndex = 21453;

	class UpStreamItemController`1 : public Il2CppObject
	{
	public:
		::System::Int64 invocationId; // 0x0
		::Il2CppArray<::System::Object*>* streamingIds; // 0x0
		::BestHTTP::SignalRCore::HubConnection* hubConnection; // 0x0
		Il2CppObject* future; // 0x0
		::System::Boolean _IsFinished_k__BackingField; // 0x0
		::System::Boolean _IsCanceled_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* streams; // 0x0

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_IsCanceled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SET_ISCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ISCANCELED_OFFSET))(nullptr);
		}

		Il2CppObject* GetUploadChannel(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GETUPLOADCHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_SET_ISFINISHED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StreamingIDs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_STREAMINGIDS_OFFSET))(nullptr);
		}

		::BestHTTP::Futures::FutureState* get_state()
		{
			return (return (::BestHTTP::Futures::FutureState*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::HubConnection* get_Hub()
		{
			return (return (::BestHTTP::SignalRCore::HubConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_HUB_OFFSET))(nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_FINISH_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_CANCEL_OFFSET))(nullptr);
		}

		Il2CppObject* OnComplete(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinished()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ISFINISHED_OFFSET))(nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void UploadParam(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_UPLOADPARAM_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::HubConnection* arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::System::Int64, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* OnItem(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSuccess(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONSUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* OnError(::BestHTTP::Futures::FutureErrorCallback* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::Futures::FutureErrorCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPSTREAMITEMCONTROLLER`1_ONERROR_OFFSET))(arg, nullptr);
		}

	};
}

