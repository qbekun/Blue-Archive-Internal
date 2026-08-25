#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestErosionType; }

#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A54BF0)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A54C00)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A54C10)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A54C20)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A54C30)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A54C40)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A54C50)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_EROSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A54C60)
#define MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_EROSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A54C70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionDBSchema_TypeDefinitionIndex = 17204;

	class ConquestErosionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _Id_k__BackingField; // 0x28
		::FlatData::ConquestErosionType* _ErosionType_k__BackingField; // 0x30
		::System::Int32 _StepIndex_k__BackingField; // 0x34

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StepIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_STEPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ErosionType(::FlatData::ConquestErosionType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestErosionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_SET_EROSIONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConquestErosionType* get_ErosionType()
		{
			return (return (::FlatData::ConquestErosionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONDBSCHEMA_GET_EROSIONTYPE_OFFSET))(nullptr);
		}

	};
}

