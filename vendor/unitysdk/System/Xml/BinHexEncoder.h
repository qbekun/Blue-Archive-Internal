#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x983EB70)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x983EE40)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x983ED30)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexEncoder_TypeDefinitionIndex = 27611;

	class BinHexEncoder : public Il2CppObject
	{
	public:
		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

