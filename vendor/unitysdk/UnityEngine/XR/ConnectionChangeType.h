#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class ConnectionChangeType; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int ConnectionChangeType_TypeDefinitionIndex = 37591;

	class ConnectionChangeType : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::UnityEngine::XR::ConnectionChangeType* Connected; // 0x0
		::UnityEngine::XR::ConnectionChangeType* Disconnected; // 0x0
		::UnityEngine::XR::ConnectionChangeType* ConfigChange; // 0x0

	};
}

