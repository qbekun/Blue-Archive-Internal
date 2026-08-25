#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918CBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x918CBC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x918CBD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x918CBE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x918CBF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x918CE70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918D0B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0x918D110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918D170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x918D180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x918D250)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int ToBase64Transform_TypeDefinitionIndex = 24321;

	class ToBase64Transform : public Il2CppObject
	{
	public:
		::System::Int32 get_InputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_GET_CANREUSETRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_TRANSFORMBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TransformFinalBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TOBASE64TRANSFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

