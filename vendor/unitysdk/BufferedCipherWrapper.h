#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BUFFEREDCIPHERWRAPPER_UNWRAP_OFFSET UNITYSDK_OFFSET(0x9D0770)
#define BUFFEREDCIPHERWRAPPER_WRAP_OFFSET UNITYSDK_OFFSET(0x9D0890)
#define BUFFEREDCIPHERWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x9D09B0)
#define BUFFEREDCIPHERWRAPPER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x9D0A60)
#define BUFFEREDCIPHERWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0610)

	inline static constexpr unsigned int BufferedCipherWrapper_TypeDefinitionIndex = 21725;

	class BufferedCipherWrapper : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* cipher; // 0x10
		::System::Boolean forWrapping; // 0x18

		::Il2CppArray<::System::Object*>* Unwrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDCIPHERWRAPPER_UNWRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Wrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDCIPHERWRAPPER_WRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDCIPHERWRAPPER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDCIPHERWRAPPER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDCIPHERWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

