#pragma once
#include "unitysdk.h"

#define CALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99F70B0)
#define CALLBACKINFO_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x99FDD10)
#define CALLBACKINFO_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x99FDD70)

	inline static constexpr unsigned int CallbackInfo_TypeDefinitionIndex = 27918;

	class CallbackInfo : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi; // 0x10
		::System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18

		::System::Void .ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* arg, ::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlSerializationWriterInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKINFO_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEnum(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKINFO_WRITEENUM_OFFSET))(arg, nullptr);
		}

	};

