#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XDRSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x97748C0)
#define SYSTEM_DATA_XDRSCHEMA_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x9774960)
#define SYSTEM_DATA_XDRSCHEMA_FINDTYPENODE_OFFSET UNITYSDK_OFFSET(0x9774D30)
#define SYSTEM_DATA_XDRSCHEMA_ISTEXTONLYCONTENT_OFFSET UNITYSDK_OFFSET(0x9775090)
#define SYSTEM_DATA_XDRSCHEMA_ISXDRFIELD_OFFSET UNITYSDK_OFFSET(0x9775260)
#define SYSTEM_DATA_XDRSCHEMA_HANDLETABLE_OFFSET UNITYSDK_OFFSET(0x9774B90)
#define SYSTEM_DATA_XDRSCHEMA_FINDNAMETYPE_OFFSET UNITYSDK_OFFSET(0x9775D40)
#define SYSTEM_DATA_XDRSCHEMA_PARSEDATATYPE_OFFSET UNITYSDK_OFFSET(0x9775E10)
#define SYSTEM_DATA_XDRSCHEMA_GETINSTANCENAME_OFFSET UNITYSDK_OFFSET(0x9775F60)
#define SYSTEM_DATA_XDRSCHEMA_HANDLECOLUMN_OFFSET UNITYSDK_OFFSET(0x97760B0)
#define SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET UNITYSDK_OFFSET(0x97753B0)
#define SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET UNITYSDK_OFFSET(0x9776A90)
#define SYSTEM_DATA_XDRSCHEMA_HANDLETYPENODE_OFFSET UNITYSDK_OFFSET(0x9776E70)
#define SYSTEM_DATA_XDRSCHEMA_INSTANTIATETABLE_OFFSET UNITYSDK_OFFSET(0x9775610)
#define SYSTEM_DATA_XDRSCHEMA_INSTANTIATESIMPLETABLE_OFFSET UNITYSDK_OFFSET(0x97753D0)
#define SYSTEM_DATA_XDRSCHEMA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9777060)

namespace System::Data
{
	inline static constexpr unsigned int XDRSchema_TypeDefinitionIndex = 32303;

	class XDRSchema : public Il2CppObject
	{
	public:
		::System::String* _schemaName; // 0x10
		::System::String* _schemaUri; // 0x18
		::System::Xml::XmlElement* _schemaRoot; // 0x20
		::System::Data::DataSet* _ds; // 0x28
		::Il2CppArray<::System::Object*>* s_colonArray; // 0x0
		::Il2CppArray<::System::Object*>* s_mapNameTypeXdr; // 0x8
		NameType* s_enumerationNameType; // 0x10

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadSchema(::System::Xml::XmlElement* arg, ::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_LOADSCHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlElement* FindTypeNode(::System::Xml::XmlElement* arg)
		{
			return (return (::System::Xml::XmlElement*(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_FINDTYPENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextOnlyContent(::System::Xml::XmlElement* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_ISTEXTONLYCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsXDRField(::System::Xml::XmlElement* arg, ::System::Xml::XmlElement* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlElement*, ::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_ISXDRFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataTable* HandleTable(::System::Xml::XmlElement* arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLETABLE_OFFSET))(arg, nullptr);
		}

		NameType* FindNameType(::System::String* str)
		{
			return (return (NameType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_FINDNAMETYPE_OFFSET))(str, nullptr);
		}

		::System::Type* ParseDataType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_PARSEDATATYPE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetInstanceName(::System::Xml::XmlElement* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETINSTANCENAME_OFFSET))(arg, nullptr);
		}

		::System::Void HandleColumn(::System::Xml::XmlElement* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLECOLUMN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetMinMax(::System::Xml::XmlElement* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetMinMax(::System::Xml::XmlElement* arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::Boolean, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_GETMINMAX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void HandleTypeNode(::System::Xml::XmlElement* arg, ::System::Data::DataTable* arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::Data::DataTable*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_HANDLETYPENODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::DataTable* InstantiateTable(::System::Data::DataSet* arg, ::System::Xml::XmlElement* arg, ::System::Xml::XmlElement* arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Data::DataSet*, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_INSTANTIATETABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::DataTable* InstantiateSimpleTable(::System::Data::DataSet* arg, ::System::Xml::XmlElement* arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Data::DataSet*, ::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_INSTANTIATESIMPLETABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XDRSCHEMA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

