#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9189BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x9189BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x9189BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x9189C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASH_OFFSET UNITYSDK_OFFSET(0x9189C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x9189DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRYCOMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x9189F10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x918A070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x918A200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CAPTUREHASHCODEANDREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9189E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918A500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x918A560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918A5F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918A600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918A610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x918A620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x918A630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x918A640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x918A850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_VALIDATETRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x918A6E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHCORE_OFFSET UNITYSDK_OFFSET(0x918A990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRYHASHFINAL_OFFSET UNITYSDK_OFFSET(0x918AC40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithm_TypeDefinitionIndex = 24308;

	class HashAlgorithm : public Il2CppObject
	{
	public:
		::System::Boolean _disposed; // 0x10
		::System::Int32 HashSizeValue; // 0x14
		::Il2CppArray<::System::Object*>* HashValue; // 0x18
		::System::Int32 State; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* Create()
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HashAlgorithm* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET))(str, nullptr);
		}

		::System::Int32 get_HashSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASHSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Hash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryComputeHash(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRYCOMPUTEHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeHash(::System::IO::Stream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CaptureHashCodeAndReinitialize()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CAPTUREHASHCODEANDREINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateTransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_VALIDATETRANSFORMBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HashCore(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHFINAL_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HashCore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_HASHCORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryHashFinal(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRYHASHFINAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

