#pragma once
#include "unitysdk.h"

#define FIXUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x99EC400)
#define FIXUP_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x99EC490)
#define FIXUP_GET_IDS_OFFSET UNITYSDK_OFFSET(0x99EC4A0)
#define FIXUP_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x99EC4B0)

	inline static constexpr unsigned int Fixup_TypeDefinitionIndex = 27909;

	class Fixup : public Il2CppObject
	{
	public:
		::System::Object* source; // 0x10
		::Il2CppArray<::System::Object*>* ids; // 0x18
		::System::Xml::Serialization::XmlSerializationFixupCallback* callback; // 0x20

		::System::Void .ctor(::System::Object* arg, ::System::Xml::Serialization::XmlSerializationFixupCallback* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlSerializationFixupCallback*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXUP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback()
		{
			return (return (::System::Xml::Serialization::XmlSerializationFixupCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXUP_GET_CALLBACK_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Ids()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXUP_GET_IDS_OFFSET))(nullptr);
		}

		::System::Object* get_Source()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXUP_GET_SOURCE_OFFSET))(nullptr);
		}

	};

