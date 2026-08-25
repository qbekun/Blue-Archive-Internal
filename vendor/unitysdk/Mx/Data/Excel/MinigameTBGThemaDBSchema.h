#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TBGThemaType; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0C0B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0C0C0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0C0D0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0C0E0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C0F0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0C100)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0C110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGThemaDBSchema_TypeDefinitionIndex = 18909;

	class MinigameTBGThemaDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int32 _ThemaIndex_k__BackingField; // 0x28
		::FlatData::TBGThemaType* _ThemaType_k__BackingField; // 0x2C

		::System::Void set_ThemaType(::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_THEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ThemaIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_SET_THEMAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMADBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

