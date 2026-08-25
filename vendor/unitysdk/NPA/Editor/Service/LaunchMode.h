#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Service { class LaunchMode; }

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int LaunchMode_TypeDefinitionIndex = 26508;

	class LaunchMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Service::LaunchMode* DIRECT; // 0x0
		::NPA::Editor::Service::LaunchMode* NPP; // 0x0
		::NPA::Editor::Service::LaunchMode* TICKET; // 0x0
		::NPA::Editor::Service::LaunchMode* STEAM; // 0x0
		::NPA::Editor::Service::LaunchMode* EPIC; // 0x0
		::NPA::Editor::Service::LaunchMode* XBOX; // 0x0
		::NPA::Editor::Service::LaunchMode* PLAYSTATION; // 0x0
		::NPA::Editor::Service::LaunchMode* SWITCH; // 0x0

	};
}

