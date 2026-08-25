#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_SET_ECHELONSETTINGTIME_OFFSET UNITYSDK_OFFSET(0xF113A0)
#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF113B0)
#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF113C0)
#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_GET_ECHELONSETTINGTIME_OFFSET UNITYSDK_OFFSET(0xF113D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSyncEchelonSettingTimeResponse_TypeDefinitionIndex = 11304;

	class ArenaSyncEchelonSettingTimeResponse : public Il2CppObject
	{
	public:
		::System::DateTime* _EchelonSettingTime_k__BackingField; // 0x50

		::System::Void set_EchelonSettingTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_SET_ECHELONSETTINGTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::DateTime* get_EchelonSettingTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMERESPONSE_GET_ECHELONSETTINGTIME_OFFSET))(nullptr);
		}

	};
}

