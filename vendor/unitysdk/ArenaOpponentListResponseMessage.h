#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaOpponentListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENAOPPONENTLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0CD00)
#define ARENAOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0CD10)
#define ARENAOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CA50)

	inline static constexpr unsigned int ArenaOpponentListResponseMessage_TypeDefinitionIndex = 2007;

	class ArenaOpponentListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaOpponentListResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::ArenaOpponentListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaOpponentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ArenaOpponentListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaOpponentListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaOpponentListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaOpponentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

