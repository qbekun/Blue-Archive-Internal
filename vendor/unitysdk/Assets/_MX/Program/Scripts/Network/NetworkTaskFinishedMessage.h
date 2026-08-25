#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class AbstractNetworkTask; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKFINISHEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE25640)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKFINISHEDMESSAGE_GET_TASK_OFFSET UNITYSDK_OFFSET(0xE25790)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int NetworkTaskFinishedMessage_TypeDefinitionIndex = 10384;

	class NetworkTaskFinishedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* _Task_k__BackingField; // 0x18

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKFINISHEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* get_Task()
		{
			return ((::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKFINISHEDMESSAGE_GET_TASK_OFFSET))(nullptr);
		}

	};
}

