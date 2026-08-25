#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class EventContentType; }
class ItemObject;

#define UINONEQUIPMENTUSE_ONCLICKUSE_OFFSET UNITYSDK_OFFSET(0x25BB030)
#define UINONEQUIPMENTUSE_GET_TARGETOBJ_OFFSET UNITYSDK_OFFSET(0x25BBCB0)
#define UINONEQUIPMENTUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BBCC0)
#define UINONEQUIPMENTUSE_ONCLICKUSEEVENTCOIN_OFFSET UNITYSDK_OFFSET(0x25BBCD0)
#define UINONEQUIPMENTUSE_INITEVENTCOIN_OFFSET UNITYSDK_OFFSET(0x25BD320)
#define UINONEQUIPMENTUSE_FINDANDOPEN_OFFSET UNITYSDK_OFFSET(0x25BD1D0)
#define UINONEQUIPMENTUSE_SET_TARGETOBJ_OFFSET UNITYSDK_OFFSET(0x25BD5A0)
#define UINONEQUIPMENTUSE_INIT_OFFSET UNITYSDK_OFFSET(0x25BD5B0)

	inline static constexpr unsigned int UINonEquipmentUse_TypeDefinitionIndex = 6289;

	class UINonEquipmentUse : public Il2CppObject
	{
	public:
		MXButton* UseButton; // 0x78
		::UnityEngine::GameObject* CountControl; // 0x80
		UILabel* useDescriptionLabel; // 0x88
		::System::Int64 uniqueId; // 0x90
		::MX::GameLogic::Parcel::ParcelKeyPair* _TargetObj_k__BackingField; // 0x98

		::System::Void OnClickUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_ONCLICKUSE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_TargetObj()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_GET_TARGETOBJ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickUseEventCoin(::MX::Data::EventContentSeasonInfo* arg, ::System::String* str, ::FlatData::ShopCategoryType* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::String*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_ONCLICKUSEEVENTCOIN_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void InitEventCoin(::MX::Data::EventContentSeasonInfo* arg, ::System::String* str, ::FlatData::ShopCategoryType* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::String*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_INITEVENTCOIN_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void FindAndOpen(::MX::Data::EventContentSeasonInfo* arg, ::FlatData::EventContentType* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::FlatData::EventContentType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_FINDANDOPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_TargetObj(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_SET_TARGETOBJ_OFFSET))(arg, nullptr);
		}

		::System::Void Init(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTUSE_INIT_OFFSET))(arg, nullptr);
		}

	};

