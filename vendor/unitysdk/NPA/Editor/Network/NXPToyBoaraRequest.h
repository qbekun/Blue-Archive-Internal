#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1F810)
#define NPA_EDITOR_NETWORK_NXPTOYBOARAREQUEST_GETBOARASENDERIDPREFIX_OFFSET UNITYSDK_OFFSET(0x9C1FA10)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyBoaraRequest_TypeDefinitionIndex = 26652;

	class NXPToyBoaraRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* GetBoaraSenderIdPrefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAREQUEST_GETBOARASENDERIDPREFIX_OFFSET))(nullptr);
		}

	};
}

