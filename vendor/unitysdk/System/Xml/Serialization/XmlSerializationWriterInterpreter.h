#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99F6BE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x99F6C20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET UNITYSDK_OFFSET(0x99F7100)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x99F7310)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x99F7F60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x99F8190)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x99F83C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET UNITYSDK_OFFSET(0x99F8C40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F8150)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F8460)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F8CE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x99F96A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET UNITYSDK_OFFSET(0x99F9450)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET UNITYSDK_OFFSET(0x99F9E60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET UNITYSDK_OFFSET(0x99F7A40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET UNITYSDK_OFFSET(0x99FBF20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET UNITYSDK_OFFSET(0x99FC270)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET UNITYSDK_OFFSET(0x99FC510)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET UNITYSDK_OFFSET(0x99FA490)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x99FC720)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x99FAE70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x99FD7F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x99FD840)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x99F9BA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET UNITYSDK_OFFSET(0x99FD880)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriterInterpreter_TypeDefinitionIndex = 27919;

	class XmlSerializationWriterInterpreter : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0x48
		::System::Xml::Serialization::SerializationFormat* _format; // 0x50

		::System::Void .ctor(::System::Xml::Serialization::XmlMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void WriteRoot(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET))(arg, arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void WriteMessage(::System::Xml::Serialization::XmlMembersMapping* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlMembersMapping*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteObjectElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void WriteObjectElementAttributes(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteObjectElementElements(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteAttributeMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteElementMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MemberHasValue(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteMemberElement(::System::Xml::Serialization::XmlTypeMapElementInfo* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapElementInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ImplicitConvert(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WritePrimitiveValueLiteral(::System::Object* arg, ::System::String* str, ::System::String* str, ::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Xml::Serialization::TypeData* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET))(arg, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void WritePrimitiveValueEncoded(::System::Object* arg, ::System::String* str, ::System::String* str, ::System::Xml::XmlQualifiedName* arg, ::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Xml::Serialization::TypeData* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET))(arg, str, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteListElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void WriteListContent(::System::Object* arg, ::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::ListMap* arg, ::System::Object* arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::ListMap*, ::System::Object*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetListCount(::System::Xml::Serialization::TypeData* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Serialization::TypeData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteAnyElementContent(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WritePrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void WriteEnumElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::String* GetStringValue(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Xml::Serialization::TypeData* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetEnumXmlValue(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

