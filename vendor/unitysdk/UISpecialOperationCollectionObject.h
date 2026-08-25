#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;
class UITexture;
class UILabel;
class MXButton;
namespace UnityEngine { class Animation; }
namespace MX::Data { class EventContentCollectionInfo; }
namespace MX::Data { class ScenarioCollectionInfo; }
namespace MX::GameLogic::DBModel { class EventContentCollectionDB; }
class UISpecialOperationCollectionPopup;

#define UISPECIALOPERATIONCOLLECTIONOBJECT_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A78D0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A78E0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A78F0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A7900)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_GET_COLLECTIONINFO_OFFSET UNITYSDK_OFFSET(0x24A7910)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SET_COLLECTIONINFO_OFFSET UNITYSDK_OFFSET(0x24A7920)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_GET_SCENAROCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x24A7930)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SET_SCENAROCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x24A7940)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_ADD_COLLECTIONFOCUSED_OFFSET UNITYSDK_OFFSET(0x24A6540)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_REMOVE_COLLECTIONFOCUSED_OFFSET UNITYSDK_OFFSET(0x24A7950)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A79F0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A6720)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SETSCENARIOCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x24A7B10)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_SETSCENARIOCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x24A6C00)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A74D0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A7B20)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_ONCLICKCOLLECTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24A7BB0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_CLEARBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x24A7CC0)
#define UISPECIALOPERATIONCOLLECTIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A7D30)
#define UISPECIALOPERATIONCOLLECTIONOBJECT__SETDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0x24A7D40)
#define UISPECIALOPERATIONCOLLECTIONOBJECT__SETDATA_B__32_1_OFFSET UNITYSDK_OFFSET(0x24A7D60)
#define UISPECIALOPERATIONCOLLECTIONOBJECT__SETSCENARIOCOLLECTIONDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0x24A7D80)
#define UISPECIALOPERATIONCOLLECTIONOBJECT__ONCLICKCOLLECTIONBUTTON_B__37_0_OFFSET UNITYSDK_OFFSET(0x24A7DA0)

	inline static constexpr unsigned int UISpecialOperationCollectionObject_TypeDefinitionIndex = 5816;

	class UISpecialOperationCollectionObject : public Il2CppObject
	{
	public:
		::System::Int64 uniqueId; // 0x18
		::UnityEngine::GameObject* ableObject; // 0x20
		::UnityEngine::GameObject* disableObject; // 0x28
		UISprite* openEmblemIcon; // 0x30
		UISprite* lockEmblemIcon; // 0x38
		UITexture* collectionIcon; // 0x40
		UILabel* collectionName; // 0x48
		MXButton* collectionButton; // 0x50
		::UnityEngine::Animation* collectionObjectAnimation; // 0x58
		::UnityEngine::GameObject* unlockFX; // 0x60
		::System::Boolean _IsOpened_k__BackingField; // 0x68
		::System::Boolean _IsUnlockAnimationSeen_k__BackingField; // 0x69
		::MX::Data::EventContentCollectionInfo* _CollectionInfo_k__BackingField; // 0x70
		::System::Int64 _ScenaroCollectionGroupId_k__BackingField; // 0x78
		::MX::Data::ScenarioCollectionInfo* _scenarioCollectionInfo; // 0x80
		Il2CppObject* collectionFocused; // 0x88
		::System::Int64 eventContentId; // 0x90

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_GET_ISOPENED_OFFSET))(nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUnlockAnimationSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlockAnimationSeen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentCollectionInfo* get_CollectionInfo()
		{
			return ((::MX::Data::EventContentCollectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_GET_COLLECTIONINFO_OFFSET))(nullptr);
		}

		::System::Void set_CollectionInfo(::MX::Data::EventContentCollectionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SET_COLLECTIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenaroCollectionGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_GET_SCENAROCOLLECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScenaroCollectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SET_SCENAROCOLLECTIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void add_collectionFocused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_ADD_COLLECTIONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_collectionFocused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_REMOVE_COLLECTIONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetScenarioCollectionData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SETSCENARIOCOLLECTIONDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetScenarioCollectionData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_SETSCENARIOCOLLECTIONDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayUnlockAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickCollectionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_ONCLICKCOLLECTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void ClearButtonEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_CLEARBUTTONEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetData_b__32_0(::MX::Data::EventContentCollectionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT__SETDATA_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__32_1(::MX::GameLogic::DBModel::EventContentCollectionDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentCollectionDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT__SETDATA_B__32_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetScenarioCollectionData_b__34_0(::MX::Data::ScenarioCollectionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ScenarioCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT__SETSCENARIOCOLLECTIONDATA_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickCollectionButton_b__37_0(UISpecialOperationCollectionPopup* arg)
		{
			((::System::Void(*)(UISpecialOperationCollectionPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONOBJECT__ONCLICKCOLLECTIONBUTTON_B__37_0_OFFSET))(arg, nullptr);
		}

	};

