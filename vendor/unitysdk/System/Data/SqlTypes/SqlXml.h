#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLXML_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C9F50)
#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x97C9FB0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLXMLREADER_OFFSET UNITYSDK_OFFSET(0x97CA320)
#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLREADERDELEGATE_OFFSET UNITYSDK_OFFSET(0x97CA520)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GET_CREATESQLREADERMETHODINFO_OFFSET UNITYSDK_OFFSET(0x97CA1E0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97CA160)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SETNULL_OFFSET UNITYSDK_OFFSET(0x97C9F80)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97CA600)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97CA610)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97CA800)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97CA960)
#define SYSTEM_DATA_SQLTYPES_SQLXML_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97CA9E0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlXml_TypeDefinitionIndex = 32347;

	class SqlXml : public Il2CppObject
	{
	public:
		Il2CppObject* s_sqlReaderDelegate; // 0x0
		::System::Xml::XmlReaderSettings* s_defaultXmlReaderSettings; // 0x8
		::System::Xml::XmlReaderSettings* s_defaultXmlReaderSettingsCloseInput; // 0x10
		::System::Reflection::MethodInfo* s_createSqlReaderMethodInfo; // 0x18
		::System::Reflection::MethodInfo* _createSqlReaderMethodInfo; // 0x10
		::System::Boolean _fNotNull; // 0x18
		::System::IO::Stream* _stream; // 0x20
		::System::Boolean _firstCreateReader; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::XmlReader* CreateReader()
		{
			return (return (::System::Xml::XmlReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATEREADER_OFFSET))(nullptr);
		}

		::System::Xml::XmlReader* CreateSqlXmlReader(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLXMLREADER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateSqlReaderDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLREADERDELEGATE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CreateSqlReaderMethodInfo()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GET_CREATESQLREADERMETHODINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Void SetNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SETNULL_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_.CCTOR_OFFSET))(nullptr);
		}

	};
}

