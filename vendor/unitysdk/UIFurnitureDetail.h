#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UILabel;
class UIWidget;
namespace UnityEngine { class GameObject; }
class MXButton;
class MXToggle;
class UIScrollView;
class UIGrid;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }
class FurnitureObject;

#define UIFURNITUREDETAIL_SETINTERACTIONCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2585710)
#define UIFURNITUREDETAIL_GET_CHARACTERTHUMBNAILS_OFFSET UNITYSDK_OFFSET(0x2585C00)
#define UIFURNITUREDETAIL_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x2585F70)
#define UIFURNITUREDETAIL_SETNOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2585E90)
#define UIFURNITUREDETAIL_SETGRIDBACKGROUNDS_OFFSET UNITYSDK_OFFSET(0x2585EC0)
#define UIFURNITUREDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2586370)
#define UIFURNITUREDETAIL_SET_FURNITUREUNIQUEID_OFFSET UNITYSDK_OFFSET(0x2586380)
#define UIFURNITUREDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x2584460)
#define UIFURNITUREDETAIL_GET_FURNITUREUNIQUEID_OFFSET UNITYSDK_OFFSET(0x2586390)
#define UIFURNITUREDETAIL_CREATEUNITS_OFFSET UNITYSDK_OFFSET(0x2585CC0)
#define UIFURNITUREDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x25863A0)

	inline static constexpr unsigned int UIFurnitureDetail_TypeDefinitionIndex = 6221;

	class UIFurnitureDetail : public Il2CppObject
	{
	public:
		UINonEquipmentCard* NonEquipmentCard; // 0xD8
		UILabel* Name; // 0xE0
		UIWidget* CountWidget; // 0xE8
		UILabel* Count; // 0xF0
		UILabel* SetGroupName; // 0xF8
		::UnityEngine::GameObject* SetNameDeco; // 0x100
		UILabel* Stat; // 0x108
		UILabel* Description; // 0x110
		MXButton* confirmButton; // 0x118
		MXToggle* interactionToggle; // 0x120
		::UnityEngine::GameObject* interactionAbleSprite; // 0x128
		::UnityEngine::GameObject* interactionDisableSprite; // 0x130
		UIScrollView* characterScrollView; // 0x138
		UIGrid* characterGrid; // 0x140
		::UnityEngine::GameObject* noCharactersToDisplay; // 0x148
		::UnityEngine::GameObject* characterGridBackground; // 0x150
		::UnityEngine::Transform* characterScrollviewParent; // 0x158
		::UnityEngine::Vector2* characterScrollDefaultPos; // 0x160
		::UnityEngine::Vector2* characterScrollMovedPos; // 0x168
		Il2CppObject* characterThumbnails; // 0x170
		::System::Int64 _FurnitureUniqueId_k__BackingField; // 0x178

		::System::Void SetInteractionCharacters(FurnitureObject* arg)
		{
			((::System::Void(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_SETINTERACTIONCHARACTERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharacterThumbnails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_GET_CHARACTERTHUMBNAILS_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetNoCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_SETNOCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetGridBackgrounds(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_SETGRIDBACKGROUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_SET_FURNITUREUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(FurnitureObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(FurnitureObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_FurnitureUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_GET_FURNITUREUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void CreateUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_CREATEUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREDETAIL_AWAKE_OFFSET))(nullptr);
		}

	};

