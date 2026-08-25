#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E640)
#define SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E6D0)
#define SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E7C0)
#define SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E870)
#define SYSTEM_DATA_XMLDATALOADER_GET_FROMINFERENCE_OFFSET UNITYSDK_OFFSET(0x978E970)
#define SYSTEM_DATA_XMLDATALOADER_SET_FROMINFERENCE_OFFSET UNITYSDK_OFFSET(0x978E980)
#define SYSTEM_DATA_XMLDATALOADER_ATTACHROWS_OFFSET UNITYSDK_OFFSET(0x978E990)
#define SYSTEM_DATA_XMLDATALOADER_COUNTNONNSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x978EBF0)
#define SYSTEM_DATA_XMLDATALOADER_GETVALUEFORTEXTONLYCOLUMS_OFFSET UNITYSDK_OFFSET(0x978EDF0)
#define SYSTEM_DATA_XMLDATALOADER_GETINITIALTEXTFROMNODES_OFFSET UNITYSDK_OFFSET(0x978F090)
#define SYSTEM_DATA_XMLDATALOADER_GETTEXTONLYCOLUMN_OFFSET UNITYSDK_OFFSET(0x978F310)
#define SYSTEM_DATA_XMLDATALOADER_GETROWFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x978EB60)
#define SYSTEM_DATA_XMLDATALOADER_FCOLUMNELEMENT_OFFSET UNITYSDK_OFFSET(0x978F3F0)
#define SYSTEM_DATA_XMLDATALOADER_FEXCLUDEDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x978ED70)
#define SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET UNITYSDK_OFFSET(0x978F4F0)
#define SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET UNITYSDK_OFFSET(0x978F830)
#define SYSTEM_DATA_XMLDATALOADER_ISTEXTLIKENODE_OFFSET UNITYSDK_OFFSET(0x978F040)
#define SYSTEM_DATA_XMLDATALOADER_ISTEXTONLY_OFFSET UNITYSDK_OFFSET(0x978F3B0)
#define SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET UNITYSDK_OFFSET(0x978F8B0)
#define SYSTEM_DATA_XMLDATALOADER_LOADROWDATA_OFFSET UNITYSDK_OFFSET(0x978FCE0)
#define SYSTEM_DATA_XMLDATALOADER_LOADROWS_OFFSET UNITYSDK_OFFSET(0x9790A30)
#define SYSTEM_DATA_XMLDATALOADER_SETROWVALUEFROMXMLTEXT_OFFSET UNITYSDK_OFFSET(0x9790DE0)
#define SYSTEM_DATA_XMLDATALOADER_INITNAMETABLE_OFFSET UNITYSDK_OFFSET(0x9790E60)
#define SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET UNITYSDK_OFFSET(0x9791180)
#define SYSTEM_DATA_XMLDATALOADER_LOADTOPMOSTTABLE_OFFSET UNITYSDK_OFFSET(0x9791660)
#define SYSTEM_DATA_XMLDATALOADER_LOADTABLE_OFFSET UNITYSDK_OFFSET(0x9792420)
#define SYSTEM_DATA_XMLDATALOADER_LOADCOLUMN_OFFSET UNITYSDK_OFFSET(0x9793520)
#define SYSTEM_DATA_XMLDATALOADER_PROCESSXSDSCHEMA_OFFSET UNITYSDK_OFFSET(0x97921E0)

namespace System::Data
{
	inline static constexpr unsigned int XmlDataLoader_TypeDefinitionIndex = 32310;

	class XmlDataLoader : public Il2CppObject
	{
	public:
		::System::Data::DataSet* _dataSet; // 0x10
		::System::Data::XmlToDatasetMap* _nodeToSchemaMap; // 0x18
		::System::Collections::Hashtable* _nodeToRowMap; // 0x20
		::System::Collections::Stack* _childRowsStack; // 0x28
		::System::Collections::Hashtable* _htableExcludedNS; // 0x30
		::System::Boolean _fIsXdr; // 0x38
		::System::Boolean _isDiffgram; // 0x39
		::System::Xml::XmlElement* _topMostNode; // 0x40
		::System::Boolean _ignoreSchema; // 0x48
		::System::Data::DataTable* _dataTable; // 0x50
		::System::Boolean _isTableLevel; // 0x58
		::System::Boolean _fromInference; // 0x59
		::System::Xml::XmlReader* _dataReader; // 0x60
		::System::Object* _XSD_XMLNS_NS; // 0x68
		::System::Object* _XDR_SCHEMA; // 0x70
		::System::Object* _XDRNS; // 0x78
		::System::Object* _SQL_SYNC; // 0x80
		::System::Object* _UPDGNS; // 0x88
		::System::Object* _XSD_SCHEMA; // 0x90
		::System::Object* _XSDNS; // 0x98
		::System::Object* _DFFNS; // 0xA0
		::System::Object* _MSDNS; // 0xA8
		::System::Object* _DIFFID; // 0xB0
		::System::Object* _HASCHANGES; // 0xB8
		::System::Object* _ROWORDER; // 0xC0

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Boolean arg, ::System::Xml::XmlElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Boolean, ::System::Xml::XmlElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg, ::System::Xml::XmlElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::System::Xml::XmlElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_FromInference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GET_FROMINFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_FromInference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_SET_FROMINFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void AttachRows(::System::Data::DataRow* arg, ::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ATTACHROWS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CountNonNSAttributes(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_COUNTNONNSATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::String* GetValueForTextOnlyColums(::System::Xml::XmlNode* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETVALUEFORTEXTONLYCOLUMS_OFFSET))(arg, nullptr);
		}

		::System::String* GetInitialTextFromNodes(::System::Xml::XmlNode&* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNode&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETINITIALTEXTFROMNODES_OFFSET))(arg, nullptr);
		}

		::System::Data::DataColumn* GetTextOnlyColumn(::System::Data::DataRow* arg)
		{
			return (return (::System::Data::DataColumn*(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETTEXTONLYCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRow* GetRowFromElement(::System::Xml::XmlElement* arg)
		{
			return (return (::System::Data::DataRow*(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_GETROWFROMELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean FColumnElement(::System::Xml::XmlElement* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FCOLUMNELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean FExcludedNamespace(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FEXCLUDEDNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean FIgnoreNamespace(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean FIgnoreNamespace(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_FIGNORENAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextLikeNode(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ISTEXTLIKENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextOnly(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_ISTEXTONLY_OFFSET))(arg, nullptr);
		}

		::System::Void LoadData(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadRowData(::System::Data::DataRow* arg, ::System::Xml::XmlElement* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADROWDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadRows(::System::Data::DataRow* arg, ::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADROWS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRowValueFromXmlText(::System::Data::DataRow* arg, ::System::Data::DataColumn* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_SETROWVALUEFROMXMLTEXT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void InitNameTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_INITNAMETABLE_OFFSET))(nullptr);
		}

		::System::Void LoadData(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadTopMostTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADTOPMOSTTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadTable(::System::Data::DataTable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadColumn(::System::Data::DataColumn* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_LOADCOLUMN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ProcessXsdSchema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATALOADER_PROCESSXSDSCHEMA_OFFSET))(nullptr);
		}

	};
}

