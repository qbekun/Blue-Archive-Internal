#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class SkeinEngine; }

#define UBI_.CTOR_OFFSET UNITYSDK_OFFSET(0x773140)
#define UBI_RESET_OFFSET UNITYSDK_OFFSET(0x7734B0)
#define UBI_RESET_OFFSET UNITYSDK_OFFSET(0x774650)
#define UBI_UPDATE_OFFSET UNITYSDK_OFFSET(0x7744E0)
#define UBI_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x7751D0)
#define UBI_DOFINAL_OFFSET UNITYSDK_OFFSET(0x7746C0)

	inline static constexpr unsigned int UBI_TypeDefinitionIndex = 22615;

	class UBI : public Il2CppObject
	{
	public:
		UbiTweak* tweak; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine; // 0x18
		::Il2CppArray<::System::Object*>* currentBlock; // 0x20
		::System::Int32 currentOffset; // 0x28
		::Il2CppArray<::System::Object*>* message; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UBI_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(UBI* arg)
		{
			((::System::Void(*)(UBI*, ::PVOID))((::PBYTE)hIl2Cpp + UBI_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UBI_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UBI_UPDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UBI_PROCESSBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void DoFinal(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UBI_DOFINAL_OFFSET))(arg, nullptr);
		}

	};

