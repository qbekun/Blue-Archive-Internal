#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushErrorCode; }

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushErrorCode_TypeDefinitionIndex = 26558;

	class NXPPushErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Push::NXPPushErrorCode* UnKnownError; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* UnSupportedVersionError; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* NetworkError; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* InternalParseError; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* DeviceTokenNotExist; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* PushSettingNightPushViolation; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* ParameterInvalid; // 0x0
		::NPA::Editor::Push::NXPPushErrorCode* NotRegisteredNpsn; // 0x0

	};
}

