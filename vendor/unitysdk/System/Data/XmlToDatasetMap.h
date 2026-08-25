#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x978FBD0)
#define SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9791600)
#define SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x978FBA0)
#define SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9791630)
#define SYSTEM_DATA_XMLTODATASETMAP_ISMAPPEDCOLUMN_OFFSET UNITYSDK_OFFSET(0x9790E30)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x9796150)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x9796270)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x9796410)
#define SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x97966B0)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET UNITYSDK_OFFSET(0x9794060)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET UNITYSDK_OFFSET(0x97946D0)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET UNITYSDK_OFFSET(0x9795270)
#define SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET UNITYSDK_OFFSET(0x9795620)
#define SYSTEM_DATA_XMLTODATASETMAP_GETSELFANDDESCENDANTS_OFFSET UNITYSDK_OFFSET(0x9796880)
#define SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x978F5D0)
#define SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET UNITYSDK_OFFSET(0x97933B0)
#define SYSTEM_DATA_XMLTODATASETMAP_GETSCHEMAFORNODE_OFFSET UNITYSDK_OFFSET(0x978FC00)
#define SYSTEM_DATA_XMLTODATASETMAP_GETTABLEFORNODE_OFFSET UNITYSDK_OFFSET(0x9792110)
#define SYSTEM_DATA_XMLTODATASETMAP_HANDLESPECIALCOLUMN_OFFSET UNITYSDK_OFFSET(0x9796540)

namespace System::Data
{
	inline static constexpr unsigned int XmlToDatasetMap_TypeDefinitionIndex = 32315;

	class XmlToDatasetMap : public Il2CppObject
	{
	public:
		XmlNodeIdHashtable* _tableSchemaMap; // 0x10
		TableSchemaInfo* _lastTableSchemaInfo; // 0x18

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMappedColumn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ISMAPPEDCOLUMN_OFFSET))(arg, nullptr);
		}

		TableSchemaInfo* AddTableSchema(::System::Data::DataTable* arg, ::System::Xml::XmlNameTable* arg)
		{
			return (return (TableSchemaInfo*(*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET))(arg, arg, nullptr);
		}

		TableSchemaInfo* AddTableSchema(::System::Xml::XmlNameTable* arg, ::System::Data::DataTable* arg)
		{
			return (return (TableSchemaInfo*(*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDTABLESCHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddColumnSchema(::System::Data::DataColumn* arg, ::System::Xml::XmlNameTable* arg, XmlNodeIdHashtable* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, XmlNodeIdHashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddColumnSchema(::System::Xml::XmlNameTable* arg, ::System::Data::DataColumn* arg, XmlNodeIdHashtable* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNameTable*, ::System::Data::DataColumn*, XmlNodeIdHashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_ADDCOLUMNSCHEMA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BuildIdentityMap(::System::Data::DataSet* arg, ::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildIdentityMap(::System::Xml::XmlNameTable* arg, ::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildIdentityMap(::System::Data::DataTable* arg, ::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildIdentityMap(::System::Xml::XmlNameTable* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_BUILDIDENTITYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* GetSelfAndDescendants(::System::Data::DataTable* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETSELFANDDESCENDANTS_OFFSET))(arg, nullptr);
		}

		::System::Object* GetColumnSchema(::System::Xml::XmlNode* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlNode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetColumnSchema(::System::Data::DataTable* arg, ::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataTable*, ::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETCOLUMNSCHEMA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetSchemaForNode(::System::Xml::XmlNode* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlNode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETSCHEMAFORNODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataTable* GetTableForNode(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_GETTABLEFORNODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleSpecialColumn(::System::Data::DataColumn* arg, ::System::Xml::XmlNameTable* arg, XmlNodeIdHashtable* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Xml::XmlNameTable*, XmlNodeIdHashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_HANDLESPECIALCOLUMN_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

