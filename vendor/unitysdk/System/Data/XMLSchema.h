#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLSCHEMA_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x977B3A0)
#define SYSTEM_DATA_XMLSCHEMA_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x977B3F0)
#define SYSTEM_DATA_XMLSCHEMA_FEQUALIDENTITY_OFFSET UNITYSDK_OFFSET(0x977B840)
#define SYSTEM_DATA_XMLSCHEMA_GETBOOLEANATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x977B8B0)
#define SYSTEM_DATA_XMLSCHEMA_GENUNIQUECOLUMNNAME_OFFSET UNITYSDK_OFFSET(0x977BA00)
#define SYSTEM_DATA_XMLSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x977BB30)

namespace System::Data
{
	inline static constexpr unsigned int XMLSchema_TypeDefinitionIndex = 32305;

	class XMLSchema : public Il2CppObject
	{
	public:
		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* arg)
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GETCONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetProperties(::System::Object* arg, ::System::Xml::XmlAttributeCollection* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::XmlAttributeCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_SETPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FEqualIdentity(::System::Xml::XmlNode* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_FEQUALIDENTITY_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean GetBooleanAttribute(::System::Xml::XmlElement* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlElement*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GETBOOLEANATTRIBUTE_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::String* GenUniqueColumnName(::System::String* str, ::System::Data::DataTable* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GENUNIQUECOLUMNNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

