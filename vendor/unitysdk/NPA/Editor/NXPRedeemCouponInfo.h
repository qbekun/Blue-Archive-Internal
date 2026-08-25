#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPRedeemCouponInfo; }
namespace NPA { class NXPToyRedeemCouponInfo; }

#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x9D41210)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x9D41220)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_PIN_OFFSET UNITYSDK_OFFSET(0x9D41230)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_PIN_OFFSET UNITYSDK_OFFSET(0x9D41240)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9D41250)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9D41260)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9D41270)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9D41280)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9D41290)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x9D412A0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9D412B0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET UNITYSDK_OFFSET(0x9D412C0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_REALMID_OFFSET UNITYSDK_OFFSET(0x9D412D0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_REALMID_OFFSET UNITYSDK_OFFSET(0x9D412E0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_FROMPUBLICMODEL_OFFSET UNITYSDK_OFFSET(0x9D412F0)
#define NPA_EDITOR_NXPREDEEMCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D413B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPRedeemCouponInfo_TypeDefinitionIndex = 26129;

	class NXPRedeemCouponInfo : public Il2CppObject
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
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_ORDERID_OFFSET))(nullptr);
		}

		::System::Void set_OrderId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_ORDERID_OFFSET))(str, nullptr);
		}

		::System::String* get_Pin()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_PIN_OFFSET))(nullptr);
		}

		::System::Void set_Pin(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_PIN_OFFSET))(str, nullptr);
		}

		::System::String* get_CharacterName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::System::Void set_CharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_WORLDNAME_OFFSET))(nullptr);
		}

		::System::Void set_WorldName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_WORLDNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_CharacterClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_CHARACTERCLASS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_CHARACTERCLASS_OFFSET))(str, nullptr);
		}

		::System::String* get_RealmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_GET_REALMID_OFFSET))(nullptr);
		}

		::System::Void set_RealmId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_SET_REALMID_OFFSET))(str, nullptr);
		}

		::NPA::Editor::NXPRedeemCouponInfo* FromPublicModel(::NPA::NXPToyRedeemCouponInfo* arg)
		{
			return (return (::NPA::Editor::NXPRedeemCouponInfo*(*)(::NPA::NXPToyRedeemCouponInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_FROMPUBLICMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPREDEEMCOUPONINFO_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

