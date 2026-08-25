#pragma once
#include "unitysdk.h"

class AddressKeyHolder;
class CafeTerrain;
class CafeCharacterLoader;
class FurnitureVisual;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class Vector2; }
namespace FlatData { class FurnitureLocation; }
namespace UnityEngine { class Vector3; }
namespace FlatData { class FurnitureSubCategory; }
namespace UnityEngine { class GameObject; }

#define CAFEFURNITURELOADER_GET_VISUALS_OFFSET UNITYSDK_OFFSET(0x19B73A0)
#define CAFEFURNITURELOADER_GET_VISUALCOUNT_OFFSET UNITYSDK_OFFSET(0x19B73F0)
#define CAFEFURNITURELOADER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x19B7440)
#define CAFEFURNITURELOADER_GET_CHARACTERLOADER_OFFSET UNITYSDK_OFFSET(0x19B7870)
#define CAFEFURNITURELOADER_SET_CHARACTERLOADER_OFFSET UNITYSDK_OFFSET(0x19B7880)
#define CAFEFURNITURELOADER_GET_FURNITURETOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B7890)
#define CAFEFURNITURELOADER_SET_FURNITURETOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B78A0)
#define CAFEFURNITURELOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19B7FB0)
#define CAFEFURNITURELOADER_START_OFFSET UNITYSDK_OFFSET(0x19B8160)
#define CAFEFURNITURELOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B81F0)
#define CAFEFURNITURELOADER_RELEASE_OFFSET UNITYSDK_OFFSET(0x19B8370)
#define CAFEFURNITURELOADER_GETATTACHCANDIDATE_OFFSET UNITYSDK_OFFSET(0x19B8C70)
#define CAFEFURNITURELOADER_APPENDINTERACTION_OFFSET UNITYSDK_OFFSET(0x19B8F50)
#define CAFEFURNITURELOADER_REMOVEINTERACTION_OFFSET UNITYSDK_OFFSET(0x19B9210)
#define CAFEFURNITURELOADER_FINDVISUAL_OFFSET UNITYSDK_OFFSET(0x19B9960)
#define CAFEFURNITURELOADER_HANDLECAFEFURNITUREDEPLOYALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x19B99E0)
#define CAFEFURNITURELOADER_YIELDREFRESHASSETANDATTACHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B9AD0)
#define CAFEFURNITURELOADER_ONDEPLOYCONFIRMED_OFFSET UNITYSDK_OFFSET(0x19B9B60)
#define CAFEFURNITURELOADER_REFRESHASSETS_OFFSET UNITYSDK_OFFSET(0x19B9E80)
#define CAFEFURNITURELOADER_DEPLOYASSETS_OFFSET UNITYSDK_OFFSET(0x19B9EA0)
#define CAFEFURNITURELOADER_GETFURNITUREOBJECTS_OFFSET UNITYSDK_OFFSET(0x19B74E0)
#define CAFEFURNITURELOADER_CANDEPLOYASSET_OFFSET UNITYSDK_OFFSET(0x19BA0B0)
#define CAFEFURNITURELOADER_CANDEPLOYASSET_OFFSET UNITYSDK_OFFSET(0x19BA140)
#define CAFEFURNITURELOADER_TRYGETOUTOFTERRAINFURNITUREVISUALS_OFFSET UNITYSDK_OFFSET(0x19BA1D0)
#define CAFEFURNITURELOADER_TRYGETOVERLAPPED_OFFSET UNITYSDK_OFFSET(0x19BA390)
#define CAFEFURNITURELOADER_ISOVERLAPPED_OFFSET UNITYSDK_OFFSET(0x19B8E30)
#define CAFEFURNITURELOADER_SETFURNITURECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x19BA4C0)
#define CAFEFURNITURELOADER_CLEARVISUALTABLE_OFFSET UNITYSDK_OFFSET(0x19B83A0)
#define CAFEFURNITURELOADER_TAKEOUTFURNITUREFROMINVENTORY_OFFSET UNITYSDK_OFFSET(0x19BA700)
#define CAFEFURNITURELOADER_ISTEMPORARYFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BB080)
#define CAFEFURNITURELOADER_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x19BB110)
#define CAFEFURNITURELOADER_CANROTATE_OFFSET UNITYSDK_OFFSET(0x19BB1B0)
#define CAFEFURNITURELOADER_CONFIRMREMOVEFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BB250)
#define CAFEFURNITURELOADER_EDITSTART_OFFSET UNITYSDK_OFFSET(0x19BB6E0)
#define CAFEFURNITURELOADER_EDITFINISH_OFFSET UNITYSDK_OFFSET(0x19BB9E0)
#define CAFEFURNITURELOADER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x19BBB30)
#define CAFEFURNITURELOADER_GETROTATION_OFFSET UNITYSDK_OFFSET(0x19BBBF0)
#define CAFEFURNITURELOADER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x19BBC80)
#define CAFEFURNITURELOADER_MOVEBYLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x19BBD10)
#define CAFEFURNITURELOADER_UPDATEFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BBE10)
#define CAFEFURNITURELOADER_ROTATEFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BBEA0)
#define CAFEFURNITURELOADER_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x19BBF90)
#define CAFEFURNITURELOADER_GETFURNITURENAME_OFFSET UNITYSDK_OFFSET(0x19BC4C0)
#define CAFEFURNITURELOADER_REMOVETEMPORARYFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BC1D0)
#define CAFEFURNITURELOADER_ONCHANGESELECTEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x19BC580)
#define CAFEFURNITURELOADER_SETACTIVEFURNITUREBUBBLES_OFFSET UNITYSDK_OFFSET(0x19BC650)
#define CAFEFURNITURELOADER_REFRESHFURNITUREDISTANCES_OFFSET UNITYSDK_OFFSET(0x19BC7E0)
#define CAFEFURNITURELOADER_GETCAMERADISTANCESORTINGDATA_OFFSET UNITYSDK_OFFSET(0x19BC990)
#define CAFEFURNITURELOADER_SETBUBBLEORDER_OFFSET UNITYSDK_OFFSET(0x19BCCB0)
#define CAFEFURNITURELOADER_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x19BCD30)
#define CAFEFURNITURELOADER_PLAYPREVIOUSTIMELINE_OFFSET UNITYSDK_OFFSET(0x19BCDB0)
#define CAFEFURNITURELOADER_GET_ISPLAYINGBGM_OFFSET UNITYSDK_OFFSET(0x19BCE30)
#define CAFEFURNITURELOADER_ONPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x19BCF70)
#define CAFEFURNITURELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19BD370)
#define CAFEFURNITURELOADER__TRYGETOVERLAPPED_B__35_0_OFFSET UNITYSDK_OFFSET(0x19BD430)
#define CAFEFURNITURELOADER__CLEARVISUALTABLE_G__YIELDDESTROY|38_0_OFFSET UNITYSDK_OFFSET(0x19BA670)

	inline static constexpr unsigned int CafeFurnitureLoader_TypeDefinitionIndex = 1363;

	class CafeFurnitureLoader : public Il2CppObject
	{
	public:
		Il2CppObject* _furnitureToCharacters; // 0x18
		AddressKeyHolder* addressKeyHolder; // 0x20
		CafeTerrain* terrain; // 0x28
		Il2CppObject* visualTable; // 0x30
		CafeCharacterLoader* _CharacterLoader_k__BackingField; // 0x38
		Il2CppObject* furnitureObjects_temp; // 0x40

		Il2CppObject* get_Visuals()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_VISUALS_OFFSET))(nullptr);
		}

		::System::Int32 get_VisualCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_VISUALCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_ISREADY_OFFSET))(nullptr);
		}

		CafeCharacterLoader* get_CharacterLoader()
		{
			return ((CafeCharacterLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_CHARACTERLOADER_OFFSET))(nullptr);
		}

		::System::Void set_CharacterLoader(CafeCharacterLoader* arg)
		{
			((::System::Void(*)(CafeCharacterLoader*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_SET_CHARACTERLOADER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureToCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_FURNITURETOCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureToCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_SET_FURNITURETOCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Start()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_RELEASE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAttachCandidate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETATTACHCANDIDATE_OFFSET))(nullptr);
		}

		::System::Void AppendInteraction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_APPENDINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveInteraction(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_REMOVEINTERACTION_OFFSET))(arg, nullptr);
		}

		FurnitureVisual* FindVisual(::System::Int64 arg)
		{
			return ((FurnitureVisual*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_FINDVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCafeFurnitureDeployAllMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_HANDLECAFEFURNITUREDEPLOYALLMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldRefreshAssetAndAttachCharacters()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_YIELDREFRESHASSETANDATTACHCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void OnDeployConfirmed(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ONDEPLOYCONFIRMED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAssets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_REFRESHASSETS_OFFSET))(nullptr);
		}

		::System::Void DeployAssets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_DEPLOYASSETS_OFFSET))(nullptr);
		}

		Il2CppObject* GetFurnitureObjects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETFURNITUREOBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean CanDeployAsset(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CANDEPLOYASSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanDeployAsset(FurnitureVisual* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(FurnitureVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CANDEPLOYASSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetOutOfTerrainFurnitureVisuals(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_TRYGETOUTOFTERRAINFURNITUREVISUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetOverlapped(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_TRYGETOVERLAPPED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOverlapped(FurnitureVisual* arg)
		{
			return ((::System::Boolean(*)(FurnitureVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ISOVERLAPPED_OFFSET))(arg, nullptr);
		}

		::System::Void SetFurnitureColliders(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_SETFURNITURECOLLIDERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearVisualTable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CLEARVISUALTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void TakeOutFurnitureFromInventory(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_TAKEOUTFURNITUREFROMINVENTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTemporaryFurniture(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ISTEMPORARYFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInterior(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ISINTERIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanRotate(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CANROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ConfirmRemoveFurniture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CONFIRMREMOVEFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void EditStart(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_EDITSTART_OFFSET))(arg, nullptr);
		}

		::System::Void EditFinish(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_EDITFINISH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetPosition(::System::Int64 arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single GetRotation(::System::Int64 arg)
		{
			return ((::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETROTATION_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureLocation* GetLocation(::System::Int64 arg)
		{
			return ((::FlatData::FurnitureLocation*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByLocalPosition(::System::Int64 arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_MOVEBYLOCALPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateFurniture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_UPDATEFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void RotateFurniture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ROTATEFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void CancelEdit(::System::Int64 arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::FlatData::FurnitureLocation* arg4)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Vector2*, ::System::Single, ::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_CANCELEDIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* GetFurnitureName(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETFURNITURENAME_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveTemporaryFurniture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_REMOVETEMPORARYFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeSelectedFurniture(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ONCHANGESELECTEDFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveFurnitureBubbles(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_SETACTIVEFURNITUREBUBBLES_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshFurnitureDistances()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_REFRESHFURNITUREDISTANCES_OFFSET))(nullptr);
		}

		Il2CppObject* GetCameraDistanceSortingData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GETCAMERADISTANCESORTINGDATA_OFFSET))(nullptr);
		}

		::System::Void SetBubbleOrder(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_SETBUBBLEORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayBGM(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_PLAYBGM_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPreviousTimeline(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_PLAYPREVIOUSTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayingBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_GET_ISPLAYINGBGM_OFFSET))(nullptr);
		}

		::System::Void OnPlayVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_ONPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetOverlapped_b__35_0(FurnitureVisual* arg)
		{
			return ((::System::Boolean(*)(FurnitureVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER__TRYGETOVERLAPPED_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _ClearVisualTable_g__YieldDestroy|38_0(::FlatData::FurnitureSubCategory* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::FurnitureSubCategory*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURELOADER__CLEARVISUALTABLE_G__YIELDDESTROY|38_0_OFFSET))(arg, arg2, nullptr);
		}

	};

