#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UICraftSort;
class UICraftDuration;
class UIGrid;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UIQuickCraftNodeList;
class MXToggle;
namespace FlatData { class CraftNodeTier; }
class InventoryScrollViewController;
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::Data { class CraftNodeExcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UINODEEDITSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2397960)
#define UINODEEDITSECTION_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x2397B60)
#define UINODEEDITSECTION_FILLCONSUMEDATA_OFFSET UNITYSDK_OFFSET(0x2397B70)
#define UINODEEDITSECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x23883A0)
#define UINODEEDITSECTION_GET_CRAFTNODETYPE_OFFSET UNITYSDK_OFFSET(0x2399660)
#define UINODEEDITSECTION_GET_RECORDMATERIALDATAS_OFFSET UNITYSDK_OFFSET(0x2399670)
#define UINODEEDITSECTION_ANIMCLOSE_OFFSET UNITYSDK_OFFSET(0x23995F0)
#define UINODEEDITSECTION_ONSORT_OFFSET UNITYSDK_OFFSET(0x2399680)
#define UINODEEDITSECTION_SIMULATIONMODESETDATA_OFFSET UNITYSDK_OFFSET(0x2387E20)
#define UINODEEDITSECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x239AEA0)
#define UINODEEDITSECTION_ANIMOPEN_OFFSET UNITYSDK_OFFSET(0x2399570)
#define UINODEEDITSECTION_ONCLICKMAKE_OFFSET UNITYSDK_OFFSET(0x239B260)
#define UINODEEDITSECTION_SIMULATIONMODEREFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x2399E40)
#define UINODEEDITSECTION_START_OFFSET UNITYSDK_OFFSET(0x239BDC0)
#define UINODEEDITSECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x239BEC0)
#define UINODEEDITSECTION_ASSETCONSUMPTION_OFFSET UNITYSDK_OFFSET(0x2399CC0)
#define UINODEEDITSECTION_ONAUTOFILLTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x239C0C0)
#define UINODEEDITSECTION_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x238A5A0)
#define UINODEEDITSECTION_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x2397EE0)
#define UINODEEDITSECTION_GET_NEEDCOST_OFFSET UNITYSDK_OFFSET(0x239C1E0)
#define UINODEEDITSECTION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0x239C1F0)
#define UINODEEDITSECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x239C4B0)
#define UINODEEDITSECTION_HANDLECRAFTUPDATENODEQUALITYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x239C750)

	inline static constexpr unsigned int UINodeEditSection_TypeDefinitionIndex = 5176;

	class UINodeEditSection : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* Anim; // 0x18
		UICraftSort* CraftSort; // 0x20
		UICraftDuration* CraftDuration; // 0x28
		UIGrid* Grid; // 0x30
		::UnityEngine::GameObject* EmptyExpendableCover; // 0x38
		UILabel* cost; // 0x40
		MXButton* StartMakeButton; // 0x48
		MXButton* BackButton; // 0x50
		::UnityEngine::GameObject* StartMake; // 0x58
		::UnityEngine::GameObject* DisableStartMake; // 0x60
		Il2CppObject* ButtonName; // 0x68
		::UnityEngine::GameObject* EmptyLabel; // 0x70
		UIQuickCraftNodeList* QuiqCraftNodeList; // 0x78
		MXToggle* AutoFillToggle; // 0x80
		::FlatData::CraftNodeTier* craftNodeType; // 0x88
		::System::Int64 nodeId; // 0x90
		Il2CppObject* nodeIds; // 0x98
		::System::Int64 slotId; // 0xA0
		::System::Int64 totalExp; // 0xA8
		::System::Int64 needCost; // 0xB0
		Il2CppObject* craftExpendables; // 0xB8
		::FlatData::CraftNodeTier* EndTier; // 0xC0
		InventoryScrollViewController* InventoryScrollViewController; // 0xC8
		::System::Int32 columnCount; // 0x0
		Il2CppObject* consumeItem; // 0xD0
		Il2CppObject* consumeEquipment; // 0xD8
		Il2CppObject* consumeFurniture; // 0xE0
		Il2CppObject* recordMaterialDatas; // 0xE8
		::System::String* AnimClip; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_GET_TOTALEXP_OFFSET))(nullptr);
		}

		::System::Void FillConsumeData(Il2CppObject* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_FILLCONSUMEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::CraftInfoDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CraftNodeTier* get_CraftNodeType()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_GET_CRAFTNODETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RecordMaterialDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_GET_RECORDMATERIALDATAS_OFFSET))(nullptr);
		}

		::System::Void AnimClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ANIMCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONSORT_OFFSET))(arg, nullptr);
		}

		::System::Void SimulationModeSetData(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_SIMULATIONMODESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void AnimOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ANIMOPEN_OFFSET))(nullptr);
		}

		::System::Void OnClickMake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONCLICKMAKE_OFFSET))(nullptr);
		}

		::System::Void SimulationModeRefreshMaterial(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_SIMULATIONMODEREFRESHMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_START_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void AssetConsumption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ASSETCONSUMPTION_OFFSET))(nullptr);
		}

		::System::Void OnAutoFillToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONAUTOFILLTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void RefreshMaterial(::MX::Data::CraftNodeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_REFRESHMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NeedCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_GET_NEEDCOST_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftUpdateNodeQualityResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEEDITSECTION_HANDLECRAFTUPDATENODEQUALITYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

