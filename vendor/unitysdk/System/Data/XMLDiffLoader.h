#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x97789A0)
#define SYSTEM_DATA_XMLDIFFLOADER_CREATETABLESHIERARCHY_OFFSET UNITYSDK_OFFSET(0x97792B0)
#define SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x9779660)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET UNITYSDK_OFFSET(0x9778B10)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET UNITYSDK_OFFSET(0x9779850)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET UNITYSDK_OFFSET(0x9778EE0)
#define SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET UNITYSDK_OFFSET(0x9779BE0)
#define SYSTEM_DATA_XMLDIFFLOADER_GETTABLE_OFFSET UNITYSDK_OFFSET(0x977B1A0)
#define SYSTEM_DATA_XMLDIFFLOADER_READOLDROWDATA_OFFSET UNITYSDK_OFFSET(0x977A110)
#define SYSTEM_DATA_XMLDIFFLOADER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x977A0B0)
#define SYSTEM_DATA_XMLDIFFLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x977B390)

namespace System::Data
{
	inline static constexpr unsigned int XMLDiffLoader_TypeDefinitionIndex = 32304;

	class XMLDiffLoader : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _tables; // 0x10
		::System::Data::DataSet* _dataSet; // 0x18
		::System::Data::DataTable* _dataTable; // 0x20

		::System::Void LoadDiffGram(::System::Data::DataSet* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateTablesHierarchy(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_CREATETABLESHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDiffGram(::System::Data::DataTable* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_LOADDIFFGRAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessDiffs(::System::Data::DataSet* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessDiffs(::System::Collections::ArrayList* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSDIFFS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessErrors(::System::Data::DataSet* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessErrors(::System::Collections::ArrayList* arg, ::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_PROCESSERRORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataTable* GetTable(::System::String* str, ::System::String* str)
		{
			return (return (::System::Data::DataTable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_GETTABLE_OFFSET))(str, str, nullptr);
		}

		::System::Int32 ReadOldRowData(::System::Data::DataSet* arg, ::System::Data::DataTable&* arg, int32_t&* arg, ::System::Xml::XmlReader* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataSet*, ::System::Data::DataTable&*, int32_t&*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_READOLDROWDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SkipWhitespaces(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_SKIPWHITESPACES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLDIFFLOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

