#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_UTIL_NXPIDENTIFIERUTIL_GENERATEOTPAUTHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9DBCF30)
#define NPA_EDITOR_UTIL_NXPIDENTIFIERUTIL_GETOTPDEVICEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9DBD0B0)

namespace NPA::Editor::Util
{
	inline static constexpr unsigned int NXPIdentifierUtil_TypeDefinitionIndex = 26424;

	class NXPIdentifierUtil : public Il2CppObject
	{
	public:
		::System::String* GenerateOtpAuthIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPIDENTIFIERUTIL_GENERATEOTPAUTHIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* GetOtpDeviceIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPIDENTIFIERUTIL_GETOTPDEVICEIDENTIFIER_OFFSET))(nullptr);
		}

	};
}

