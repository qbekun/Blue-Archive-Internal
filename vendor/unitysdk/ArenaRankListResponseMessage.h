#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaRankListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENARANKLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0D280)
#define ARENARANKLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CFE0)
#define ARENARANKLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0D290)

	inline static constexpr unsigned int ArenaRankListResponseMessage_TypeDefinitionIndex = 2010;

	class ArenaRankListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaRankListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ArenaRankListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaRankListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaRankListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaRankListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ArenaRankListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaRankListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

