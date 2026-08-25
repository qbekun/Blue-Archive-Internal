#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGThemaExcel; }
namespace MX::TableBoard { class TBGHexaMapData; }
namespace FlatData { class TBGThemaType; }
namespace MX::Data { class ITBGSeasonInfo; }

#define MX_DATA_TBGTHEMAINFO_GET_THEMAPLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x190AE20)
#define MX_DATA_TBGTHEMAINFO_SET_HEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x190AE40)
#define MX_DATA_TBGTHEMAINFO_GET_HEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x190AE50)
#define MX_DATA_TBGTHEMAINFO_LOADMAPDATA_OFFSET UNITYSDK_OFFSET(0x190AE60)
#define MX_DATA_TBGTHEMAINFO_GET_THEMALOADINGIMAGE_OFFSET UNITYSDK_OFFSET(0x190B090)
#define MX_DATA_TBGTHEMAINFO_GET_THEMALEADERID_OFFSET UNITYSDK_OFFSET(0x190B0B0)
#define MX_DATA_TBGTHEMAINFO_GET_THEMANAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190B0D0)
#define MX_DATA_TBGTHEMAINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190B0F0)
#define MX_DATA_TBGTHEMAINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190B100)
#define MX_DATA_TBGTHEMAINFO_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x190B120)
#define MX_DATA_TBGTHEMAINFO_GET_INSTANTCLEARCOST_OFFSET UNITYSDK_OFFSET(0x190B140)
#define MX_DATA_TBGTHEMAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190B150)
#define MX_DATA_TBGTHEMAINFO_GET_PORTALCONDITIONS_OFFSET UNITYSDK_OFFSET(0x190B660)
#define MX_DATA_TBGTHEMAINFO_GET_THEMAMAPBG_OFFSET UNITYSDK_OFFSET(0x190B670)
#define MX_DATA_TBGTHEMAINFO_GET_THEMAGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190B690)
#define MX_DATA_TBGTHEMAINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190B6B0)
#define MX_DATA_TBGTHEMAINFO_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x190B6D0)
#define MX_DATA_TBGTHEMAINFO_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x190B6F0)
#define MX_DATA_TBGTHEMAINFO_GET_THEMAMAP_OFFSET UNITYSDK_OFFSET(0x190B070)

namespace MX::Data
{
	inline static constexpr unsigned int TBGThemaInfo_TypeDefinitionIndex = 16238;

	class TBGThemaInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _InstantClearCost_k__BackingField; // 0x10
		Il2CppObject* _PortalConditions_k__BackingField; // 0x18
		::MX::Data::Excel::MinigameTBGThemaExcel* _Excel_k__BackingField; // 0x20
		::MX::TableBoard::TBGHexaMapData* _HexaMapData_k__BackingField; // 0x30

		::System::String* get_ThemaPlayerPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMAPLAYERPREFAB_OFFSET))(nullptr);
		}

		::System::Void set_HexaMapData(::MX::TableBoard::TBGHexaMapData* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaMapData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_SET_HEXAMAPDATA_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaMapData* get_HexaMapData()
		{
			return (return (::MX::TableBoard::TBGHexaMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_HEXAMAPDATA_OFFSET))(nullptr);
		}

		::System::Void LoadMapData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_LOADMAPDATA_OFFSET))(str, nullptr);
		}

		::System::String* get_ThemaLoadingImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMALOADINGIMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_ThemaLeaderId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMALEADERID_OFFSET))(nullptr);
		}

		::System::String* get_ThemaNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMANAMELOCALIZE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGThemaExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGThemaExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMATYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_InstantClearCost()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_INSTANTCLEARCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGThemaExcel* arg, ::MX::Data::ITBGSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGThemaExcel*, ::MX::Data::ITBGSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_PortalConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_PORTALCONDITIONS_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMAMAPBG_OFFSET))(nullptr);
		}

		::System::String* get_ThemaGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMAGOALLOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTutorial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_ISTUTORIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAINFO_GET_THEMAMAP_OFFSET))(nullptr);
		}

	};
}

