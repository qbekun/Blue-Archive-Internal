#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaSyncEchelonSettingTimeResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0DE00)
#define ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DB50)
#define ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F0DE10)

	inline static constexpr unsigned int ArenaSyncEchelonSettingTimeResponseMessage_TypeDefinitionIndex = 2015;

	class ArenaSyncEchelonSettingTimeResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

