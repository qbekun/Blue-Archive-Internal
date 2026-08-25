#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_LASTENTERSTAGEECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xF14790)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_SET_LASTENTERSTAGEECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xF147A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF147B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF147C0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF147D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF147E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterSubStageRequest_TypeDefinitionIndex = 11416;

	class CampaignEnterSubStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _LastEnterStageEchelonNumber_k__BackingField; // 0x48

		::System::Int64 get_LastEnterStageEchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_LASTENTERSTAGEECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_LastEnterStageEchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_SET_LASTENTERSTAGEECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

