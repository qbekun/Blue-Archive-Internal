#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ContentSweepMultiSweepPresetListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F36040)
#define CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F36050)
#define CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F35D80)

	inline static constexpr unsigned int ContentSweepMultiSweepPresetListResponseMessage_TypeDefinitionIndex = 2268;

	class ContentSweepMultiSweepPresetListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

