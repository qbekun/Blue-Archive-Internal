#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkBase; }
namespace NPA::Editor { class IExternalPlatform; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINK_SPAWN_OFFSET UNITYSDK_OFFSET(0x9C6D120)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLink_TypeDefinitionIndex = 26941;

	class NXPAccountLink : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPAccountLinkBase* Spawn(::NPA::Editor::IExternalPlatform* arg)
		{
			return (return (::NPA::Editor::Auth::NXPAccountLinkBase*(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINK_SPAWN_OFFSET))(arg, nullptr);
		}

	};
}

