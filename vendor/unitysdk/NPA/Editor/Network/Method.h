#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class Method; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int Method_TypeDefinitionIndex = 26628;

	class Method : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::Method* GET; // 0x0
		::NPA::Editor::Network::Method* POST; // 0x0
		::NPA::Editor::Network::Method* PUT; // 0x0
		::NPA::Editor::Network::Method* DELETE; // 0x0
		::NPA::Editor::Network::Method* HEAD; // 0x0
		::NPA::Editor::Network::Method* OPTIONS; // 0x0
		::NPA::Editor::Network::Method* PATCH; // 0x0

	};
}

