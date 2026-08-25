#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushErrorCode; }

#define NPA_EDITOR_PUSH_NXPPUSHERRORCODEEXTENSION_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9C08EC0)
#define NPA_EDITOR_PUSH_NXPPUSHERRORCODEEXTENSION_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C08ED0)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushErrorCodeExtension_TypeDefinitionIndex = 26559;

	class NXPPushErrorCodeExtension : public Il2CppObject
	{
	public:
		::System::Int32 getValue(::NPA::Editor::Push::NXPPushErrorCode* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::Push::NXPPushErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHERRORCODEEXTENSION_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* getMessage(::NPA::Editor::Push::NXPPushErrorCode* arg)
		{
			return (return (::System::String*(*)(::NPA::Editor::Push::NXPPushErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHERRORCODEEXTENSION_GETMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

