#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF488C0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF488D0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_SET_STEPS_OFFSET UNITYSDK_OFFSET(0xF488E0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF488F0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48900)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_STEPS_OFFSET UNITYSDK_OFFSET(0xF48910)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardMoveRequest_TypeDefinitionIndex = 11881;

	class MiniGameTableBoardMoveRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		Il2CppObject* _Steps_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Steps(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_SET_STEPS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Steps()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVEREQUEST_GET_STEPS_OFFSET))(nullptr);
		}

	};
}

