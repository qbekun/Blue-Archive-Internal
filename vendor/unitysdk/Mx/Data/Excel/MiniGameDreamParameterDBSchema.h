#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DreamMakerParameterType; }

#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BB5370)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB5380)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB5390)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB53A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB53B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB53C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1BB53D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamParameterDBSchema_TypeDefinitionIndex = 18642;

	class MiniGameDreamParameterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28
		::FlatData::DreamMakerParameterType* _ParameterType_k__BackingField; // 0x30

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::DreamMakerParameterType* get_ParameterType()
		{
			return (return (::FlatData::DreamMakerParameterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_GET_PARAMETERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ParameterType(::FlatData::DreamMakerParameterType* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_PARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETERDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

