#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_FINISH_OFFSET UNITYSDK_OFFSET(0xE25570)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_STOP_OFFSET UNITYSDK_OFFSET(0xE25720)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE25760)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE25770)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE25780)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int AbstractNetworkTask_TypeDefinitionIndex = 10383;

	class AbstractNetworkTask : public Il2CppObject
	{
	public:
		::Assets::_MX::Program::Scripts::Network::TaskState* _State_k__BackingField; // 0x18

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_FINISH_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_STOP_OFFSET))(nullptr);
		}

		::System::Void set_State(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_EXECUTE_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::TaskState* get_State()
		{
			return ((::Assets::_MX::Program::Scripts::Network::TaskState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_ABSTRACTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};
}

