#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETGAMEINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C28CD0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetGameInfoRequest_TypeDefinitionIndex = 26712;

	class NXPToyGetGameInfoRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETGAMEINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

