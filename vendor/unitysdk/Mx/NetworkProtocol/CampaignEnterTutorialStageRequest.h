#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF147F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14800)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14810)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14820)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterTutorialStageRequest_TypeDefinitionIndex = 11417;

	class CampaignEnterTutorialStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

