#pragma once
#include "unitysdk.h"

class UIGrid;
class UIWrapContent;
class RaidRankListProcessDelegatorBase;

#define RAIDRANKLISTSCROLLVIEWCONTROLLER_REFRESHGRID_OFFSET UNITYSDK_OFFSET(0x2786D20)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_PREVREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x2786DC0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_REQUESTNEXTLIST_OFFSET UNITYSDK_OFFSET(0x2786DD0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_SCROLLLISTISEMPTY_OFFSET UNITYSDK_OFFSET(0x2786DF0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYSCORE_OFFSET UNITYSDK_OFFSET(0x2786E40)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_CURRENTLASTRANK_OFFSET UNITYSDK_OFFSET(0x2787070)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYELIMINATERAIDBRACKET_OFFSET UNITYSDK_OFFSET(0x27871D0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_CURRENTFIRSTRANK_OFFSET UNITYSDK_OFFSET(0x2787430)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_REMOVEDUPLICATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x2787590)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_NEXTREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x2787730)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SET_PREVREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x2787740)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_REQUESTPREVLIST_OFFSET UNITYSDK_OFFSET(0x2787760)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2787780)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SETBLOCKFIRSTREACHEDACTION_OFFSET UNITYSDK_OFFSET(0x2787880)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x27876C0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27878C0)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SET_NEXTREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x2787910)
#define RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYRANK_OFFSET UNITYSDK_OFFSET(0x2787930)

	inline static constexpr unsigned int RaidRankListScrollViewController_TypeDefinitionIndex = 7407;

	class RaidRankListScrollViewController : public VirtualAttribute
	{
	public:
		UIGrid* ScrollViewGrid; // 0x90
		UIWrapContent* ScrollViewWarpContent; // 0x98
		::System::Single RankElementGridHeight; // 0xA0
		::System::Single FilterElementGridHeight; // 0xA4
		::System::Action* _PrevRequestCallBack_k__BackingField; // 0xA8
		::System::Action* _NextRequestCallBack_k__BackingField; // 0xB0

		::System::Void RefreshGrid(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_REFRESHGRID_OFFSET))(arg, nullptr);
		}

		::System::Action* get_PrevRequestCallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_PREVREQUESTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void RequestNextList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_REQUESTNEXTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_ScrollListIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_SCROLLLISTISEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetOpponentListByScore(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYSCORE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* get_CurrentLastRank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_CURRENTLASTRANK_OFFSET))(nullptr);
		}

		::System::Void SetOpponentListByEliminateRaidBracket(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Int32 arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYELIMINATERAIDBRACKET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_CurrentFirstRank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_CURRENTFIRSTRANK_OFFSET))(nullptr);
		}

		::System::Void RemoveDuplicated(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_REMOVEDUPLICATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init(RaidRankListProcessDelegatorBase* arg)
		{
			((::System::Void(*)(RaidRankListProcessDelegatorBase*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Action* get_NextRequestCallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_GET_NEXTREQUESTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_PrevRequestCallBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SET_PREVREQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPrevList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_REQUESTPREVLIST_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetBlockFirstReachedAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SETBLOCKFIRSTREACHEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_NextRequestCallBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SET_NEXTREQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpponentListByRank(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWCONTROLLER_SETOPPONENTLISTBYRANK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};

