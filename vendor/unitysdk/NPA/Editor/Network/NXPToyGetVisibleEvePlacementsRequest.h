#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETVISIBLEEVEPLACEMENTSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C22EA0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetVisibleEvePlacementsRequest_TypeDefinitionIndex = 26672;

	class NXPToyGetVisibleEvePlacementsRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETVISIBLEEVEPLACEMENTSREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

