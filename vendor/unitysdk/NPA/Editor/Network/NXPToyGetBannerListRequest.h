#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETBANNERLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C215D0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetBannerListRequest_TypeDefinitionIndex = 26661;

	class NXPToyGetBannerListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETBANNERLISTREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

