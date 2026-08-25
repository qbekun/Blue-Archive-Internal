#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C6880)
#define SYSTEM_XML_UCS4DECODER_GETFULLCHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_UCS4DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x99C68A0)
#define SYSTEM_XML_UCS4DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x99C6A70)
#define SYSTEM_XML_UCS4DECODER_UCS4TOUTF16_OFFSET UNITYSDK_OFFSET(0x99C6CD0)
#define SYSTEM_XML_UCS4DECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C6D30)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Decoder_TypeDefinitionIndex = 27824;

	class Ucs4Decoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lastBytes; // 0x20
		::System::Int32 lastBytesCount; // 0x28

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetFullChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_GETFULLCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Ucs4ToUTF16(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_UCS4TOUTF16_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_.CTOR_OFFSET))(nullptr);
		}

	};
}

