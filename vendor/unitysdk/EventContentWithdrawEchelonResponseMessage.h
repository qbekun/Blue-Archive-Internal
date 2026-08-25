#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F77930)
#define EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F77970)
#define EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F77980)

	inline static constexpr unsigned int EventContentWithdrawEchelonResponseMessage_TypeDefinitionIndex = 2552;

	class EventContentWithdrawEchelonResponseMessage : public Il2CppObject
	{
	public:
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_GET_UNITVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

	};

