#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F9BE00)
#define SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F9BE10)
#define SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BE20)

	inline static constexpr unsigned int ScenarioWithdrawEchelonResponseMessage_TypeDefinitionIndex = 2787;

	class ScenarioWithdrawEchelonResponseMessage : public Il2CppObject
	{
	public:
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x20

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

