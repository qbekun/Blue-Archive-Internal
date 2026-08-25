#pragma once
#include "unitysdk.h"

#define READERCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99EC970)
#define READERCALLBACKINFO_READOBJECT_OFFSET UNITYSDK_OFFSET(0x99F2E90)

	inline static constexpr unsigned int ReaderCallbackInfo_TypeDefinitionIndex = 27913;

	class ReaderCallbackInfo : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10
		::System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18

		::System::Void .ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* arg, ::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + READERCALLBACKINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + READERCALLBACKINFO_READOBJECT_OFFSET))(nullptr);
		}

	};

