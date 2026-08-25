#pragma once
#include "unitysdk.h"

class ButtonActivator;
class TabType;

#define UIARENAREWARDDETAIL_GET_BATTLEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F7940)
#define UIARENAREWARDDETAIL_ONCLICKTIMEREWARDTAB_OFFSET UNITYSDK_OFFSET(0x21F7950)
#define UIARENAREWARDDETAIL_SET_BATTLEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F7B00)
#define UIARENAREWARDDETAIL_ONCLICKNEWRECORDREWARDTAB_OFFSET UNITYSDK_OFFSET(0x21F7B20)
#define UIARENAREWARDDETAIL_ONCLICKDAILYREWARDTAB_OFFSET UNITYSDK_OFFSET(0x21F7CC0)
#define UIARENAREWARDDETAIL_SET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x21F79E0)
#define UIARENAREWARDDETAIL_GET_TIMEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F7F10)
#define UIARENAREWARDDETAIL_ONCLICKBATTLEREWARDTAB_OFFSET UNITYSDK_OFFSET(0x21F7F20)
#define UIARENAREWARDDETAIL_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x21F7E60)
#define UIARENAREWARDDETAIL_INITSEASONREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21F7FB0)
#define UIARENAREWARDDETAIL_INITBATTLEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21F80C0)
#define UIARENAREWARDDETAIL_INITDAILYREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21F7D50)
#define UIARENAREWARDDETAIL_GET_SEASONREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F81E0)
#define UIARENAREWARDDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F81F0)
#define UIARENAREWARDDETAIL_INITTIMEREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21F79F0)
#define UIARENAREWARDDETAIL_INITNEWRECORDREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21F7BB0)
#define UIARENAREWARDDETAIL_GET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x21F8700)
#define UIARENAREWARDDETAIL_SET_TIMEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F8710)
#define UIARENAREWARDDETAIL_SET_NEWRECORDREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F8730)
#define UIARENAREWARDDETAIL_ONCLICKSEASONREWARDTAB_OFFSET UNITYSDK_OFFSET(0x21F8750)
#define UIARENAREWARDDETAIL_GET_NEWRECORDREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F87E0)
#define UIARENAREWARDDETAIL_GET_DAILYREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F87F0)
#define UIARENAREWARDDETAIL_SET_DAILYREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F8800)
#define UIARENAREWARDDETAIL_SET_SEASONREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x21F8820)
#define UIARENAREWARDDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F8840)

	inline static constexpr unsigned int UIArenaRewardDetail_TypeDefinitionIndex = 4272;

	class UIArenaRewardDetail : public BufferChunk
	{
	public:
		ButtonActivator* battleRewardTab; // 0x90
		ButtonActivator* timeRewardTab; // 0x98
		ButtonActivator* dailyRewardTab; // 0xA0
		ButtonActivator* seasonRewardTab; // 0xA8
		ButtonActivator* newRecordRewardTab; // 0xB0
		TabType* currentTab; // 0xB8
		Il2CppObject* _battleRewardInfos_k__BackingField; // 0xC0
		Il2CppObject* _timeRewardInfos_k__BackingField; // 0xC8
		Il2CppObject* _dailyRewardInfos_k__BackingField; // 0xD0
		Il2CppObject* _seasonRewardInfos_k__BackingField; // 0xD8
		Il2CppObject* _newRecordRewardInfos_k__BackingField; // 0xE0

		Il2CppObject* get_battleRewardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_BATTLEREWARDINFOS_OFFSET))(nullptr);
		}

		::System::Void OnClickTimeRewardTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_ONCLICKTIMEREWARDTAB_OFFSET))(nullptr);
		}

		::System::Void set_battleRewardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_BATTLEREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNewRecordRewardTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_ONCLICKNEWRECORDREWARDTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickDailyRewardTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_ONCLICKDAILYREWARDTAB_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTab(TabType* arg)
		{
			((::System::Void(*)(TabType*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_CURRENTTAB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_timeRewardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_TIMEREWARDINFOS_OFFSET))(nullptr);
		}

		::System::Void OnClickBattleRewardTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_ONCLICKBATTLEREWARDTAB_OFFSET))(nullptr);
		}

		::System::Void RefreshTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_REFRESHTAB_OFFSET))(nullptr);
		}

		::System::Void InitSeasonRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_INITSEASONREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void InitBattleRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_INITBATTLEREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void InitDailyRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_INITDAILYREWARDINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_seasonRewardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_SEASONREWARDINFOS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitTimeRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_INITTIMEREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void InitNewRecordRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_INITNEWRECORDREWARDINFO_OFFSET))(nullptr);
		}

		TabType* get_CurrentTab()
		{
			return ((TabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_CURRENTTAB_OFFSET))(nullptr);
		}

		::System::Void set_timeRewardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_TIMEREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_newRecordRewardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_NEWRECORDREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSeasonRewardTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_ONCLICKSEASONREWARDTAB_OFFSET))(nullptr);
		}

		Il2CppObject* get_newRecordRewardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_NEWRECORDREWARDINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_dailyRewardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_GET_DAILYREWARDINFOS_OFFSET))(nullptr);
		}

		::System::Void set_dailyRewardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_DAILYREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_seasonRewardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_SET_SEASONREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDDETAIL_.CTOR_OFFSET))(nullptr);
		}

	};

