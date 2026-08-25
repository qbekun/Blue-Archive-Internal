#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ResetableContentGetResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RESETABLECONTENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA9CF0)
#define RESETABLECONTENTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA9D00)
#define RESETABLECONTENTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9D10)

	inline static constexpr unsigned int ResetableContentResponseMessage_TypeDefinitionIndex = 2851;

	class ResetableContentResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ResetableContentGetResponse* _response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ResetableContentGetResponse* get_response()
		{
			return ((::MX::NetworkProtocol::ResetableContentGetResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_response(::MX::NetworkProtocol::ResetableContentGetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResetableContentGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ResetableContentGetResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ResetableContentGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

