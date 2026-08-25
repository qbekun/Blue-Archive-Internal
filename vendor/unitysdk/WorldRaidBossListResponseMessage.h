#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WorldRaidBossListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define WORLDRAIDBOSSLISTRESPONSEMESSAGE_GET_ISSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1FB0B10)
#define WORLDRAIDBOSSLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FB0B20)
#define WORLDRAIDBOSSLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0670)

	inline static constexpr unsigned int WorldRaidBossListResponseMessage_TypeDefinitionIndex = 2893;

	class WorldRaidBossListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WorldRaidBossListResponse* _Response_k__BackingField; // 0x20
		::System::Boolean _IsShowToast_k__BackingField; // 0x28

		::System::Boolean get_IsShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTRESPONSEMESSAGE_GET_ISSHOWTOAST_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WorldRaidBossListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::WorldRaidBossListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::WorldRaidBossListResponse* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::WorldRaidBossListResponse*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBOSSLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

