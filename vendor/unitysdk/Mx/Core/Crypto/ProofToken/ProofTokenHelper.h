#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Crypto::ProofToken { class IProofHash; }

#define MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_SOLVE_OFFSET UNITYSDK_OFFSET(0x1087830)
#define MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_SOLVEASYNC_OFFSET UNITYSDK_OFFSET(0x1087970)
#define MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_GETHASH_OFFSET UNITYSDK_OFFSET(0x1087A90)
#define MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1087B70)

namespace MX::Core::Crypto::ProofToken
{
	inline static constexpr unsigned int ProofTokenHelper_TypeDefinitionIndex = 12914;

	class ProofTokenHelper : public Il2CppObject
	{
	public:
		::MX::Core::Crypto::ProofToken::IProofHash* Hash; // 0x0

		::System::Int64 Solve(::System::String* str, ::System::Int64 arg, ::System::Threading::CancellationToken* arg2)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_SOLVE_OFFSET))(str, arg, arg2, nullptr);
		}

		Il2CppObject* SolveAsync(::System::String* str, ::System::Int64 arg, ::System::Threading::CancellationToken* arg2)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::Int64, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_SOLVEASYNC_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::String* GetHash(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_GETHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_PROOFTOKENHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

