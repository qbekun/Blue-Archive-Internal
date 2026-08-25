#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_SAFEASCIIDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C5DD0)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C5DE0)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x99C5DF0)
#define SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x99C5E80)

namespace System::Xml
{
	inline static constexpr unsigned int SafeAsciiDecoder_TypeDefinitionIndex = 27818;

	class SafeAsciiDecoder : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Convert(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

