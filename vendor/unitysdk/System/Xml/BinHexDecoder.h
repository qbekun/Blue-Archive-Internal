#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x983E4D0)
#define SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x983E4E0)
#define SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x983E960)
#define SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x983E690)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexDecoder_TypeDefinitionIndex = 27610;

	class BinHexDecoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::Int32 curIndex; // 0x18
		::System::Int32 endIndex; // 0x1C
		::System::Boolean hasHalfByteCached; // 0x20
		::System::Byte cachedHalfByte; // 0x21

		::System::Boolean get_IsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Decode(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, bool&* arg, uint8_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, bool&*, uint8_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

