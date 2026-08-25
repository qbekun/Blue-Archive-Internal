#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETPLATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C22030)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetPlateRequest_TypeDefinitionIndex = 26667;

	class NXPToyGetPlateRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETPLATEREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

