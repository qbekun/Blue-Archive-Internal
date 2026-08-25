#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF166A0)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xF166B0)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF166C0)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xF166D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanApplicantRequest_TypeDefinitionIndex = 11496;

	class ClanApplicantRequest : public Il2CppObject
	{
	public:
		::System::Int64 _OffSet_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_OffSet()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OffSet(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTREQUEST_SET_OFFSET_OFFSET))(arg, nullptr);
		}

	};
}

