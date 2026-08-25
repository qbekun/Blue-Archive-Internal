#pragma once
#include "../unitysdk.h"

namespace FlatData { class ArenaSimulatorServer; }

namespace FlatData
{
	inline static constexpr unsigned int ArenaSimulatorServer_TypeDefinitionIndex = 9409;

	class ArenaSimulatorServer : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ArenaSimulatorServer* Preset; // 0x0
		::FlatData::ArenaSimulatorServer* Live; // 0x0
		::FlatData::ArenaSimulatorServer* Dev; // 0x0
		::FlatData::ArenaSimulatorServer* QA; // 0x0

	};
}

