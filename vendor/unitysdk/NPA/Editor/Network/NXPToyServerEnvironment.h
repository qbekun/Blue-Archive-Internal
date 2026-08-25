#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPServerEnvironmentType; }

#define NPA_EDITOR_NETWORK_NXPTOYSERVERENVIRONMENT_GET_SERVERENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9C1CF80)
#define NPA_EDITOR_NETWORK_NXPTOYSERVERENVIRONMENT_SET_SERVERENVIRONMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9C1CFC0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyServerEnvironment_TypeDefinitionIndex = 26648;

	class NXPToyServerEnvironment : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPServerEnvironmentType* serverEnvironmentType; // 0x0

		::NPA::Editor::Network::NXPServerEnvironmentType* get_ServerEnvironmentType()
		{
			return (return (::NPA::Editor::Network::NXPServerEnvironmentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYSERVERENVIRONMENT_GET_SERVERENVIRONMENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ServerEnvironmentType(::NPA::Editor::Network::NXPServerEnvironmentType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPServerEnvironmentType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYSERVERENVIRONMENT_SET_SERVERENVIRONMENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

