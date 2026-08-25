#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class NetworkReachability; }

namespace UnityEngine
{
	inline static constexpr unsigned int NetworkReachability_TypeDefinitionIndex = 30947;

	class NetworkReachability : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::NetworkReachability* NotReachable; // 0x0
		::UnityEngine::NetworkReachability* ReachableViaCarrierDataNetwork; // 0x0
		::UnityEngine::NetworkReachability* ReachableViaLocalAreaNetwork; // 0x0

	};
}

