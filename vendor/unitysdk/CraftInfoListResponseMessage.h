#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftInfoListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTINFOLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F518A0)
#define CRAFTINFOLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F518E0)
#define CRAFTINFOLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F518F0)

	inline static constexpr unsigned int CraftInfoListResponseMessage_TypeDefinitionIndex = 2296;

	class CraftInfoListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftInfoListResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftInfoListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftInfoListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTINFOLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftInfoListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftInfoListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTINFOLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftInfoListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftInfoListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTINFOLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

