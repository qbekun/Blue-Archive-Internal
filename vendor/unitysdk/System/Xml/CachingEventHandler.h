#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_CACHINGEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9983BA0)
#define SYSTEM_XML_CACHINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9983CB0)

namespace System::Xml
{
	inline static constexpr unsigned int CachingEventHandler_TypeDefinitionIndex = 27735;

	class CachingEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::XsdCachingReader* arg)
		{
			((::System::Void(*)(::System::Xml::XsdCachingReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

