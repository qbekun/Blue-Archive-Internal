#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZStream; }

#define DEFLATEOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x621DE0)
#define DEFLATEOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x621EA0)

	inline static constexpr unsigned int DeflateOutputStream_TypeDefinitionIndex = 22193;

	class DeflateOutputStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEFLATEOUTPUTSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFLATEOUTPUTSTREAM_FLUSH_OFFSET))(nullptr);
		}

	};

