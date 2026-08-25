#pragma once
#include "unitysdk.h"

#define BLOCKPOOL_CREATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA34ECA0)
#define BLOCKPOOL_RESETBLOCK_OFFSET UNITYSDK_OFFSET(0xA34ED50)
#define BLOCKPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA34E410)

	inline static constexpr unsigned int BlockPool_TypeDefinitionIndex = 30773;

	class BlockPool : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry
	{
	public:
		Block* CreateBlock()
		{
			return (return (Block*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKPOOL_CREATEBLOCK_OFFSET))(nullptr);
		}

		::System::Void ResetBlock(Block* arg)
		{
			((::System::Void(*)(Block*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKPOOL_RESETBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKPOOL_.CTOR_OFFSET))(nullptr);
		}

	};

