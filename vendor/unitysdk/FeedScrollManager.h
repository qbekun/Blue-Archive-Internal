#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIPanel;
namespace UnityEngine { class Transform; }
class UIScrollBar;
namespace UnityEngine { class Vector3; }
class UISNS_Post;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }
class FeedItemData;

#define FEEDSCROLLMANAGER_COUPDATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0xAD69B0)
#define FEEDSCROLLMANAGER_COBUILDPOSTHEIGHT_OFFSET UNITYSDK_OFFSET(0xAD6A20)
#define FEEDSCROLLMANAGER_REBUILDCUMULATIVEHEIGHTS_OFFSET UNITYSDK_OFFSET(0xAD6AA0)
#define FEEDSCROLLMANAGER_MOVETOTARGETPOSTONOPENED_OFFSET UNITYSDK_OFFSET(0xAD6C70)
#define FEEDSCROLLMANAGER_RESETSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xAD6E10)
#define FEEDSCROLLMANAGER_RECYCLEALL_OFFSET UNITYSDK_OFFSET(0xAD7450)
#define FEEDSCROLLMANAGER_TRYGETACTIVEVIEW_OFFSET UNITYSDK_OFFSET(0xAD7670)
#define FEEDSCROLLMANAGER_SETDATA_OFFSET UNITYSDK_OFFSET(0xAD7710)
#define FEEDSCROLLMANAGER_FINDINDEXATOFFSET_OFFSET UNITYSDK_OFFSET(0xAD7B20)
#define FEEDSCROLLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAD7BE0)
#define FEEDSCROLLMANAGER_GET_CONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xAD8EE0)
#define FEEDSCROLLMANAGER_SETDATAONFIELD_OFFSET UNITYSDK_OFFSET(0xAD8F50)
#define FEEDSCROLLMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAD90E0)
#define FEEDSCROLLMANAGER_GET_ISMOVETOTARGETPOSTCOMPLETED_OFFSET UNITYSDK_OFFSET(0xAD9100)
#define FEEDSCROLLMANAGER_ONITEMHEIGHTCHANGED_OFFSET UNITYSDK_OFFSET(0xAD9110)
#define FEEDSCROLLMANAGER_SETSCROLLVIEWSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAD6FB0)
#define FEEDSCROLLMANAGER_ONSCROLLBARPRESSED_OFFSET UNITYSDK_OFFSET(0xAD9540)
#define FEEDSCROLLMANAGER_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0xAD7600)
#define FEEDSCROLLMANAGER_MOVETOLASTPOSITIONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0xAD6ED0)
#define FEEDSCROLLMANAGER__COMOVETOTARGETINDEX_G__TRYMOVETOTARGETPOST|53_0_OFFSET UNITYSDK_OFFSET(0xAD9580)
#define FEEDSCROLLMANAGER_RESTARTUPDATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0xAD7000)
#define FEEDSCROLLMANAGER_UPDATEVISIBLEITEMS_OFFSET UNITYSDK_OFFSET(0xAD7BF0)
#define FEEDSCROLLMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD9AE0)
#define FEEDSCROLLMANAGER_GETFROMPOOL_OFFSET UNITYSDK_OFFSET(0xAD96E0)
#define FEEDSCROLLMANAGER_COMOVETOTARGETINDEX_OFFSET UNITYSDK_OFFSET(0xAD6F30)
#define FEEDSCROLLMANAGER_GETFIELDPOSTANINAME_OFFSET UNITYSDK_OFFSET(0xAD9DE0)
#define FEEDSCROLLMANAGER_REGISTERSCROLLBAREVENT_OFFSET UNITYSDK_OFFSET(0xAD70C0)
#define FEEDSCROLLMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAD9E50)
#define FEEDSCROLLMANAGER_SETFIELDPOSTANI_OFFSET UNITYSDK_OFFSET(0xAD9850)
#define FEEDSCROLLMANAGER_PLACEVIEW_OFFSET UNITYSDK_OFFSET(0xAD9980)
#define FEEDSCROLLMANAGER_CACHELASTSCROLLVIEWPOSITIONY_OFFSET UNITYSDK_OFFSET(0xAD9F40)

	inline static constexpr unsigned int FeedScrollManager_TypeDefinitionIndex = 8074;

	class FeedScrollManager : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIPanel* panel; // 0x20
		::UnityEngine::Transform* contentRoot; // 0x28
		UIScrollBar* scrollBar; // 0x30
		::UnityEngine::Transform* scrollBarObjectTransform; // 0x38
		::UnityEngine::Vector3* _scrollViewStartLocalPos; // 0x40
		::System::Single bottomMargin; // 0x4C
		::System::Int32 extraBuffer; // 0x50
		::System::Single customPostDrawWaitTime; // 0x54
		UISNS_Post* itemPrefab; // 0x58
		::UnityEngine::GameObject* recentMarker; // 0x60
		::System::Single animationTriggerOffset; // 0x68
		::System::Int32 postSizeMeasureBatchSize; // 0x6C
		Il2CppObject* _dataList; // 0x70
		::System::Int32 _bookmarkIndex; // 0x78
		Il2CppObject* _cumulativeHeights; // 0x80
		Il2CppObject* _activeViewsByIndex; // 0x88
		Il2CppObject* _pool; // 0x90
		::System::Boolean _isInitialized; // 0x98
		::System::Boolean _isMoveToTargetPostCompleted; // 0x99
		Il2CppObject* _threadReplyAniPlayedPostIds; // 0xA0
		Il2CppObject* _repostFavorPlayedIds; // 0xA8
		::System::Boolean _isScrollBarPressed; // 0xB0
		::UnityEngine::Coroutine* _updateScrollBarCoroutine; // 0xB8
		::System::Single _lastScrollViewLocalPositionY; // 0xC0
		Il2CppObject* _toRemove; // 0xC8
		Il2CppObject* _favorRepostEffectPlaying; // 0xD0
		::System::Int32 _currentStartIndex; // 0xD8
		::UnityEngine::Coroutine* _moveToLastCoroutine; // 0xE0

		::System::Collections::IEnumerator* CoUpdateScrollBar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_COUPDATESCROLLBAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoBuildPostHeight(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_COBUILDPOSTHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void RebuildCumulativeHeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_REBUILDCUMULATIVEHEIGHTS_OFFSET))(nullptr);
		}

		::System::Void MoveToTargetPostOnOpened(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_MOVETOTARGETPOSTONOPENED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_RESETSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void RecycleAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_RECYCLEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetActiveView(FeedItemData* arg, UISNS_Post&* arg2)
		{
			return ((::System::Boolean(*)(FeedItemData*, UISNS_Post&*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_TRYGETACTIVEVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 FindIndexAtOffset(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_FINDINDEXATOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Single get_ContentSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_GET_CONTENTSIZE_OFFSET))(nullptr);
		}

		::System::Void SetDataOnField(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_SETDATAONFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMoveToTargetPostCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_GET_ISMOVETOTARGETPOSTCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnItemHeightChanged(::System::Int32 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_ONITEMHEIGHTCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetScrollViewStartPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_SETSCROLLVIEWSTARTPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnScrollBarPressed(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_ONSCROLLBARPRESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReturnToPool(UISNS_Post* arg)
		{
			((::System::Void(*)(UISNS_Post*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_RETURNTOPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToLastPositionBeforeClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_MOVETOLASTPOSITIONBEFORECLOSE_OFFSET))(nullptr);
		}

		::System::Void _CoMoveToTargetIndex_g__TryMoveToTargetPost|53_0(<>c__DisplayClass53_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass53_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER__COMOVETOTARGETINDEX_G__TRYMOVETOTARGETPOST|53_0_OFFSET))(arg, nullptr);
		}

		::System::Void RestartUpdateScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_RESTARTUPDATESCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void UpdateVisibleItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_UPDATEVISIBLEITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_.CTOR_OFFSET))(nullptr);
		}

		UISNS_Post* GetFromPool()
		{
			return ((UISNS_Post*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_GETFROMPOOL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToTargetIndex(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_COMOVETOTARGETINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetFieldPostAniName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_GETFIELDPOSTANINAME_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterScrollBarEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_REGISTERSCROLLBAREVENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetFieldPostAni(UISNS_Post* arg, FeedItemData* arg2)
		{
			((::System::Void(*)(UISNS_Post*, FeedItemData*, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_SETFIELDPOSTANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlaceView(UISNS_Post* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UISNS_Post*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_PLACEVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CacheLastScrollViewPositionY()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDSCROLLMANAGER_CACHELASTSCROLLVIEWPOSITIONY_OFFSET))(nullptr);
		}

	};

