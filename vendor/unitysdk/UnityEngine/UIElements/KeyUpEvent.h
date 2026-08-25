#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_KEYUPEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1C10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyUpEvent_TypeDefinitionIndex = 30487;

	class KeyUpEvent : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYUPEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

