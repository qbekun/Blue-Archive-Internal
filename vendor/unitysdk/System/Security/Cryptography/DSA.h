#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_.CTOR_OFFSET UNITYSDK_OFFSET(0x918FA40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x918FA50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x918FAA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHDATA_OFFSET UNITYSDK_OFFSET(0x918FB40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHDATA_OFFSET UNITYSDK_OFFSET(0x918FBE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x918FC10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x918FCA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET UNITYSDK_OFFSET(0x918FEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x918FF60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x918FFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x91901A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x91902A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x9190A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x918FB70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x918FE10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x9190E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x9190FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYCREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x9191120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYHASHDATA_OFFSET UNITYSDK_OFFSET(0x9191210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYSIGNDATA_OFFSET UNITYSDK_OFFSET(0x9191560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x91916E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9191AD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSA_TypeDefinitionIndex = 24334;

	class DSA : public TransformSyncer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DSA* Create()
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DSA* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashData(::System::IO::Stream* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SignData(::System::IO::Stream* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_SIGNDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FromXmlString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToXmlString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSAParameters* ExportParameters(::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::DSAParameters*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_EXPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_IMPORTPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Exception* DerivedClassMustOverride()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Exception* HashAlgorithmNameNullOrEmpty()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DSA* Create(::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSA* Create(::System::Security::Cryptography::DSAParameters* arg)
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryCreateSignature(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYCREATESIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryHashData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYHASHDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySignData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TRYSIGNDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyData(Il2CppObject* arg, Il2CppObject* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifySignature(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_VERIFYSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

	};
}

