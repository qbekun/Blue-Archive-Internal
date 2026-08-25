#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGObjectType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_DATA_ITBGOBJECTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_REENCOUNTERCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGOBJECTINFO_GET_COST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGObjectInfo_TypeDefinitionIndex = 16229;

	class ITBGObjectInfo : public Il2CppObject
	{
	public:
		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_DISPOSABLE_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_PREFABNAME_OFFSET))(nullptr);
		}

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ReEncounterCost()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_REENCOUNTERCOST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Cost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGOBJECTINFO_GET_COST_OFFSET))(nullptr);
		}

	};
}

