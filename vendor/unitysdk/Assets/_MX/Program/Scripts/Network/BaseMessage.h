#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_BASEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE24BE0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int BaseMessage_TypeDefinitionIndex = 10414;

	class BaseMessage : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_BASEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

