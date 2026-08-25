#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NetworkConnectionState; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NetworkConnectionState_TypeDefinitionIndex = 25921;

	class NetworkConnectionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::InfaceSDK::Component::NetworkConnectionState* NCS_Invalid; // 0x0
		::NPA::InfaceSDK::Component::NetworkConnectionState* NCS_Disconnected; // 0x0
		::NPA::InfaceSDK::Component::NetworkConnectionState* NCS_Connected; // 0x0

	};
}

