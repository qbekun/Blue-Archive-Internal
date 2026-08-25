#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9115500)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_PEOFFSET_OFFSET UNITYSDK_OFFSET(0x9115560)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET UNITYSDK_OFFSET(0x9115660)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET UNITYSDK_OFFSET(0x9115770)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9115720)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_READFIRSTBLOCK_OFFSET UNITYSDK_OFFSET(0x9115580)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_PROCESSFIRSTBLOCK_OFFSET UNITYSDK_OFFSET(0x9115820)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETSECURITYENTRY_OFFSET UNITYSDK_OFFSET(0x9115A60)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETHASH_OFFSET UNITYSDK_OFFSET(0x9115B20)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int AuthenticodeBase_TypeDefinitionIndex = 35815;

	class AuthenticodeBase : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* fileblock; // 0x10
		::System::IO::Stream* fs; // 0x18
		::System::Int32 blockNo; // 0x20
		::System::Int32 blockLength; // 0x24
		::System::Int32 peOffset; // 0x28
		::System::Int32 dirSecurityOffset; // 0x2C
		::System::Int32 dirSecuritySize; // 0x30
		::System::Int32 coffSymbolTableOffset; // 0x34
		::System::Boolean pe64; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_PEOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_PEOFFSET_OFFSET))(nullptr);
		}

		::System::Void Open(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET))(str, nullptr);
		}

		::System::Void Open(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ReadFirstBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_READFIRSTBLOCK_OFFSET))(nullptr);
		}

		::System::Int32 ProcessFirstBlock()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_PROCESSFIRSTBLOCK_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSecurityEntry()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETSECURITYENTRY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetHash(::System::Security::Cryptography::HashAlgorithm* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETHASH_OFFSET))(arg, nullptr);
		}

	};
}

