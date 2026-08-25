#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }
class ItemObject;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class UINonEquipmentInventory;

#define ITEMINVENTORYUIOPENER__OPENUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x26C0930)
#define ITEMINVENTORYUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C0960)
#define ITEMINVENTORYUIOPENER_GET_USEITEMOBJ_OFFSET UNITYSDK_OFFSET(0x26C09B0)
#define ITEMINVENTORYUIOPENER_GET_USINGRESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x26C09C0)
#define ITEMINVENTORYUIOPENER_SET_TARGETOBJ_OFFSET UNITYSDK_OFFSET(0x26C09D0)
#define ITEMINVENTORYUIOPENER_SET_USINGRESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x26C09E0)
#define ITEMINVENTORYUIOPENER_SET_USEITEMOBJ_OFFSET UNITYSDK_OFFSET(0x26C09F0)
#define ITEMINVENTORYUIOPENER__OPENUI_G__EXECUTE|13_1_OFFSET UNITYSDK_OFFSET(0x26C0A00)
#define ITEMINVENTORYUIOPENER_GET_TARGETOBJ_OFFSET UNITYSDK_OFFSET(0x26C0AF0)
#define ITEMINVENTORYUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0B00)

	inline static constexpr unsigned int ItemInventoryUIOpener_TypeDefinitionIndex = 6945;

	class ItemInventoryUIOpener : public Il2CppObject
	{
	public:
		::FlatData::ParcelType* _UsingResultParcelType_k__BackingField; // 0x18
		ItemObject* _UseItemObj_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelKeyPair* _TargetObj_k__BackingField; // 0x28

		::System::Void _OpenUI_b__13_0(UINonEquipmentInventory* arg)
		{
			((::System::Void(*)(UINonEquipmentInventory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER__OPENUI_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ItemObject* arg2, ::MX::GameLogic::Parcel::ParcelKeyPair* arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ItemObject*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		ItemObject* get_UseItemObj()
		{
			return ((ItemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_GET_USEITEMOBJ_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_UsingResultParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_GET_USINGRESULTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TargetObj(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_SET_TARGETOBJ_OFFSET))(arg, nullptr);
		}

		::System::Void set_UsingResultParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_SET_USINGRESULTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseItemObj(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_SET_USEITEMOBJ_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_g__Execute|13_1(UINonEquipmentInventory* arg)
		{
			((::System::Void(*)(UINonEquipmentInventory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER__OPENUI_G__EXECUTE|13_1_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_TargetObj()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_GET_TARGETOBJ_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMINVENTORYUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

