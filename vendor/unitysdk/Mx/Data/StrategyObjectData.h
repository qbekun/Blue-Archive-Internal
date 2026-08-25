#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StrategyObjectType; }
namespace MX::Data::Excel { class CampaignStrategyObjectExcel; }

#define MX_DATA_STRATEGYOBJECTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x185FB20)
#define MX_DATA_STRATEGYOBJECTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x185FB30)
#define MX_DATA_STRATEGYOBJECTDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x185FB40)
#define MX_DATA_STRATEGYOBJECTDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x185FB50)
#define MX_DATA_STRATEGYOBJECTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185FB60)
#define MX_DATA_STRATEGYOBJECTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x185FB70)
#define MX_DATA_STRATEGYOBJECTDATA_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x185FB80)
#define MX_DATA_STRATEGYOBJECTDATA_SET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x185FB90)
#define MX_DATA_STRATEGYOBJECTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x185FBA0)
#define MX_DATA_STRATEGYOBJECTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x185FBB0)
#define MX_DATA_STRATEGYOBJECTDATA_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x185FBC0)
#define MX_DATA_STRATEGYOBJECTDATA_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x185FBD0)
#define MX_DATA_STRATEGYOBJECTDATA_GET_SIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x185FBE0)
#define MX_DATA_STRATEGYOBJECTDATA_SET_SIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x185FBF0)
#define MX_DATA_STRATEGYOBJECTDATA_GET_PORTALID_OFFSET UNITYSDK_OFFSET(0x185FC00)
#define MX_DATA_STRATEGYOBJECTDATA_SET_PORTALID_OFFSET UNITYSDK_OFFSET(0x185FC10)
#define MX_DATA_STRATEGYOBJECTDATA_GET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x185FC20)
#define MX_DATA_STRATEGYOBJECTDATA_SET_HEALVALUE_OFFSET UNITYSDK_OFFSET(0x185FC30)
#define MX_DATA_STRATEGYOBJECTDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x185FC40)
#define MX_DATA_STRATEGYOBJECTDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x185FC50)
#define MX_DATA_STRATEGYOBJECTDATA_GET_SWITHID_OFFSET UNITYSDK_OFFSET(0x185FC60)
#define MX_DATA_STRATEGYOBJECTDATA_SET_SWITHID_OFFSET UNITYSDK_OFFSET(0x185FC70)
#define MX_DATA_STRATEGYOBJECTDATA_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x185FC80)
#define MX_DATA_STRATEGYOBJECTDATA_SET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x185FC90)
#define MX_DATA_STRATEGYOBJECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185FCA0)
#define MX_DATA_STRATEGYOBJECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185FD20)

namespace MX::Data
{
	inline static constexpr unsigned int StrategyObjectData_TypeDefinitionIndex = 15899;

	class StrategyObjectData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::UInt32 _Key_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _PrefabName_k__BackingField; // 0x28
		::FlatData::StrategyObjectType* _Type_k__BackingField; // 0x30
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x38
		::System::Int64 _SightRange_k__BackingField; // 0x40
		::System::Int32 _PortalId_k__BackingField; // 0x48
		::System::Int32 _HealValue_k__BackingField; // 0x4C
		::System::Int64 _BuffId_k__BackingField; // 0x50
		::System::Int64 _SwithId_k__BackingField; // 0x58
		::System::Boolean _Disposable_k__BackingField; // 0x60

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_PREFABNAME_OFFSET))(nullptr);
		}

		::System::Void set_PrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_PREFABNAME_OFFSET))(str, nullptr);
		}

		::FlatData::StrategyObjectType* get_Type()
		{
			return (return (::FlatData::StrategyObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::StrategyObjectType* arg)
		{
			((::System::Void(*)(::FlatData::StrategyObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SightRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_SIGHTRANGE_OFFSET))(nullptr);
		}

		::System::Void set_SightRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_SIGHTRANGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PortalId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_PORTALID_OFFSET))(nullptr);
		}

		::System::Void set_PortalId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_PORTALID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HealValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_HEALVALUE_OFFSET))(nullptr);
		}

		::System::Void set_HealValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_HEALVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_BUFFID_OFFSET))(nullptr);
		}

		::System::Void set_BuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_BUFFID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SwithId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_SWITHID_OFFSET))(nullptr);
		}

		::System::Void set_SwithId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_SWITHID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_GET_DISPOSABLE_OFFSET))(nullptr);
		}

		::System::Void set_Disposable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_SET_DISPOSABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CampaignStrategyObjectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CampaignStrategyObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STRATEGYOBJECTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

