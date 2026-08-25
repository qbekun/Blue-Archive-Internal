#pragma once
#include "unitysdk.h"

#define SERIALIZERDATA_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x99FEEA0)

	inline static constexpr unsigned int SerializerData_TypeDefinitionIndex = 27920;

	class SerializerData : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* ReaderMethod; // 0x10
		::System::Type* WriterType; // 0x18
		::System::Reflection::MethodInfo* WriterMethod; // 0x20
		::System::Xml::Serialization::XmlSerializerImplementation* Implementation; // 0x28

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter()
		{
			return (return (::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZERDATA_CREATEWRITER_OFFSET))(nullptr);
		}

	};

