#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SendMessageOptions; }

namespace UnityEngine
{
	inline static constexpr unsigned int SendMessageOptions_TypeDefinitionIndex = 30932;

	class SendMessageOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SendMessageOptions* RequireReceiver; // 0x0
		::UnityEngine::SendMessageOptions* DontRequireReceiver; // 0x0

	};
}

