#pragma once
#include "unitysdk.h"

#define FIXUPCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99F1BC0)
#define FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F2E60)

	inline static constexpr unsigned int FixupCallbackInfo_TypeDefinitionIndex = 27912;

	class FixupCallbackInfo : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10
		::System::Xml::Serialization::ClassMap* _map; // 0x18
		::System::Boolean _isValueList; // 0x20

		::System::Void .ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* arg, ::System::Xml::Serialization::ClassMap* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FIXUPCALLBACKINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FixupMembers(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET))(arg, nullptr);
		}

	};

