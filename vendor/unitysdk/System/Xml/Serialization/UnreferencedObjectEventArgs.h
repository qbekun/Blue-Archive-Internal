#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D1850)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventArgs_TypeDefinitionIndex = 27864;

	class UnreferencedObjectEventArgs : public Il2CppObject
	{
	public:
		::System::Object* o; // 0x10
		::System::String* id; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

