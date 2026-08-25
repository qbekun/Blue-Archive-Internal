#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYREDEEMCOUPONINFO_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x9BBC6F0)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x9BBC700)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_PIN_OFFSET UNITYSDK_OFFSET(0x9BBC710)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_PIN_OFFSET UNITYSDK_OFFSET(0x9BBC720)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9BBC730)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9BBC740)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9BBC750)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9BBC760)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9BBC770)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9BBC780)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9BBC790)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9BBC7A0)
#define NPA_NXPTOYREDEEMCOUPONINFO_GET_REALMID_OFFSET UNITYSDK_OFFSET(0x9BBC7B0)
#define NPA_NXPTOYREDEEMCOUPONINFO_SET_REALMID_OFFSET UNITYSDK_OFFSET(0x9BBC7C0)
#define NPA_NXPTOYREDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC7D0)
#define NPA_NXPTOYREDEEMCOUPONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBC890)

namespace NPA
{
	inline static constexpr unsigned int NXPToyRedeemCouponInfo_TypeDefinitionIndex = 25510;

	class NXPToyRedeemCouponInfo : public Il2CppObject
	{
	public:
		::System::String* orderId; // 0x10
		::System::String* pin; // 0x18
		::System::String* characterName; // 0x20
		::System::String* worldName; // 0x28
		::System::Int32 characterLevel; // 0x30
		::System::String* characterClass; // 0x38
		::System::String* realmId; // 0x40

		::System::String* get_OrderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_ORDERID_OFFSET))(nullptr);
		}

		::System::Void set_OrderId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_ORDERID_OFFSET))(str, nullptr);
		}

		::System::String* get_Pin()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_PIN_OFFSET))(nullptr);
		}

		::System::Void set_Pin(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_PIN_OFFSET))(str, nullptr);
		}

		::System::String* get_CharacterName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::System::Void set_CharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET))(nullptr);
		}

		::System::Void set_WorldName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_CharacterClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET))(str, nullptr);
		}

		::System::String* get_RealmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_GET_REALMID_OFFSET))(nullptr);
		}

		::System::Void set_RealmId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_SET_REALMID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYREDEEMCOUPONINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

