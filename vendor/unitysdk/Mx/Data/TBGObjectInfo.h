#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGObjectExcel; }
namespace FlatData { class TBGObjectType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_DATA_TBGOBJECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190B710)
#define MX_DATA_TBGOBJECTINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x190B740)
#define MX_DATA_TBGOBJECTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x190B760)
#define MX_DATA_TBGOBJECTINFO_GET_COST_OFFSET UNITYSDK_OFFSET(0x190B780)
#define MX_DATA_TBGOBJECTINFO_GET_REENCOUNTERCOST_OFFSET UNITYSDK_OFFSET(0x190B870)
#define MX_DATA_TBGOBJECTINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190B890)
#define MX_DATA_TBGOBJECTINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190B8B0)
#define MX_DATA_TBGOBJECTINFO_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x190B8C0)
#define MX_DATA_TBGOBJECTINFO_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x190B8E0)

namespace MX::Data
{
	inline static constexpr unsigned int TBGObjectInfo_TypeDefinitionIndex = 16239;

	class TBGObjectInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGObjectExcel* _Excel_k__BackingField; // 0x10

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGObjectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_KEY_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Cost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_COST_OFFSET))(nullptr);
		}

		::System::Boolean get_ReEncounterCost()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_REENCOUNTERCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGObjectExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGObjectExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_PREFABNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGOBJECTINFO_GET_DISPOSABLE_OFFSET))(nullptr);
		}

	};
}

