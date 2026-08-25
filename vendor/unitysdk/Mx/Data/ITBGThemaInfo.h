#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGHexaMapData; }
namespace FlatData { class TBGThemaType; }

#define MX_DATA_ITBGTHEMAINFO_GET_THEMAPLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_HEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_LOADMAPDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMALOADINGIMAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_PORTALCONDITIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMAGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_INSTANTCLEARCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMALEADERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMAMAPBG_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMAMAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAINFO_GET_THEMANAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGThemaInfo_TypeDefinitionIndex = 16228;

	class ITBGThemaInfo : public Il2CppObject
	{
	public:
		::System::String* get_ThemaPlayerPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMAPLAYERPREFAB_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGHexaMapData* get_HexaMapData()
		{
			return (return (::MX::TableBoard::TBGHexaMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_HEXAMAPDATA_OFFSET))(nullptr);
		}

		::System::Void LoadMapData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_LOADMAPDATA_OFFSET))(str, nullptr);
		}

		::System::String* get_ThemaLoadingImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMALOADINGIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* get_PortalConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_PORTALCONDITIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_ThemaGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMAGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_InstantClearCost()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_INSTANTCLEARCOST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTutorial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_ISTUTORIAL_OFFSET))(nullptr);
		}

		::System::Int64 get_ThemaLeaderId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMALEADERID_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMAMAPBG_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMAMAP_OFFSET))(nullptr);
		}

		::System::String* get_ThemaNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAINFO_GET_THEMANAMELOCALIZE_OFFSET))(nullptr);
		}

	};
}

