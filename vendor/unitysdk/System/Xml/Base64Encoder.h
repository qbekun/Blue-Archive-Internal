#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BASE64ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DF20)
#define SYSTEM_XML_BASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x983DF80)
#define SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x983E2E0)

namespace System::Xml
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 27607;

	class Base64Encoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* leftOverBytes; // 0x10
		::System::Int32 leftOverBytesCount; // 0x18
		::Il2CppArray<::System::Object*>* charsLine; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET))(nullptr);
		}

	};
}

