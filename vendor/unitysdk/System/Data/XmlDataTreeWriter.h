#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLDATATREEWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97A74E0)
#define SYSTEM_DATA_XMLDATATREEWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97A6B40)
#define SYSTEM_DATA_XMLDATATREEWRITER_CREATETOPLEVELTABLES_OFFSET UNITYSDK_OFFSET(0x97A94B0)
#define SYSTEM_DATA_XMLDATATREEWRITER_CREATETABLESHIERARCHY_OFFSET UNITYSDK_OFFSET(0x97A9100)
#define SYSTEM_DATA_XMLDATATREEWRITER_ROWHASERRORS_OFFSET UNITYSDK_OFFSET(0x97A8580)
#define SYSTEM_DATA_XMLDATATREEWRITER_SAVEDIFFGRAMDATA_OFFSET UNITYSDK_OFFSET(0x97A6CD0)
#define SYSTEM_DATA_XMLDATATREEWRITER_SAVE_OFFSET UNITYSDK_OFFSET(0x97AB160)
#define SYSTEM_DATA_XMLDATATREEWRITER_GETNESTEDCHILDRELATIONS_OFFSET UNITYSDK_OFFSET(0x97ABBF0)
#define SYSTEM_DATA_XMLDATATREEWRITER_XMLDATAROWWRITER_OFFSET UNITYSDK_OFFSET(0x97A97F0)
#define SYSTEM_DATA_XMLDATATREEWRITER_PRESERVESPACE_OFFSET UNITYSDK_OFFSET(0x97A9050)

namespace System::Data
{
	inline static constexpr unsigned int XmlDataTreeWriter_TypeDefinitionIndex = 32320;

	class XmlDataTreeWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlWriter* _xmlw; // 0x10
		::System::Data::DataSet* _ds; // 0x18
		::System::Data::DataTable* _dt; // 0x20
		::System::Collections::ArrayList* _dTables; // 0x28
		::Il2CppArray<::System::Object*>* _topLevelTables; // 0x30
		::System::Boolean _fFromTable; // 0x38
		::System::Boolean _isDiffgram; // 0x39
		::System::Collections::Hashtable* _rowsOrder; // 0x40
		::System::Boolean _writeHierarchy; // 0x48

		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateToplevelTables()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_CREATETOPLEVELTABLES_OFFSET))(nullptr);
		}

		::System::Void CreateTablesHierarchy(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_CREATETABLESHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Boolean RowHasErrors(::System::Data::DataRow* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_ROWHASERRORS_OFFSET))(arg, nullptr);
		}

		::System::Void SaveDiffgramData(::System::Xml::XmlWriter* arg, ::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_SAVEDIFFGRAMDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Save(::System::Xml::XmlWriter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_SAVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* GetNestedChildRelations(::System::Data::DataRow* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_GETNESTEDCHILDRELATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void XmlDataRowWriter(::System::Data::DataRow* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_XMLDATAROWWRITER_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean PreserveSpace(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDATATREEWRITER_PRESERVESPACE_OFFSET))(arg, nullptr);
		}

	};
}

