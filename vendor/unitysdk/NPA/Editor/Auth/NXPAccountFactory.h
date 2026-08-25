#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::Interface { class Account; }
namespace NPA { class NXPAuthenticationEnvironment; }

#define NPA_EDITOR_AUTH_NXPACCOUNTFACTORY_GETACOUNT_OFFSET UNITYSDK_OFFSET(0x9C80F20)
#define NPA_EDITOR_AUTH_NXPACCOUNTFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C810B0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountFactory_TypeDefinitionIndex = 27006;

	class NXPAccountFactory : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::Interface::Account* GetAcount(::NPA::NXPAuthenticationEnvironment* arg)
		{
			return (return (::NPA::Editor::Auth::Interface::Account*(*)(::NPA::NXPAuthenticationEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTFACTORY_GETACOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

