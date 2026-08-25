#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_SET_ERROR_OFFSET UNITYSDK_OFFSET(0xE2AFE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2AFF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xE2B030)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int NetworkResponseMessage_TypeDefinitionIndex = 10416;

	class NetworkResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::NetworkProtocol::WebAPIErrorCode* _Error_k__BackingField; // 0x18

		::System::Void set_Error(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_SET_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_Error()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKRESPONSEMESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

	};
}

