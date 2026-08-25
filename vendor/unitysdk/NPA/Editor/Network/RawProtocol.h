#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class RawProtocol; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int RawProtocol_TypeDefinitionIndex = 26626;

	class RawProtocol : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::RawProtocol* TEXT; // 0x0
		::NPA::Editor::Network::RawProtocol* JAVASCRIPT; // 0x0
		::NPA::Editor::Network::RawProtocol* JSON; // 0x0
		::NPA::Editor::Network::RawProtocol* HTML; // 0x0
		::NPA::Editor::Network::RawProtocol* XML; // 0x0

	};
}

