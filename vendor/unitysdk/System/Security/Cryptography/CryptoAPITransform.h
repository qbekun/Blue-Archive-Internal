#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AF390)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x91AF3B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x91AF3C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x91AF3D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_KEYHANDLE_OFFSET UNITYSDK_OFFSET(0x91AF3E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x91AF420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91AF430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0x91AF4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91AF4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x91AF4C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x91AF4D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x91AF4E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoAPITransform_TypeDefinitionIndex = 24389;

	class CryptoAPITransform : public Il2CppObject
	{
	public:
		::System::Boolean m_disposed; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_KeyHandle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_KEYHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_RESET_OFFSET))(nullptr);
		}

	};
}

