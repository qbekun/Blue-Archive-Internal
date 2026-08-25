#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_NEXONLOGINDIALOGRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CAEB60)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NexonLoginDialogResult_TypeDefinitionIndex = 27171;

	class NexonLoginDialogResult : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x10
		::System::String* errorText; // 0x18
		::System::String* errorDetail; // 0x20
		::System::String* nexonID; // 0x28
		::System::String* nexonPW; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NEXONLOGINDIALOGRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

