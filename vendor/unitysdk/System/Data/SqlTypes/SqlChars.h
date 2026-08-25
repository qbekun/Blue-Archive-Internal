#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B1510)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B1580)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B1600)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97B17C0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x97B17D0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x97B1970)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97B1A00)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SETNULL_OFFSET UNITYSDK_OFFSET(0x97B1550)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_FSTREAM_OFFSET UNITYSDK_OFFSET(0x97B17F0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_COPYSTREAMTOBUFFER_OFFSET UNITYSDK_OFFSET(0x97B1800)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x97B1C00)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97B1C70)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97B1C80)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97B1DE0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97B1EE0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x97B1F60)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_NULL_OFFSET UNITYSDK_OFFSET(0x97B1FB0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlChars_TypeDefinitionIndex = 32330;

	class SqlChars : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _rgchBuf; // 0x10
		::System::Int64 _lCurLen; // 0x18
		::System::Data::SqlTypes::SqlStreamChars* _stream; // 0x20
		::System::Data::SqlTypes::SqlBytesCharsState* _state; // 0x28
		::Il2CppArray<::System::Object*>* _rgchWorkBuf; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Data::SqlTypes::SqlString* arg)
		{
			((::System::Void(*)(::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_ISNULL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Buffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_BUFFER_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_LENGTH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Value()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SETNULL_OFFSET))(nullptr);
		}

		::System::Boolean FStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_FSTREAM_OFFSET))(nullptr);
		}

		::System::Void CopyStreamToBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_COPYSTREAMTOBUFFER_OFFSET))(nullptr);
		}

		::System::Void SetBuffer(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SETBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlChars* get_Null()
		{
			return (return (::System::Data::SqlTypes::SqlChars*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_NULL_OFFSET))(nullptr);
		}

	};
}

