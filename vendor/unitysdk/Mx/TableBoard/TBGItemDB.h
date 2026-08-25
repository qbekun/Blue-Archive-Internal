#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ITBGItemInfo; }
namespace MX::TableBoard { class TBGPlayerDB; }

#define MX_TABLEBOARD_TBGITEMDB_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF09AF0)
#define MX_TABLEBOARD_TBGITEMDB_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF09B00)
#define MX_TABLEBOARD_TBGITEMDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF09B10)
#define MX_TABLEBOARD_TBGITEMDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF09B20)
#define MX_TABLEBOARD_TBGITEMDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF09B30)
#define MX_TABLEBOARD_TBGITEMDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF09B40)
#define MX_TABLEBOARD_TBGITEMDB_TRYUSE_OFFSET UNITYSDK_OFFSET(0xF09BF0)
#define MX_TABLEBOARD_TBGITEMDB_APPLYITEMEFFECTTOPLAYER_OFFSET UNITYSDK_OFFSET(0xF09E10)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGItemDB_TypeDefinitionIndex = 11209;

	class TBGItemDB : public Il2CppObject
	{
	public:
		::System::Boolean _IsDirty_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_IsDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_SET_ISDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryUse(::MX::TableBoard::TBGPlayerDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGPlayerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_TRYUSE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyItemEffectToPlayer(::MX::TableBoard::TBGPlayerDB* arg, ::MX::Data::ITBGItemInfo* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGPlayerDB*, ::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGITEMDB_APPLYITEMEFFECTTOPLAYER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

