#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class HostConnectionKey; }

#define BESTHTTP_CORE_IPROTOCOL_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IPROTOCOL_CANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IPROTOCOL_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IPROTOCOL_GET_CONNECTIONKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int IProtocol_TypeDefinitionIndex = 23401;

	class IProtocol : public Il2CppObject
	{
	public:
		::System::Void HandleEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IPROTOCOL_HANDLEEVENTS_OFFSET))(nullptr);
		}

		::System::Void CancellationRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IPROTOCOL_CANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IPROTOCOL_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::BestHTTP::Core::HostConnectionKey* get_ConnectionKey()
		{
			return (return (::BestHTTP::Core::HostConnectionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IPROTOCOL_GET_CONNECTIONKEY_OFFSET))(nullptr);
		}

	};
}

