#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class UploadHandlerType; }

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int UploadHandlerType_TypeDefinitionIndex = 26630;

	class UploadHandlerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::UploadHandlerType* Default; // 0x0
		::NPA::Editor::Network::UploadHandlerType* File; // 0x0
		::NPA::Editor::Network::UploadHandlerType* Raw; // 0x0

	};
}

