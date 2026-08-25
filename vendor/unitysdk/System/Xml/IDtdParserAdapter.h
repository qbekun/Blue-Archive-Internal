#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDPARSERADAPTER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_PARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_PARSINGBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_LINESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_ISEOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_ENTITYSTACKLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_GET_ISENTITYEOLNORMALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_READDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_ONNEWLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PARSENUMERICCHARREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PARSENAMEDCHARREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PARSEPI_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PUSHENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_POPENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PUSHEXTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_PUSHINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_ONSYSTEMID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_ONPUBLICID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTER_THROW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdParserAdapter_TypeDefinitionIndex = 27643;

	class IDtdParserAdapter : public Il2CppObject
	{
	public:
		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Xml::IXmlNamespaceResolver* get_NamespaceResolver()
		{
			return (return (::System::Xml::IXmlNamespaceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_NAMESPACERESOLVER_OFFSET))(nullptr);
		}

		::System::Uri* get_BaseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_BASEURI_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ParsingBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_PARSINGBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_ParsingBufferLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_PARSINGBUFFERLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_SET_CURRENTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_LINENO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineStartPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_LINESTARTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEof()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_ISEOF_OFFSET))(nullptr);
		}

		::System::Int32 get_EntityStackLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_ENTITYSTACKLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEntityEolNormalized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_GET_ISENTITYEOLNORMALIZED_OFFSET))(nullptr);
		}

		::System::Int32 ReadData()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_READDATA_OFFSET))(nullptr);
		}

		::System::Void OnNewLine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_ONNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ParseNumericCharRef(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PARSENUMERICCHARREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 ParseNamedCharRef(::System::Boolean arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PARSENAMEDCHARREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParsePI(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PARSEPI_OFFSET))(arg, nullptr);
		}

		::System::Void ParseComment(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PARSECOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PushEntity(::System::Xml::IDtdEntityInfo* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::IDtdEntityInfo*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PUSHENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PopEntity(::System::Xml::IDtdEntityInfo&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::IDtdEntityInfo&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_POPENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PushExternalSubset(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PUSHEXTERNALSUBSET_OFFSET))(str, str, nullptr);
		}

		::System::Void PushInternalDtd(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_PUSHINTERNALDTD_OFFSET))(str, str, nullptr);
		}

		::System::Void OnSystemId(::System::String* str, ::System::Xml::LineInfo* arg, ::System::Xml::LineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::LineInfo*, ::System::Xml::LineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_ONSYSTEMID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void OnPublicId(::System::String* str, ::System::Xml::LineInfo* arg, ::System::Xml::LineInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::LineInfo*, ::System::Xml::LineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_ONPUBLICID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Throw(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTER_THROW_OFFSET))(arg, nullptr);
		}

	};
}

