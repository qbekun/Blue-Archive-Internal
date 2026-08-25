#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9BBC9E0)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9BBC9F0)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9BBCA00)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9BBCA10)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x9BBCA20)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x9BBCA30)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x9BBCA40)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x9BBCA50)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REALMID_OFFSET UNITYSDK_OFFSET(0x9BBCA60)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REALMID_OFFSET UNITYSDK_OFFSET(0x9BBCA70)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9BBCA80)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9BBCA90)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9BBCAA0)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9BBCAB0)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBCAC0)
#define NPA_NXPTOYWEBREDEEMCOUPONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBCB80)

namespace NPA
{
	inline static constexpr unsigned int NXPToyWebRedeemCouponInfo_TypeDefinitionIndex = 25511;

	class NXPToyWebRedeemCouponInfo : public Il2CppObject
	{
	public:
		::System::String* characterName; // 0x10
		::System::String* worldName; // 0x18
		::System::String* regionId; // 0x20
		::System::String* regionName; // 0x28
		::System::String* realmId; // 0x30
		::System::Int32 characterLevel; // 0x38
		::System::String* characterClass; // 0x40

		::System::String* get_CharacterName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::System::Void set_CharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET))(nullptr);
		}

		::System::Void set_WorldName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_RegionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REGIONID_OFFSET))(nullptr);
		}

		::System::Void set_RegionId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REGIONID_OFFSET))(str, nullptr);
		}

		::System::String* get_RegionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REGIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_RegionName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REGIONNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_RealmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_REALMID_OFFSET))(nullptr);
		}

		::System::Void set_RealmId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_REALMID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_CharacterClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYWEBREDEEMCOUPONINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

