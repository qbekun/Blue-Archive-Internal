#pragma once
#include "unitysdk.h"

class MXButton;
class UIArenaRankDetail;
class UIArenaRewardDetail;

#define UIPOPUP_ARENARANK___N__0_OFFSET UNITYSDK_OFFSET(0x22029E0)
#define UIPOPUP_ARENARANK_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x22029F0)
#define UIPOPUP_ARENARANK_GET_LASTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x2202A80)
#define UIPOPUP_ARENARANK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2202A90)
#define UIPOPUP_ARENARANK_AWAKE_OFFSET UNITYSDK_OFFSET(0x2202AA0)
#define UIPOPUP_ARENARANK_ONCLICKRANKLIST_OFFSET UNITYSDK_OFFSET(0x2202D90)
#define UIPOPUP_ARENARANK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2202E30)
#define UIPOPUP_ARENARANK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2202EC0)
#define UIPOPUP_ARENARANK_ONCLICKREWARDLIST_OFFSET UNITYSDK_OFFSET(0x2202EF0)
#define UIPOPUP_ARENARANK_SET_LASTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x2202F90)

	inline static constexpr unsigned int UIPopup_ArenaRank_TypeDefinitionIndex = 4301;

	class UIPopup_ArenaRank : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* rankButton; // 0xE0
		MXButton* rewardButton; // 0xE8
		UIArenaRankDetail* arenaRankDetail; // 0xF0
		UIArenaRewardDetail* arenaRewardDetail; // 0xF8
		::System::DateTime* _lastRefreshTime_k__BackingField; // 0x100

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::DateTime* get_lastRefreshTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_GET_LASTREFRESHTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRankList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_ONCLICKRANKLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_ONCLICKREWARDLIST_OFFSET))(nullptr);
		}

		::System::Void set_lastRefreshTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENARANK_SET_LASTREFRESHTIME_OFFSET))(arg, nullptr);
		}

	};

