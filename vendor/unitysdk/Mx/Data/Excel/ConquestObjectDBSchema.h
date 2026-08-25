#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestObjectType; }

#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A61370)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A61380)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A61390)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_CONQUESTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A613A0)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_CONQUESTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A613B0)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A613C0)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A613D0)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A613E0)
#define MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A613F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestObjectDBSchema_TypeDefinitionIndex = 17255;

	class ConquestObjectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28
		::FlatData::ConquestObjectType* _ConquestObjectType_k__BackingField; // 0x30
		::System::Int32 _StepIndex_k__BackingField; // 0x34

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ConquestObjectType* get_ConquestObjectType()
		{
			return (return (::FlatData::ConquestObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_CONQUESTOBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConquestObjectType(::FlatData::ConquestObjectType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_CONQUESTOBJECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_StepIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTDBSCHEMA_SET_STEPINDEX_OFFSET))(arg, nullptr);
		}

	};
}

