#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSTOPWEBVIEWSERVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7270)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestStopWebViewServer_TypeDefinitionIndex = 25482;

	class RequestStopWebViewServer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSTOPWEBVIEWSERVER_.CTOR_OFFSET))(nullptr);
		}

	};
}

