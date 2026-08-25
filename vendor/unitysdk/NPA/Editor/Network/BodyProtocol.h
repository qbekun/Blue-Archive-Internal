#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class BodyProtocol; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int BodyProtocol_TypeDefinitionIndex = 26623;

	class BodyProtocol : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::BodyProtocol* NONE; // 0x0
		::NPA::Editor::Network::BodyProtocol* FORM_DATA; // 0x0
		::NPA::Editor::Network::BodyProtocol* X_WWW_FORM_URLENCODED; // 0x0
		::NPA::Editor::Network::BodyProtocol* RAW; // 0x0
		::NPA::Editor::Network::BodyProtocol* BINARY; // 0x0
		::NPA::Editor::Network::BodyProtocol* GRAPHQL; // 0x0

	};
}

