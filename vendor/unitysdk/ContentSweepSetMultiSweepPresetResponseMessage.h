#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ContentSweepSetMultiSweepPresetResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F37090)
#define CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F36D70)
#define CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F370A0)

	inline static constexpr unsigned int ContentSweepSetMultiSweepPresetResponseMessage_TypeDefinitionIndex = 2274;

	class ContentSweepSetMultiSweepPresetResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

