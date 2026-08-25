#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsRecordLayer; }

#define RECORDLAYERBUFFER_SENDTORECORDLAYER_OFFSET UNITYSDK_OFFSET(0x60C860)
#define RECORDLAYERBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x60C850)

	inline static constexpr unsigned int RecordLayerBuffer_TypeDefinitionIndex = 22122;

	class RecordLayerBuffer : public Il2CppObject
	{
	public:
		::System::Void SendToRecordLayer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::PVOID))((::PBYTE)hIl2Cpp + RECORDLAYERBUFFER_SENDTORECORDLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RECORDLAYERBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

