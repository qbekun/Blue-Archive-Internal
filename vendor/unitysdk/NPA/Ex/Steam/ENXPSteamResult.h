#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamResult; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamResult_TypeDefinitionIndex = 26001;

	class ENXPSteamResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNone; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultOK; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultFail; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoConnection; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidPassword; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLoggedInElsewhere; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidProtocolVer; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidParam; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultFileNotFound; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultBusy; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidState; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidName; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidEmail; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultDuplicateName; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccessDenied; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTimeout; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultBanned; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountNotFound; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidSteamID; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultServiceUnavailable; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNotLoggedOn; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPending; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultEncryptionFailure; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInsufficientPrivilege; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLimitExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRevoked; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultExpired; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAlreadyRedeemed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultDuplicateRequest; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAlreadyOwned; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIPNotFound; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPersistFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLockingFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLogonSessionReplaced; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultConnectFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultHandshakeFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIOFailure; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRemoteDisconnect; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultShoppingCartNotFound; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultBlocked; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIgnored; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoMatch; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountDisabled; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultServiceReadOnly; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountNotFeatured; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAdministratorOK; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultContentVersion; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTryAnotherCM; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPasswordRequiredToKickSession; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAlreadyLoggedInElsewhere; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultSuspended; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultCancelled; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultDataCorruption; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultDiskFull; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRemoteCallFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPasswordUnset; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultExternalAccountUnlinked; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPSNTicketInvalid; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultExternalAccountAlreadyLinked; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRemoteFileConflict; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIllegalPassword; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultSameAsPreviousValue; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLogonDenied; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultCannotUseOldPassword; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidLoginAuthCode; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLogonDeniedNoMail; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultHardwareNotCapableOfIPT; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIPTInitError; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultParentalControlRestricted; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultFacebookQueryError; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultExpiredLoginAuthCode; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIPLoginRestrictionFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLockedDown; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLogonDeniedVerifiedEmailRequired; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoMatchingURL; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultBadResponse; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRequirePasswordReEntry; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultValueOutOfRange; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultUnexpectedError; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultDisabled; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidCEGSubmission; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRestrictedDevice; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRegionLocked; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRateLimitExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLoginDeniedNeedTwoFactor; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultItemDeleted; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLoginDeniedThrottle; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTwoFactorCodeMismatch; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTwoFactorActivationCodeMismatch; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountAssociatedToMultiplePartners; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNotModified; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoMobileDevice; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTimeNotSynced; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultSmsCodeFailed; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountLimitExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountActivityLimitExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultPhoneActivityLimitExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultRefundToWallet; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultEmailSendFailure; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNotSettled; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNeedCaptcha; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultGSLTDenied; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultGSOwnerDenied; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidItemType; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultIPBanned; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultGSLTExpired; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInsufficientFunds; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultTooManyPending; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoSiteLicensesFound; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultWGNetworkSendExceeded; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountNotFriends; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLimitedUserAccount; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultCantRemoveItem; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultAccountDeleted; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultExistingUserCancelledLicense; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultCommunityCooldown; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoLauncherSpecified; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultMustAgreeToSSA; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultLauncherMigrated; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultSteamRealmMismatch; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultInvalidSignature; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultParseFailure; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* k_EResultNoVerifiedPhone; // 0x0

	};
}

