#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40820)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40830)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40840)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40850)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40860)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestTakeEventObjectRequest_TypeDefinitionIndex = 11557;

	class ConquestTakeEventObjectRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

