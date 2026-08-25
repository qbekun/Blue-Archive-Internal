#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int UnityWebRequestError_TypeDefinitionIndex = 37424;

	class UnityWebRequestError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		UnityWebRequestError* OK; // 0x0
		UnityWebRequestError* Unknown; // 0x0
		UnityWebRequestError* SDKError; // 0x0
		UnityWebRequestError* UnsupportedProtocol; // 0x0
		UnityWebRequestError* MalformattedUrl; // 0x0
		UnityWebRequestError* CannotResolveProxy; // 0x0
		UnityWebRequestError* CannotResolveHost; // 0x0
		UnityWebRequestError* CannotConnectToHost; // 0x0
		UnityWebRequestError* AccessDenied; // 0x0
		UnityWebRequestError* GenericHttpError; // 0x0
		UnityWebRequestError* WriteError; // 0x0
		UnityWebRequestError* ReadError; // 0x0
		UnityWebRequestError* OutOfMemory; // 0x0
		UnityWebRequestError* Timeout; // 0x0
		UnityWebRequestError* HTTPPostError; // 0x0
		UnityWebRequestError* SSLCannotConnect; // 0x0
		UnityWebRequestError* Aborted; // 0x0
		UnityWebRequestError* TooManyRedirects; // 0x0
		UnityWebRequestError* ReceivedNoData; // 0x0
		UnityWebRequestError* SSLNotSupported; // 0x0
		UnityWebRequestError* FailedToSendData; // 0x0
		UnityWebRequestError* FailedToReceiveData; // 0x0
		UnityWebRequestError* SSLCertificateError; // 0x0
		UnityWebRequestError* SSLCipherNotAvailable; // 0x0
		UnityWebRequestError* SSLCACertError; // 0x0
		UnityWebRequestError* UnrecognizedContentEncoding; // 0x0
		UnityWebRequestError* LoginFailed; // 0x0
		UnityWebRequestError* SSLShutdownFailed; // 0x0
		UnityWebRequestError* NoInternetConnection; // 0x0

	};

