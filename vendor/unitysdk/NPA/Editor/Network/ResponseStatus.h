#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class ResponseStatus; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int ResponseStatus_TypeDefinitionIndex = 26629;

	class ResponseStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::ResponseStatus* None; // 0x0
		::NPA::Editor::Network::ResponseStatus* Completed; // 0x0
		::NPA::Editor::Network::ResponseStatus* Error; // 0x0
		::NPA::Editor::Network::ResponseStatus* TimedOut; // 0x0
		::NPA::Editor::Network::ResponseStatus* Aborted; // 0x0

	};
}

