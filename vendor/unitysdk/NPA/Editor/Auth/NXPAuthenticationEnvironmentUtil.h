#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPAuthenticationEnvironment; }

#define NPA_EDITOR_AUTH_NXPAUTHENTICATIONENVIRONMENTUTIL_EXTRACTAUTHENTICATIONENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C84300)
#define NPA_EDITOR_AUTH_NXPAUTHENTICATIONENVIRONMENTUTIL_CONVERTAUTHENVTOSTRING_OFFSET UNITYSDK_OFFSET(0x9C84610)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAuthenticationEnvironmentUtil_TypeDefinitionIndex = 27020;

	class NXPAuthenticationEnvironmentUtil : public Il2CppObject
	{
	public:
		::System::String* AUTH_ENV_UNKNOWN; // 0x0
		::System::String* AUTH_ENV_TOY; // 0x0
		::System::String* AUTH_ENV_KRPC; // 0x0
		::System::String* AUTH_ENV_JPPC; // 0x0
		::System::String* AUTH_ENV_ARENA; // 0x0

		::NPA::NXPAuthenticationEnvironment* ExtractAuthenticationEnvironment(::System::String* str)
		{
			return (return (::NPA::NXPAuthenticationEnvironment*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHENTICATIONENVIRONMENTUTIL_EXTRACTAUTHENTICATIONENVIRONMENT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertAuthEnvToString(::NPA::NXPAuthenticationEnvironment* arg)
		{
			return (return (::System::String*(*)(::NPA::NXPAuthenticationEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHENTICATIONENVIRONMENTUTIL_CONVERTAUTHENVTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

