#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class HubConnection; }

#define BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_GET_STREAMINGIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_GET_HUB_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_UPLOADPARAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int IUPloadItemController`1_TypeDefinitionIndex = 21451;

	class IUPloadItemController`1 : public Il2CppObject
	{
	public:
		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_CANCEL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StreamingIDs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_GET_STREAMINGIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::HubConnection* get_Hub()
		{
			return (return (::BestHTTP::SignalRCore::HubConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_GET_HUB_OFFSET))(nullptr);
		}

		::System::Void UploadParam(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IUPLOADITEMCONTROLLER`1_UPLOADPARAM_OFFSET))(str, arg, nullptr);
		}

	};
}

