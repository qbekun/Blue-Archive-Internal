#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class DownloadHandlerType; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int DownloadHandlerType_TypeDefinitionIndex = 26627;

	class DownloadHandlerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::DownloadHandlerType* Default; // 0x0
		::NPA::Editor::Network::DownloadHandlerType* Buffer; // 0x0
		::NPA::Editor::Network::DownloadHandlerType* File; // 0x0
		::NPA::Editor::Network::DownloadHandlerType* Script; // 0x0
		::NPA::Editor::Network::DownloadHandlerType* Texture; // 0x0

	};
}

