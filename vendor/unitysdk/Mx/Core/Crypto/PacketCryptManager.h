#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Crypto { class XORCryptor; }
namespace MX::Core::Crypto { class FastCRC; }
namespace MX::Core::Crypto { class PacketCryptManager; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_CORE_CRYPTO_PACKETCRYPTMANAGER_ENCRYPTREQUEST_OFFSET UNITYSDK_OFFSET(0x1082670)
#define MX_CORE_CRYPTO_PACKETCRYPTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10834B0)
#define MX_CORE_CRYPTO_PACKETCRYPTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1083530)
#define MX_CORE_CRYPTO_PACKETCRYPTMANAGER_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1082D60)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int PacketCryptManager_TypeDefinitionIndex = 12907;

	class PacketCryptManager : public Il2CppObject
	{
	public:
		::System::Int16 PROTOCOL_HEAD_RESERVE; // 0x0
		::MX::Core::Crypto::XORCryptor* _cryptor; // 0x10
		::MX::Core::Crypto::FastCRC* _checker; // 0x18
		::MX::Core::Crypto::PacketCryptManager* Instance; // 0x8

		::Il2CppArray<::System::Object*>* EncryptRequest(::MX::NetworkProtocol::Protocol* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::Il2CppArray<::System::Object*>* arg4)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::MX::NetworkProtocol::Protocol*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PACKETCRYPTMANAGER_ENCRYPTREQUEST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PACKETCRYPTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PACKETCRYPTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Compress(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PACKETCRYPTMANAGER_COMPRESS_OFFSET))(arg, nullptr);
		}

	};
}

