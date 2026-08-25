#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91988A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9199620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0x9199760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9199630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_BLOCKSIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9199770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x9199780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x9199790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x91997A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x91997B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x91997C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x919B680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x919BA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET UNITYSDK_OFFSET(0x9199B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET UNITYSDK_OFFSET(0x919A990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET UNITYSDK_OFFSET(0x919BAA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET UNITYSDK_OFFSET(0x919BC70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET UNITYSDK_OFFSET(0x9198FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET UNITYSDK_OFFSET(0x919BFC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET UNITYSDK_OFFSET(0x919BFB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET UNITYSDK_OFFSET(0x919BE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET UNITYSDK_OFFSET(0x919BE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET UNITYSDK_OFFSET(0x919BF90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x919BFD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x919C220)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransform_TypeDefinitionIndex = 24358;

	class RijndaelManagedTransform : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::CipherMode* m_cipherMode; // 0x10
		::System::Security::Cryptography::PaddingMode* m_paddingValue; // 0x14
		::System::Security::Cryptography::RijndaelManagedTransformMode* m_transformMode; // 0x18
		::System::Int32 m_blockSizeBits; // 0x1C
		::System::Int32 m_blockSizeBytes; // 0x20
		::System::Int32 m_inputBlockSize; // 0x24
		::System::Int32 m_outputBlockSize; // 0x28
		::Il2CppArray<::System::Object*>* m_encryptKeyExpansion; // 0x30
		::Il2CppArray<::System::Object*>* m_decryptKeyExpansion; // 0x38
		::System::Int32 m_Nr; // 0x40
		::System::Int32 m_Nb; // 0x44
		::System::Int32 m_Nk; // 0x48
		::Il2CppArray<::System::Object*>* m_encryptindex; // 0x50
		::Il2CppArray<::System::Object*>* m_decryptindex; // 0x58
		::Il2CppArray<::System::Object*>* m_IV; // 0x60
		::Il2CppArray<::System::Object*>* m_lastBlockBuffer; // 0x68
		::Il2CppArray<::System::Object*>* m_depadBuffer; // 0x70
		::Il2CppArray<::System::Object*>* m_shiftRegister; // 0x78
		::Il2CppArray<::System::Object*>* s_Sbox; // 0x0
		::Il2CppArray<::System::Object*>* s_Rcon; // 0x8
		::Il2CppArray<::System::Object*>* s_T; // 0x10
		::Il2CppArray<::System::Object*>* s_TF; // 0x18
		::Il2CppArray<::System::Object*>* s_iT; // 0x20
		::Il2CppArray<::System::Object*>* s_iTF; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::CipherMode* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::PaddingMode* arg, ::System::Security::Cryptography::RijndaelManagedTransformMode* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::CipherMode*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::PaddingMode*, ::System::Security::Cryptography::RijndaelManagedTransformMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BlockSizeValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_BLOCKSIZEVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET))(nullptr);
		}

		::System::Int32 EncryptData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object[]&* arg, ::System::Int32 arg, ::System::Security::Cryptography::PaddingMode* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Object[]&*, ::System::Int32, ::System::Security::Cryptography::PaddingMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DecryptData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object[]&* arg, ::System::Int32 arg, ::System::Security::Cryptography::PaddingMode* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Object[]&*, ::System::Int32, ::System::Security::Cryptography::PaddingMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Enc(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dec(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GenerateKeyExpansion(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 rot1(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET))(arg, nullptr);
		}

		::System::Int32 rot2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET))(arg, nullptr);
		}

		::System::Int32 rot3(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET))(arg, nullptr);
		}

		::System::Int32 SubWord(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET))(arg, nullptr);
		}

		::System::Int32 MulX(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

