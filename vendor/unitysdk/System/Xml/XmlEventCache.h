#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLEVENTCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x995D9D0)
#define SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET UNITYSDK_OFFSET(0x995E6F0)
#define SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET UNITYSDK_OFFSET(0x995E740)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x9963610)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9963700)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9963830)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99638C0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x9963900)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x99639C0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9963A20)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9963B20)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9963B80)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x9963BF0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9963C30)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9963C70)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9963CD0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9963D30)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9963E20)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x9963ED0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x9964060)
#define SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9964150)
#define SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET UNITYSDK_OFFSET(0x9964190)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x99641D0)
#define SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99641F0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9964310)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x99643A0)
#define SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9964400)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9964440)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x99644D0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x9964560)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x99645E0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x99635D0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x9963960)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x9963AA0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x9963790)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x9963640)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x9963DC0)
#define SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET UNITYSDK_OFFSET(0x9964620)
#define SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET UNITYSDK_OFFSET(0x9963FC0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_TypeDefinitionIndex = 27677;

	class XmlEventCache : public Il2CppObject
	{
	public:
		Il2CppObject* pages; // 0x28
		::Il2CppArray<::System::Object*>* pageCurr; // 0x30
		::System::Int32 pageSize; // 0x38
		::System::Boolean hasRootNode; // 0x3C
		::System::Xml::Xsl::Runtime::StringConcat* singleText; // 0x40
		::System::String* baseUri; // 0x78

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void EndEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET))(nullptr);
		}

		::System::Void EventsToWriter(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET))(nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEndBase64()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET))(nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg)
		{
			((::System::Void(*)(XmlEventType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, str, str, str, arg, nullptr);
		}

		::System::Void AddEvent(XmlEventType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(XmlEventType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 NewEvent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

