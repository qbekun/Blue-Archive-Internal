#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPWebRedeemCouponInfo; }
namespace NPA { class NXPToyWebRedeemCouponInfo; }

#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9D41470)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9D41480)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9D41490)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9D414A0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x9D414B0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x9D414C0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x9D414D0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x9D414E0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REALMID_OFFSET UNITYSDK_OFFSET(0x9D414F0)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REALMID_OFFSET UNITYSDK_OFFSET(0x9D41500)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9D41510)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9D41520)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9D41530)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9D41540)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_FROMPUBLICMODEL_OFFSET UNITYSDK_OFFSET(0x9D41550)
#define NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D41620)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPWebRedeemCouponInfo_TypeDefinitionIndex = 26130;

	class NXPWebRedeemCouponInfo : public Il2CppObject
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
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::System::Void set_CharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET))(nullptr);
		}

		::System::Void set_WorldName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_RegionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REGIONID_OFFSET))(nullptr);
		}

		::System::Void set_RegionId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REGIONID_OFFSET))(str, nullptr);
		}

		::System::String* get_RegionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REGIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_RegionName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REGIONNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_RealmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_REALMID_OFFSET))(nullptr);
		}

		::System::Void set_RealmId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_REALMID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_CharacterClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET))(str, nullptr);
		}

		::NPA::Editor::NXPWebRedeemCouponInfo* FromPublicModel(::NPA::NXPToyWebRedeemCouponInfo* arg)
		{
			return (return (::NPA::Editor::NXPWebRedeemCouponInfo*(*)(::NPA::NXPToyWebRedeemCouponInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_FROMPUBLICMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBREDEEMCOUPONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

