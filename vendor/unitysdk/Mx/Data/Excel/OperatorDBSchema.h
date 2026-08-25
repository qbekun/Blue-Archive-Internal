#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OperatorCondition; }

#define MX_DATA_EXCEL_OPERATORDBSCHEMA_SET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C22540)
#define MX_DATA_EXCEL_OPERATORDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C22550)
#define MX_DATA_EXCEL_OPERATORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C22560)
#define MX_DATA_EXCEL_OPERATORDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C22570)
#define MX_DATA_EXCEL_OPERATORDBSCHEMA_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C22580)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OperatorDBSchema_TypeDefinitionIndex = 19003;

	class OperatorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _GroupId_k__BackingField; // 0x20
		::FlatData::OperatorCondition* _OperatorCondition_k__BackingField; // 0x28

		::System::Void set_OperatorCondition(::FlatData::OperatorCondition* arg)
		{
			((::System::Void(*)(::FlatData::OperatorCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATORDBSCHEMA_SET_OPERATORCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATORDBSCHEMA_SET_GROUPID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATORDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return (return (::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATORDBSCHEMA_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

	};
}

