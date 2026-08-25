#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOTACTICRESULTRESPONSEMESSAGE_SET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x1F9B780)
#define SCENARIOTACTICRESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B790)
#define SCENARIOTACTICRESULTRESPONSEMESSAGE_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x1F9B7C0)

	inline static constexpr unsigned int ScenarioTacticResultResponseMessage_TypeDefinitionIndex = 2784;

	class ScenarioTacticResultResponseMessage : public Il2CppObject
	{
	public:
		::System::Boolean _IsPlayerWin_k__BackingField; // 0x20

		::System::Void set_IsPlayerWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTACTICRESULTRESPONSEMESSAGE_SET_ISPLAYERWIN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTACTICRESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTACTICRESULTRESPONSEMESSAGE_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

	};

