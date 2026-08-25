#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXError; }

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXError_TypeDefinitionIndex = 37544;

	class NXError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Nexon::Pub::NXError* NXErrorTimeout; // 0x0
		::Nexon::Pub::NXError* NXErrorConnectionError; // 0x0
		::Nexon::Pub::NXError* NXErrorAuthFail; // 0x0
		::Nexon::Pub::NXError* NXErrorServerFailed; // 0x0
		::Nexon::Pub::NXError* NXErrorHTTPURLConnectionError; // 0x0
		::Nexon::Pub::NXError* NXErrorUserCancelled; // 0x0
		::Nexon::Pub::NXError* NXErrorWrongFormat; // 0x0
		::Nexon::Pub::NXError* NXErrorServiceDenied; // 0x0
		::Nexon::Pub::NXError* NXErrorNotEnoughSpace; // 0x0
		::Nexon::Pub::NXError* NXErrorUnsupportedMarket; // 0x0
		::Nexon::Pub::NXError* NXErrorUnregisteredVersion; // 0x0
		::Nexon::Pub::NXError* NXErrorAlreadyUpdated; // 0x0
		::Nexon::Pub::NXError* NXErrorNoSuchFileOrDirectory; // 0x0
		::Nexon::Pub::NXError* NXErrorDownloadsFail; // 0x0
		::Nexon::Pub::NXError* NXErrorDownloaderBusy; // 0x0
		::Nexon::Pub::NXError* NXErrorWrongGroupName; // 0x0
		::Nexon::Pub::NXError* NXErrorWrongConfigSetting; // 0x0
		::Nexon::Pub::NXError* NXErrorInappropriateStatus; // 0x0
		::Nexon::Pub::NXError* NXErrorBackgroundUpdateDisabled; // 0x0
		::Nexon::Pub::NXError* NXErrorInsufficientSystemResources; // 0x0
		::Nexon::Pub::NXError* NXErrorUnregisteredPatchResources; // 0x0
		::Nexon::Pub::NXError* NXErrorDontExistsAvailablePatch; // 0x0
		::Nexon::Pub::NXError* NXErrorUsableSpaceZero; // 0x0
		::Nexon::Pub::NXError* NXErrorTooLargeToDownload; // 0x0
		::Nexon::Pub::NXError* NXErrorSDKInitFirst; // 0x0
		::Nexon::Pub::NXError* NXErrorInappropriateSDKInit; // 0x0
		::Nexon::Pub::NXError* NXErrorETC; // 0x0

	};
}

