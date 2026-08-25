#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_IMSERRORMESSAGE_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C80D00)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int IMSErrorMessage_TypeDefinitionIndex = 27002;

	class IMSErrorMessage : public Il2CppObject
	{
	public:
		::System::String* GetMessage(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_IMSERRORMESSAGE_GETMESSAGE_OFFSET))(arg, str, nullptr);
		}

	};
}

