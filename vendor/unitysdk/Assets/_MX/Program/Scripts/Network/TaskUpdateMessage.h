#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_TASKUPDATEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2AFA0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int TaskUpdateMessage_TypeDefinitionIndex = 10415;

	class TaskUpdateMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_TASKUPDATEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

