#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class AuthErrorCode; }

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int AuthErrorCode_TypeDefinitionIndex = 27000;

	class AuthErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Auth::AuthErrorCode* ServerTooBusy; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* ConsoleMaintenance; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* Success; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* UsingNpsnUserNeedResolve; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* AuthBannedUser; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* NsrrsBlockIdentityVerification; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* NsrrsCommonBlock; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* WithdrawalProcessingByTheUser; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* InvalidSignUpCredentials; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* VerifyParentalIdentityCancel; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* LoginUserCancel; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* ServiceInformationNotFound; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* UnsupportedEnvironment; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* InvalidQueryParameter; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* CanNotDeleteGlobalAccount; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* UnregisterNexonAccountFailed; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* UnregisterNexonAccountCancel; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* NotUsedGuestUserOrNotLoggedInUser; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* NexonAccountWithdrawalNotSupported; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* ArenaCSPageClosed; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* AgreeTermsCancel; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* LinkingNexonAccountCancel; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* CODE_EXTERNAL_BROWSER_LOGIN_CANCEL; // 0x0
		::NPA::Editor::Auth::AuthErrorCode* InsignIivUserCancel; // 0x0

	};
}

