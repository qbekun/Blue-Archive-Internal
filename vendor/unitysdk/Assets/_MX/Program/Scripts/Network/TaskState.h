#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int TaskState_TypeDefinitionIndex = 10382;

	class TaskState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Assets::_MX::Program::Scripts::Network::TaskState* None; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Started; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Running; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Error; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Stopped; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Failed; // 0x0
		::Assets::_MX::Program::Scripts::Network::TaskState* Success; // 0x0

	};
}

