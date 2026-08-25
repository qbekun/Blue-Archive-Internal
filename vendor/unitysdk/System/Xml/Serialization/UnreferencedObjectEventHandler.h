#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D1730)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x99D1840)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventHandler_TypeDefinitionIndex = 27863;

	class UnreferencedObjectEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Xml::Serialization::UnreferencedObjectEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

