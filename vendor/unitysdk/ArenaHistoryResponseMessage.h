#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaHistoryResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENAHISTORYRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0C720)
#define ARENAHISTORYRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0C730)
#define ARENAHISTORYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C3D0)

	inline static constexpr unsigned int ArenaHistoryResponseMessage_TypeDefinitionIndex = 2004;

	class ArenaHistoryResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaHistoryResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ArenaHistoryResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaHistoryResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ArenaHistoryResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaHistoryResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaHistoryResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaHistoryResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

