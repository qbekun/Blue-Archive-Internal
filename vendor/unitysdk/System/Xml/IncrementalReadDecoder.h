#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_INCREMENTALREADDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_INCREMENTALREADDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_INCREMENTALREADDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958F00)

namespace System::Xml
{
	inline static constexpr unsigned int IncrementalReadDecoder_TypeDefinitionIndex = 27648;

	class IncrementalReadDecoder : public Il2CppObject
	{
	public:
		::System::Boolean get_IsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDECODER_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDECODER_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDECODER_.CTOR_OFFSET))(nullptr);
		}

	};
}

