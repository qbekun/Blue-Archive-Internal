#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftShiftingBeginProcessResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F549A0)
#define CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F549B0)
#define CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F549F0)

	inline static constexpr unsigned int CraftShiftingBeginProcessResponseMessage_TypeDefinitionIndex = 2315;

	class CraftShiftingBeginProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftShiftingBeginProcessResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftShiftingBeginProcessResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftShiftingBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftShiftingBeginProcessResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftShiftingBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CraftShiftingBeginProcessResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftShiftingBeginProcessResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

