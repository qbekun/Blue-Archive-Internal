#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyCryptType; }

#define NPA_EDITOR_NETWORK_NXTOYBOLTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1FF20)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXToyBoltRequest_TypeDefinitionIndex = 26679;

	class NXToyBoltRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Network::NXPToyCryptType* arg, ::NPA::Editor::Network::NXPToyCryptType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyCryptType*, ::NPA::Editor::Network::NXPToyCryptType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXTOYBOLTREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

