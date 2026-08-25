#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1DF60)
#define CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F1DFA0)
#define CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F1DFB0)

	inline static constexpr unsigned int CampaignWithdrawEchelonResponseMessage_TypeDefinitionIndex = 2115;

	class CampaignWithdrawEchelonResponseMessage : public Il2CppObject
	{
	public:
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET))(nullptr);
		}

	};

