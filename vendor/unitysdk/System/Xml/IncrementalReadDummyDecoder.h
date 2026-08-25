#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x9958F10)
#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x9958F20)
#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958F30)

namespace System::Xml
{
	inline static constexpr unsigned int IncrementalReadDummyDecoder_TypeDefinitionIndex = 27649;

	class IncrementalReadDummyDecoder : public Il2CppObject
	{
	public:
		::System::Boolean get_IsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER_.CTOR_OFFSET))(nullptr);
		}

	};
}

