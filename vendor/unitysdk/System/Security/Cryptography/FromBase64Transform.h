#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x918D260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x918D2C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918D330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918D340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x918D350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x918D360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x918D370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x918D930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x918D720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918DCD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x918DCC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0x918DD30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918DD90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x918DDE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int FromBase64Transform_TypeDefinitionIndex = 24322;

	class FromBase64Transform : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _inputBuffer; // 0x10
		::System::Int32 _inputIndex; // 0x18
		::System::Security::Cryptography::FromBase64TransformMode* _whitespaces; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::FromBase64TransformMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::FromBase64TransformMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DiscardWhiteSpaces(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISCARDWHITESPACES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_RESET_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_FROMBASE64TRANSFORM_FINALIZE_OFFSET))(nullptr);
		}

	};
}

