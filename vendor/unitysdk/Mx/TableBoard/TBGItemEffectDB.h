#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ITBGItemInfo; }
namespace FlatData { class TBGItemType; }
namespace FlatData { class TBGItemEffectType; }

#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0xF0A770)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0xEFF500)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_STACK_OFFSET UNITYSDK_OFFSET(0xF0A780)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0xF0A790)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF0A7A0)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0xF0A7B0)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0xF0A840)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0A380)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ADDEDNOW_OFFSET UNITYSDK_OFFSET(0xF0A850)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0xF0A390)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ADDEDNOW_OFFSET UNITYSDK_OFFSET(0xF0A860)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET__REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0xF0A870)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xF0A880)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF0A890)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF0A8A0)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET__REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0xF0A8B0)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF0A8C0)
#define MX_TABLEBOARD_TBGITEMEFFECTDB_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xF0A8D0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGItemEffectDB_TypeDefinitionIndex = 11212;

	class TBGItemEffectDB : public Il2CppObject
	{
	public:
		::MX::Data::ITBGItemInfo* _itemInfoCache; // 0x10
		::System::Boolean _IsDirty_k__BackingField; // 0x18
		::System::Int64 _ItemUniqueId_k__BackingField; // 0x20
		::FlatData::TBGItemType* _ItemType_k__BackingField; // 0x28
		::FlatData::TBGItemEffectType* _EffectType_k__BackingField; // 0x2C
		::System::Int32 __remainEncounterCounter_k__BackingField; // 0x30
		::System::Boolean _AddedNow_k__BackingField; // 0x34

		::System::Int32 get_RemainEncounterCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_REMAINENCOUNTERCOUNTER_OFFSET))(nullptr);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ACTIVATED_OFFSET))(nullptr);
		}

		::System::Int32 get_Stack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_STACK_OFFSET))(nullptr);
		}

		::System::Void set_ItemType(::FlatData::TBGItemType* arg)
		{
			((::System::Void(*)(::FlatData::TBGItemType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ItemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMUNIQUEID_OFFSET))(nullptr);
		}

		::MX::Data::ITBGItemInfo* get_ItemInfo()
		{
			return ((::MX::Data::ITBGItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMINFO_OFFSET))(nullptr);
		}

		::FlatData::TBGItemType* get_ItemType()
		{
			return ((::FlatData::TBGItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ITEMTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AddedNow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ADDEDNOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemainEncounterCounter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_REMAINENCOUNTERCOUNTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AddedNow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ADDEDNOW_OFFSET))(nullptr);
		}

		::System::Void set__remainEncounterCounter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET__REMAINENCOUNTERCOUNTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_EffectType(::FlatData::TBGItemEffectType* arg)
		{
			((::System::Void(*)(::FlatData::TBGItemEffectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_EFFECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_ItemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ITEMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get__remainEncounterCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET__REMAINENCOUNTERCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_IsDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_SET_ISDIRTY_OFFSET))(arg, nullptr);
		}

		::FlatData::TBGItemEffectType* get_EffectType()
		{
			return ((::FlatData::TBGItemEffectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMEFFECTDB_GET_EFFECTTYPE_OFFSET))(nullptr);
		}

	};
}

