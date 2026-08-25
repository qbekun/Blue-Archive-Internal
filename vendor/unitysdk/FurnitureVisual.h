#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine { class Coroutine; }
class ShaderColorsAnimationData;
class FurnitureObject;
class CafeTerrain;
class FunctionalFurniture;
class FurnitureVisual;
namespace UnityEngine { class Vector2; }
class FurnitureTimelineType;
namespace FlatData { class FurnitureLocation; }
namespace UnityEngine { class Vector3; }

#define FURNITUREVISUAL_GET_AVAILABLECHARACTERSTATES_OFFSET UNITYSDK_OFFSET(0x1AC91C0)
#define FURNITUREVISUAL_SET_DISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACA790)
#define FURNITUREVISUAL_DETACHOCCUPIEDAREA_OFFSET UNITYSDK_OFFSET(0x1ACA7A0)
#define FURNITUREVISUAL_BINDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1ACA7F0)
#define FURNITUREVISUAL_GET_FURNITUREOBJECT_OFFSET UNITYSDK_OFFSET(0x1ACBBE0)
#define FURNITUREVISUAL_ONDEPLOYCONFIRMED_OFFSET UNITYSDK_OFFSET(0x1ACBBF0)
#define FURNITUREVISUAL_GET_FUNCTIONALFURNITURE_OFFSET UNITYSDK_OFFSET(0x1ACBC70)
#define FURNITUREVISUAL_SET_FUNCTIONALFURNITURE_OFFSET UNITYSDK_OFFSET(0x1ACBC80)
#define FURNITUREVISUAL__INITDIRECTOR_G__REGISTERTRACKSSINGLEUNIQUEID|25_0_OFFSET UNITYSDK_OFFSET(0x1ACBCA0)
#define FURNITUREVISUAL_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1AC3360)
#define FURNITUREVISUAL_ISOVERLAPPED_OFFSET UNITYSDK_OFFSET(0x1ACBD80)
#define FURNITUREVISUAL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ACC210)
#define FURNITUREVISUAL_GET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1ACC240)
#define FURNITUREVISUAL__PLAYIDLE_G__SETIDLETRACKSSINGLEUNIQUEID|27_1_OFFSET UNITYSDK_OFFSET(0x1ACC250)
#define FURNITUREVISUAL_ONSELECTFURNITURE_OFFSET UNITYSDK_OFFSET(0x1ACCAA0)
#define FURNITUREVISUAL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1ACCB90)
#define FURNITUREVISUAL_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0x1ACCBC0)
#define FURNITUREVISUAL_CHANGEEDITSTATE_OFFSET UNITYSDK_OFFSET(0x1ACCFB0)
#define FURNITUREVISUAL__PLAYIDLE_G__SETIDLETRACKSMULTIPLEUNIQUEIDS|27_2_OFFSET UNITYSDK_OFFSET(0x1ACCDF0)
#define FURNITUREVISUAL_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AC9200)
#define FURNITUREVISUAL_GET_ISINTERRAIN_OFFSET UNITYSDK_OFFSET(0x1ACD190)
#define FURNITUREVISUAL_GETSHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x1ACD240)
#define FURNITUREVISUAL__PLAYINTERACTION_G__SETTRACKSSINGLEUNIQUEID|26_1_OFFSET UNITYSDK_OFFSET(0x1ACD4F0)
#define FURNITUREVISUAL_PLAYFURNITURECOLORANIMATION_OFFSET UNITYSDK_OFFSET(0x1ACCAB0)
#define FURNITUREVISUAL_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1ACDA20)
#define FURNITUREVISUAL_GET_TERRAIN_OFFSET UNITYSDK_OFFSET(0x1ACDA40)
#define FURNITUREVISUAL_SET_TERRAIN_OFFSET UNITYSDK_OFFSET(0x1ACDA50)
#define FURNITUREVISUAL_ADDBOXCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1AC61E0)
#define FURNITUREVISUAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ACDA70)
#define FURNITUREVISUAL_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ACDAA0)
#define FURNITUREVISUAL_UNBINDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1ACC650)
#define FURNITUREVISUAL__BINDCHARACTERS_G__BINDRANDOMTRACKS|32_2_OFFSET UNITYSDK_OFFSET(0x1ACAF80)
#define FURNITUREVISUAL__INITDIRECTOR_G__REGISTERTRACKSMULTIPLEUNIQUEIDS|25_1_OFFSET UNITYSDK_OFFSET(0x1ACDF70)
#define FURNITUREVISUAL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ACDF00)
#define FURNITUREVISUAL_STOPEDITANIMATION_OFFSET UNITYSDK_OFFSET(0x1ACE260)
#define FURNITUREVISUAL_PLAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACE380)
#define FURNITUREVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEB30)
#define FURNITUREVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACEC20)
#define FURNITUREVISUAL_GET_HASFUNCTIONALFURNITURE_OFFSET UNITYSDK_OFFSET(0x1ACEE70)
#define FURNITUREVISUAL_GET_CANATTACH_OFFSET UNITYSDK_OFFSET(0x1ACEEC0)
#define FURNITUREVISUAL_ROTATE_OFFSET UNITYSDK_OFFSET(0x1ACEFC0)
#define FURNITUREVISUAL_SETACTIVEFURNITUREBUBBLE_OFFSET UNITYSDK_OFFSET(0x1ACF020)
#define FURNITUREVISUAL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1ACA2E0)
#define FURNITUREVISUAL_GET_DISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACF100)
#define FURNITUREVISUAL_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x1ACF110)
#define FURNITUREVISUAL_CANEXECUTEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1AC3640)
#define FURNITUREVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x1ACF1F0)
#define FURNITUREVISUAL_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1ACDF30)
#define FURNITUREVISUAL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1ACC1F0)
#define FURNITUREVISUAL_ONDESELECTFURNITURE_OFFSET UNITYSDK_OFFSET(0x1ACF210)
#define FURNITUREVISUAL_INITDIRECTOR_OFFSET UNITYSDK_OFFSET(0x1AC5BE0)
#define FURNITUREVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACF220)
#define FURNITUREVISUAL_SET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1ACF350)
#define FURNITUREVISUAL_MUTECHILDTRACKS_OFFSET UNITYSDK_OFFSET(0x1ACC410)
#define FURNITUREVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x1ACF360)
#define FURNITUREVISUAL_PLAYPREVIOUSTIMELINE_OFFSET UNITYSDK_OFFSET(0x1ACF370)
#define FURNITUREVISUAL_GET_ISPLAYINGBGM_OFFSET UNITYSDK_OFFSET(0x1ACF4D0)
#define FURNITUREVISUAL_CANATTACHSTATEANY_OFFSET UNITYSDK_OFFSET(0x1ACA590)
#define FURNITUREVISUAL_ATTACHOCCUPIEDAREA_OFFSET UNITYSDK_OFFSET(0x1ACF640)
#define FURNITUREVISUAL_GETAVAILABLESTATENAMES_OFFSET UNITYSDK_OFFSET(0x1ACF6D0)
#define FURNITUREVISUAL_GET_CURRENTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACF910)
#define FURNITUREVISUAL__PLAYINTERACTION_G__SETTRACKSMULTIPLEUNIQUEIDS|26_2_OFFSET UNITYSDK_OFFSET(0x1ACE650)
#define FURNITUREVISUAL__BINDCHARACTERS_G__BINDDETERMINISTICTRACKS|32_1_OFFSET UNITYSDK_OFFSET(0x1ACB6D0)
#define FURNITUREVISUAL_SETCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1ACF930)
#define FURNITUREVISUAL_SETBUBBLEORDER_OFFSET UNITYSDK_OFFSET(0x1ACFA10)
#define FURNITUREVISUAL_REFRESHDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACFAE0)
#define FURNITUREVISUAL_MOVEBYLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACFCB0)
#define FURNITUREVISUAL_MOVEBYGRIDPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACFEC0)
#define FURNITUREVISUAL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1ACFF20)
#define FURNITUREVISUAL_SET_FURNITUREOBJECT_OFFSET UNITYSDK_OFFSET(0x1AC5B50)

	inline static constexpr unsigned int FurnitureVisual_TypeDefinitionIndex = 1417;

	class FurnitureVisual : public Il2CppObject
	{
	public:
		Il2CppObject* addCharacterRootTracks; // 0x18
		Il2CppObject* attachedCharacterIds; // 0x20
		Il2CppObject* bgmCharacterRootTracks; // 0x28
		Il2CppObject* bgmPlays; // 0x30
		::UnityEngine::Timeline::TrackAsset* furnitureIdleTrack; // 0x38
		Il2CppObject* makeCharacterRootTracks; // 0x40
		::UnityEngine::Transform* myTransform; // 0x48
		Il2CppObject* onlyCharacterRootTracks; // 0x50
		Il2CppObject* reqCharacterTracks; // 0x58
		::UnityEngine::Playables::PlayableDirector* rootDirector; // 0x60
		::UnityEngine::Timeline::TimelineAsset* rootFurnitureTimeline; // 0x68
		Il2CppObject* prevInteraction; // 0x70
		Il2CppObject* currentInteraction; // 0x78
		::Il2CppArray<::System::Object*>* editErrorColor; // 0x80
		::Il2CppArray<::System::Object*>* editOkColor; // 0x88
		::UnityEngine::Coroutine* editAnimation; // 0x90
		ShaderColorsAnimationData* editShader; // 0x98
		::Il2CppArray<::System::Object*>* shaderAnimationMats; // 0xA0
		FurnitureObject* furnitureObject; // 0xA8
		CafeTerrain* _Terrain_k__BackingField; // 0xB0
		::System::Boolean _IsTemporary_k__BackingField; // 0xB8
		Il2CppObject* _Renderers_k__BackingField; // 0xC0
		::System::Single _DistanceFromCamera_k__BackingField; // 0xC8
		Il2CppObject* Colliders; // 0xD0
		FunctionalFurniture* _FunctionalFurniture_k__BackingField; // 0xD8
		Il2CppObject* touchRouters; // 0xE0

		Il2CppObject* get_AvailableCharacterStates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_AVAILABLECHARACTERSTATES_OFFSET))(nullptr);
		}

		::System::Void set_DistanceFromCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_DISTANCEFROMCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void DetachOccupiedArea()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_DETACHOCCUPIEDAREA_OFFSET))(nullptr);
		}

		Il2CppObject* BindCharacters(::UnityEngine::Timeline::TrackAsset* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Timeline::TrackAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_BINDCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		FurnitureObject* get_FurnitureObject()
		{
			return ((FurnitureObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_FURNITUREOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnDeployConfirmed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ONDEPLOYCONFIRMED_OFFSET))(nullptr);
		}

		FunctionalFurniture* get_FunctionalFurniture()
		{
			return ((FunctionalFurniture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_FUNCTIONALFURNITURE_OFFSET))(nullptr);
		}

		::System::Void set_FunctionalFurniture(FunctionalFurniture* arg)
		{
			((::System::Void(*)(FunctionalFurniture*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_FUNCTIONALFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void _InitDirector_g__RegisterTracksSingleUniqueId|25_0(::System::String* str, ::System::String* str2, ::System::Int32 arg, Il2CppObject&* arg2, ::UnityEngine::Timeline::TrackAsset* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, Il2CppObject&*, ::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__INITDIRECTOR_G__REGISTERTRACKSSINGLEUNIQUEID|25_0_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Boolean IsOverlapped(FurnitureVisual* arg)
		{
			return ((::System::Boolean(*)(FurnitureVisual*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ISOVERLAPPED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTemporary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_ISTEMPORARY_OFFSET))(nullptr);
		}

		::System::Void _PlayIdle_g__SetIdleTracksSingleUniqueId|27_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__PLAYIDLE_G__SETIDLETRACKSSINGLEUNIQUEID|27_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectFurniture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ONSELECTFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_PLAYIDLE_OFFSET))(nullptr);
		}

		::System::Void ChangeEditState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_CHANGEEDITSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void _PlayIdle_g__SetIdleTracksMultipleUniqueIds|27_2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__PLAYIDLE_G__SETIDLETRACKSMULTIPLEUNIQUEIDS|27_2_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInTerrain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_ISINTERRAIN_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderAnimationMatList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GETSHADERANIMATIONMATLIST_OFFSET))(nullptr);
		}

		::System::Void _PlayInteraction_g__SetTracksSingleUniqueId|26_1(Il2CppObject* arg, FurnitureTimelineType* arg2, <>c__DisplayClass26_0&* arg3)
		{
			((::System::Void(*)(Il2CppObject*, FurnitureTimelineType*, <>c__DisplayClass26_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__PLAYINTERACTION_G__SETTRACKSSINGLEUNIQUEID|26_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayFurnitureColorAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_PLAYFURNITURECOLORANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Location(::FlatData::FurnitureLocation* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		CafeTerrain* get_Terrain()
		{
			return ((CafeTerrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_TERRAIN_OFFSET))(nullptr);
		}

		::System::Void set_Terrain(CafeTerrain* arg)
		{
			((::System::Void(*)(CafeTerrain*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_TERRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void AddBoxColliders(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ADDBOXCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void UpdateTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_UPDATETRANSFORM_OFFSET))(nullptr);
		}

		::System::Void UnbindCharacters(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_UNBINDCHARACTERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _BindCharacters_g__BindRandomTracks|32_2(<>c__DisplayClass32_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass32_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__BINDCHARACTERS_G__BINDRANDOMTRACKS|32_2_OFFSET))(arg, nullptr);
		}

		::System::Void _InitDirector_g__RegisterTracksMultipleUniqueIds|25_1(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg2, ::UnityEngine::Timeline::TrackAsset* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__INITDIRECTOR_G__REGISTERTRACKSMULTIPLEUNIQUEIDS|25_1_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void StopEditAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_STOPEDITANIMATION_OFFSET))(nullptr);
		}

		::System::Void PlayInteraction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_PLAYINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasFunctionalFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_HASFUNCTIONALFURNITURE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_CANATTACH_OFFSET))(nullptr);
		}

		::System::Void Rotate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ROTATE_OFFSET))(nullptr);
		}

		::System::Void SetActiveFurnitureBubble(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SETACTIVEFURNITUREBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Single get_DistanceFromCamera()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_DISTANCEFROMCAMERA_OFFSET))(nullptr);
		}

		::System::Void PlayBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_PLAYBGM_OFFSET))(nullptr);
		}

		::System::Boolean CanExecuteFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_CANEXECUTEFUNCTION_OFFSET))(nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Single get_CellSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_CELLSIZE_OFFSET))(nullptr);
		}

		::FlatData::FurnitureLocation* get_Location()
		{
			return ((::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void OnDeselectFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ONDESELECTFURNITURE_OFFSET))(nullptr);
		}

		::System::Void InitDirector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_INITDIRECTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_IsTemporary(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_ISTEMPORARY_OFFSET))(arg, nullptr);
		}

		::System::Void MuteChildTracks(::UnityEngine::Timeline::TrackAsset* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_MUTECHILDTRACKS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Void PlayPreviousTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_PLAYPREVIOUSTIMELINE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_ISPLAYINGBGM_OFFSET))(nullptr);
		}

		::System::Boolean CanAttachStateAny(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_CANATTACHSTATEANY_OFFSET))(arg, nullptr);
		}

		::System::Void AttachOccupiedArea()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_ATTACHOCCUPIEDAREA_OFFSET))(nullptr);
		}

		::System::String* GetAvailableStateNames()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GETAVAILABLESTATENAMES_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentInteraction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_GET_CURRENTINTERACTION_OFFSET))(nullptr);
		}

		::System::Void _PlayInteraction_g__SetTracksMultipleUniqueIds|26_2(Il2CppObject* arg, FurnitureTimelineType* arg2, <>c__DisplayClass26_0&* arg3)
		{
			((::System::Void(*)(Il2CppObject*, FurnitureTimelineType*, <>c__DisplayClass26_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__PLAYINTERACTION_G__SETTRACKSMULTIPLEUNIQUEIDS|26_2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* _BindCharacters_g__BindDeterministicTracks|32_1(<>c__DisplayClass32_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass32_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL__BINDCHARACTERS_G__BINDDETERMINISTICTRACKS|32_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetColliders(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SETCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetBubbleOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SETBUBBLEORDER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshDistanceFromCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_REFRESHDISTANCEFROMCAMERA_OFFSET))(nullptr);
		}

		::System::Void MoveByLocalPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_MOVEBYLOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByGridPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_MOVEBYGRIDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_FurnitureObject(FurnitureObject* arg)
		{
			((::System::Void(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREVISUAL_SET_FURNITUREOBJECT_OFFSET))(arg, nullptr);
		}

	};

