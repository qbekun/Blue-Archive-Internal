#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UIEquipmentCard;
class AssetObjectBase;
namespace UnityEngine { class GameObject; }
class UIScrollView;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UIEXPENDABLES_SETDATA_OFFSET UNITYSDK_OFFSET(0x22DF5D0)
#define UIEXPENDABLES_GET_EXPENDABLES_OFFSET UNITYSDK_OFFSET(0x22E0030)
#define UIEXPENDABLES_ONPRESSADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22E0040)
#define UIEXPENDABLES_SETDATAWITHSELECTIONUSEDCOUNT_OFFSET UNITYSDK_OFFSET(0x22E0170)
#define UIEXPENDABLES_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x22E01B0)
#define UIEXPENDABLES_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x22DFC20)
#define UIEXPENDABLES_GETFEEDEXP_OFFSET UNITYSDK_OFFSET(0x22E0230)
#define UIEXPENDABLES_SET_PARCEL_OFFSET UNITYSDK_OFFSET(0x22E0250)
#define UIEXPENDABLES_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x22DFDD0)
#define UIEXPENDABLES_ONCLICKREMOVEINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22E0260)
#define UIEXPENDABLES_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x22E0450)
#define UIEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DFD90)
#define UIEXPENDABLES_GET_PARCEL_OFFSET UNITYSDK_OFFSET(0x22E04D0)
#define UIEXPENDABLES_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x22E00F0)
#define UIEXPENDABLES_RESETDATA_OFFSET UNITYSDK_OFFSET(0x22DB4A0)
#define UIEXPENDABLES_ONPRESSREMOVEINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22E04E0)
#define UIEXPENDABLES_SETINPUTEXPENDABLES_OFFSET UNITYSDK_OFFSET(0x22E0580)
#define UIEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22DEF60)
#define UIEXPENDABLES_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0x22E06B0)

	inline static constexpr unsigned int UIExpendables_TypeDefinitionIndex = 4855;

	class UIExpendables : public Il2CppObject
	{
	public:
		UINonEquipmentCard* uINonEquipmentCard; // 0x50
		UIEquipmentCard* uIEquipmentCard; // 0x58
		AssetObjectBase* expendables; // 0x60
		::UnityEngine::GameObject* SelectLine; // 0x68
		::UnityEngine::GameObject* AddExpMark; // 0x70
		UIScrollView* scrollView; // 0x78
		::MX::GameLogic::Parcel::ParcelKeyPair* _Parcel_k__BackingField; // 0x80
		::System::Int64 selectionUsedCount; // 0x90

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		AssetObjectBase* get_Expendables()
		{
			return ((AssetObjectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_GET_EXPENDABLES_OFFSET))(nullptr);
		}

		::System::Void OnPressAddIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ONPRESSADDINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataWithSelectionUsedCount(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3, AssetObjectBase* arg4)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SETDATAWITHSELECTIONUSEDCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetDefault(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SETDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Int64 GetFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_GETFEEDEXP_OFFSET))(nullptr);
		}

		::System::Void set_Parcel(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SET_PARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetTexture(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRemoveIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ONCLICKREMOVEINGREDIENT_OFFSET))(nullptr);
		}

		::System::Boolean IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Parcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_GET_PARCEL_OFFSET))(nullptr);
		}

		::System::Void SelectItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SELECTITEM_OFFSET))(nullptr);
		}

		::System::Void ResetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_RESETDATA_OFFSET))(nullptr);
		}

		::System::Void OnPressRemoveIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ONPRESSREMOVEINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputExpendables(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_SETINPUTEXPENDABLES_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void OnDragFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXPENDABLES_ONDRAGFINISHED_OFFSET))(nullptr);
		}

	};

