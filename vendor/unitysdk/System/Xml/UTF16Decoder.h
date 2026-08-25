#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UTF16DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C56C0)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C56F0)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C5720)
#define SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x99C5820)
#define SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x99C5AD0)

namespace System::Xml
{
	inline static constexpr unsigned int UTF16Decoder_TypeDefinitionIndex = 27817;

	class UTF16Decoder : public Il2CppObject
	{
	public:
		::System::Boolean bigEndian; // 0x20
		::System::Int32 lastByte; // 0x24

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

