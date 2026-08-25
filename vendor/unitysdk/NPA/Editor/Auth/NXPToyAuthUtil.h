#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_NXPTOYAUTHUTIL_MAKERECOVERYPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C9CF60)
#define NPA_EDITOR_AUTH_NXPTOYAUTHUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C9D0B0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPToyAuthUtil_TypeDefinitionIndex = 27117;

	class NXPToyAuthUtil : public Il2CppObject
	{
	public:
		::System::String* MakeRecoveryPopupMessage(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHUTIL_MAKERECOVERYPOPUPMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

