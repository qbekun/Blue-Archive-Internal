#pragma once
#include "unitysdk.h"

class UILabel;
class UIBattlePassParcelCard;
namespace UnityEngine { class GameObject; }
class BattlePassLock;
class BattlePassRewardScrollViewElementData;
class BattlePassTask;

#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x224D3D0)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_ENABLEUNLOCKVFX_OFFSET UNITYSDK_OFFSET(0x224CDC0)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_GET_TASK_OFFSET UNITYSDK_OFFSET(0x224DB40)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x224DB80)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x224E0A0)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x224E0B0)
#define UIBATTLEPASSREWARDSCROLLVIEWELEMENT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x224E0F0)

	inline static constexpr unsigned int UIBattlePassRewardScrollViewElement_TypeDefinitionIndex = 4523;

	class UIBattlePassRewardScrollViewElement : public ::System::Xml::XmlCachedStream
	{
	public:
		UILabel* LevelLabel; // 0x28
		UIBattlePassParcelCard* FreeTrackCard; // 0x30
		UIBattlePassParcelCard* PaidTrackCard; // 0x38
		::UnityEngine::GameObject* FreeTrackCardReceivedReward; // 0x40
		::UnityEngine::GameObject* PaidTrackCardReceivedReward; // 0x48
		BattlePassLock* Lock; // 0x50
		::UnityEngine::GameObject* NowLabel; // 0x58
		UILabel* NowLevelLabel; // 0x60
		::UnityEngine::GameObject* NowBG; // 0x68
		::UnityEngine::GameObject* PickUpBG; // 0x70
		::System::Int32 _Level_k__BackingField; // 0x78
		BattlePassRewardScrollViewElementData* data; // 0x80

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void EnableUnlockVFX()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_ENABLEUNLOCKVFX_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void SetData(BattlePassRewardScrollViewElementData* arg)
		{
			((::System::Void(*)(BattlePassRewardScrollViewElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSREWARDSCROLLVIEWELEMENT_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};

