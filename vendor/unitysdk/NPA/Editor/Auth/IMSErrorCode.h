#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class IMSErrorCode; }

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int IMSErrorCode_TypeDefinitionIndex = 27001;

	class IMSErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Auth::IMSErrorCode* IMSUnknownError; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSInternalAPIError; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSInvalidParameter; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSUnauthorized; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSNotFoundGUID; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowInvalidGID; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowNotExistsUser; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowInvalidLocalCredential; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowInvalidGameToken; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowInvalidCode; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowUIDMismatch; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowSignupRestricted; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowVerifyCodeRestricted; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowIssueCodeRestricted; // 0x0
		::NPA::Editor::Auth::IMSErrorCode* IMSPlayNowInvalidTicket; // 0x0

	};
}

