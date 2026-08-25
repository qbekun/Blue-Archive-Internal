#pragma once
#include "../unitysdk.h"

#define SYSTEM_TERMINFOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BF240)
#define SYSTEM_TERMINFOREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BF510)
#define SYSTEM_TERMINFOREADER_DETERMINEVERSION_OFFSET UNITYSDK_OFFSET(0x93C7980)
#define SYSTEM_TERMINFOREADER_READHEADER_OFFSET UNITYSDK_OFFSET(0x93C7720)
#define SYSTEM_TERMINFOREADER_READNAMES_OFFSET UNITYSDK_OFFSET(0x93C78E0)
#define SYSTEM_TERMINFOREADER_GET_OFFSET UNITYSDK_OFFSET(0x93C01B0)
#define SYSTEM_TERMINFOREADER_GET_OFFSET UNITYSDK_OFFSET(0x93C0060)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x93C5D30)
#define SYSTEM_TERMINFOREADER_GETINT16_OFFSET UNITYSDK_OFFSET(0x93C7A40)
#define SYSTEM_TERMINFOREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x93C7AA0)
#define SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x93C7B30)

namespace System
{
	inline static constexpr unsigned int TermInfoReader_TypeDefinitionIndex = 23997;

	class TermInfoReader : public Il2CppObject
	{
	public:
		::System::Int32 boolSize; // 0x10
		::System::Int32 numSize; // 0x14
		::System::Int32 strOffsets; // 0x18
		::Il2CppArray<::System::Object*>* buffer; // 0x20
		::System::Int32 booleansOffset; // 0x28
		::System::Int32 intOffset; // 0x2C

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void DetermineVersion(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_DETERMINEVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void ReadHeader(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadNames(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_READNAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Get(::System::TermInfoNumbers* arg)
		{
			return (return (::System::Int32(*)(::System::TermInfoNumbers*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_OFFSET))(arg, nullptr);
		}

		::System::String* Get(::System::TermInfoStrings* arg)
		{
			return (return (::System::String*(*)(::System::TermInfoStrings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetStringBytes(::System::TermInfoStrings* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::TermInfoStrings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int16 GetInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETINT16_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetStringBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TERMINFOREADER_GETSTRINGBYTES_OFFSET))(arg, arg, nullptr);
		}

	};
}

