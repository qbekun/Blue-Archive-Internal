#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_NEWDIFFGRAMGEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x97A5B70)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x97A5F60)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_CREATETABLEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x97A6080)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_DOASSIGNMENTS_OFFSET UNITYSDK_OFFSET(0x97A5CC0)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_EMPTYDATA_OFFSET UNITYSDK_OFFSET(0x97A6430)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET UNITYSDK_OFFSET(0x97A6520)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET UNITYSDK_OFFSET(0x97A6530)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLE_OFFSET UNITYSDK_OFFSET(0x97A7880)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLEERRORS_OFFSET UNITYSDK_OFFSET(0x97A7900)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATEROW_OFFSET UNITYSDK_OFFSET(0x97A7F20)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATECOLUMN_OFFSET UNITYSDK_OFFSET(0x97A8650)
#define SYSTEM_DATA_NEWDIFFGRAMGEN_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x97A5B10)

namespace System::Data
{
	inline static constexpr unsigned int NewDiffgramGen_TypeDefinitionIndex = 32319;

	class NewDiffgramGen : public Il2CppObject
	{
	public:
		::System::Xml::XmlDocument* _doc; // 0x10
		::System::Data::DataSet* _ds; // 0x18
		::System::Data::DataTable* _dt; // 0x20
		::System::Xml::XmlWriter* _xmlw; // 0x28
		::System::Boolean _fBefore; // 0x30
		::System::Boolean _fErrors; // 0x31
		::System::Collections::Hashtable* _rowsOrder; // 0x38
		::System::Collections::ArrayList* _tables; // 0x40
		::System::Boolean _writeHierarchy; // 0x48

		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateTableHierarchy(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_CREATETABLEHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void DoAssignments(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_DOASSIGNMENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean EmptyData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_EMPTYDATA_OFFSET))(nullptr);
		}

		::System::Void Save(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET))(arg, nullptr);
		}

		::System::Void Save(::System::Xml::XmlWriter* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_SAVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateTableErrors(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATETABLEERRORS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateRow(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATEROW_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateColumn(::System::Data::DataRow* arg, ::System::Data::DataColumn* arg, ::System::Data::DataRowVersion* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_GENERATECOLUMN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* QualifiedName(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NEWDIFFGRAMGEN_QUALIFIEDNAME_OFFSET))(str, str, nullptr);
		}

	};
}

