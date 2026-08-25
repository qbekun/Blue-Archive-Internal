#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x913E0E0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x913E3F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x913E4C0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x913E520)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x913E590)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x913E5A0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x913E5B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x913E5C0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x913E5D0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET UNITYSDK_OFFSET(0x913E6F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET UNITYSDK_OFFSET(0x913E870)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET UNITYSDK_OFFSET(0x913EBB0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET UNITYSDK_OFFSET(0x913EC10)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x913EC70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x913EDF0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET UNITYSDK_OFFSET(0x913F010)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x913F030)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET UNITYSDK_OFFSET(0x913F1F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x913F2A0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET UNITYSDK_OFFSET(0x913F5D0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET UNITYSDK_OFFSET(0x913F870)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x913FB30)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricTransform_TypeDefinitionIndex = 23627;

	class SymmetricTransform : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x10
		::System::Boolean encrypt; // 0x18
		::System::Int32 BlockSizeByte; // 0x1C
		::Il2CppArray<::System::Object*>* temp; // 0x20
		::Il2CppArray<::System::Object*>* temp2; // 0x28
		::Il2CppArray<::System::Object*>* workBuff; // 0x30
		::Il2CppArray<::System::Object*>* workout; // 0x38
		::System::Security::Cryptography::PaddingMode* padmode; // 0x40
		::System::Int32 FeedBackByte; // 0x44
		::System::Boolean m_disposed; // 0x48
		::System::Boolean lastBlock; // 0x49
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x50

		::System::Void .ctor(::System::Security::Cryptography::SymmetricAlgorithm* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Transform(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ECB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_ECB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CBC(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CFB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OFB(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CTS(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_KeepLastBlock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET))(nullptr);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Random(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PaddingMode*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FinalEncrypt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FinalDecrypt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

