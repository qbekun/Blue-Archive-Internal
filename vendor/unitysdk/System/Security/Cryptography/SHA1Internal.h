#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91B8A40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET UNITYSDK_OFFSET(0x91B8B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x91B9CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91B8AF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x91B8C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET UNITYSDK_OFFSET(0x91BA1C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET UNITYSDK_OFFSET(0x91BA880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x91BA010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x91BAA00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Internal_TypeDefinitionIndex = 24399;

	class SHA1Internal : public Il2CppObject
	{
	public:
		::System::Int32 BLOCK_SIZE_BYTES; // 0x0
		::Il2CppArray<::System::Object*>* _H; // 0x10
		::System::UInt64 count; // 0x18
		::Il2CppArray<::System::Object*>* _ProcessingBuffer; // 0x20
		::System::Int32 _ProcessingBufferCount; // 0x28
		::Il2CppArray<::System::Object*>* buff; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitialiseBuff(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FillBuff(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddLength(::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

