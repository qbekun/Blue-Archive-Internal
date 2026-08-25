#pragma once
#include "unitysdk.h"

#define DTDPARSERPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x996AB90)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x996ABC0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x996ABE0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x996AC00)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ISEOF_OFFSET UNITYSDK_OFFSET(0x996AC20)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_PARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x996AC40)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_PARSINGBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x996AC60)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x996AC80)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x996ACA0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ENTITYSTACKLENGTH_OFFSET UNITYSDK_OFFSET(0x996ACC0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ISENTITYEOLNORMALIZED_OFFSET UNITYSDK_OFFSET(0x996ACE0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONNEWLINE_OFFSET UNITYSDK_OFFSET(0x996AD00)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_LINENO_OFFSET UNITYSDK_OFFSET(0x996AD20)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_LINESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x996AD40)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.READDATA_OFFSET UNITYSDK_OFFSET(0x996AD60)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSENUMERICCHARREF_OFFSET UNITYSDK_OFFSET(0x996AD80)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSENAMEDCHARREF_OFFSET UNITYSDK_OFFSET(0x996ADA0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSEPI_OFFSET UNITYSDK_OFFSET(0x996ADC0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x996ADE0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHENTITY_OFFSET UNITYSDK_OFFSET(0x996AE00)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.POPENTITY_OFFSET UNITYSDK_OFFSET(0x996AE20)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHEXTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x996AE40)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x996AE60)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.THROW_OFFSET UNITYSDK_OFFSET(0x996AE80)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONSYSTEMID_OFFSET UNITYSDK_OFFSET(0x996AEA0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONPUBLICID_OFFSET UNITYSDK_OFFSET(0x996AED0)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERWITHVALIDATION.GET_DTDVALIDATION_OFFSET UNITYSDK_OFFSET(0x996AF00)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERWITHVALIDATION.GET_VALIDATIONEVENTHANDLING_OFFSET UNITYSDK_OFFSET(0x996AF20)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_NORMALIZATION_OFFSET UNITYSDK_OFFSET(0x996AF40)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x996AF60)
#define DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_V1COMPATIBILITYMODE_OFFSET UNITYSDK_OFFSET(0x996AF80)

	inline static constexpr unsigned int DtdParserProxy_TypeDefinitionIndex = 27695;

	class DtdParserProxy : public Il2CppObject
	{
	public:
		::System::Xml::XmlTextReaderImpl* reader; // 0x10

		::System::Void .ctor(::System::Xml::XmlTextReaderImpl* arg)
		{
			((::System::Void(*)(::System::Xml::XmlTextReaderImpl*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNameTable* System.Xml.IDtdParserAdapter.get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Xml::IXmlNamespaceResolver* System.Xml.IDtdParserAdapter.get_NamespaceResolver()
		{
			return (return (::System::Xml::IXmlNamespaceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_NAMESPACERESOLVER_OFFSET))(nullptr);
		}

		::System::Uri* System.Xml.IDtdParserAdapter.get_BaseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapter.get_IsEof()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ISEOF_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* System.Xml.IDtdParserAdapter.get_ParsingBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_PARSINGBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.get_ParsingBufferLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_PARSINGBUFFERLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.set_CurrentPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.SET_CURRENTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.get_EntityStackLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ENTITYSTACKLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_ISENTITYEOLNORMALIZED_OFFSET))(nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.OnNewLine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.get_LineNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_LINENO_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.get_LineStartPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.GET_LINESTARTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.ReadData()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.READDATA_OFFSET))(nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.ParseNumericCharRef(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSENUMERICCHARREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Xml.IDtdParserAdapter.ParseNamedCharRef(::System::Boolean arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSENAMEDCHARREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.ParsePI(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSEPI_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.ParseComment(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PARSECOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapter.PushEntity(::System::Xml::IDtdEntityInfo* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::IDtdEntityInfo*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapter.PopEntity(::System::Xml::IDtdEntityInfo&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::IDtdEntityInfo&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.POPENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapter.PushExternalSubset(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHEXTERNALSUBSET_OFFSET))(str, str, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.PushInternalDtd(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.PUSHINTERNALDTD_OFFSET))(str, str, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.Throw(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.THROW_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.OnSystemId(::System::String* str, ::System::Xml::LineInfo* arg, ::System::Xml::LineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::LineInfo*, ::System::Xml::LineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONSYSTEMID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void System.Xml.IDtdParserAdapter.OnPublicId(::System::String* str, ::System::Xml::LineInfo* arg, ::System::Xml::LineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::LineInfo*, ::System::Xml::LineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTER.ONPUBLICID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERWITHVALIDATION.GET_DTDVALIDATION_OFFSET))(nullptr);
		}

		::System::Xml::IValidationEventHandling* System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling()
		{
			return (return (::System::Xml::IValidationEventHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERWITHVALIDATION.GET_VALIDATIONEVENTHANDLING_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapterV1.get_Normalization()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_NORMALIZATION_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapterV1.get_Namespaces()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_NAMESPACES_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDPARSERPROXY_SYSTEM.XML.IDTDPARSERADAPTERV1.GET_V1COMPATIBILITYMODE_OFFSET))(nullptr);
		}

	};

