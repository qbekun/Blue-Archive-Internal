#pragma once
#include "unitysdk.h"

namespace MX::Data { class RaidSeasonInfo; }
class DifficultyTabController;
class IntTabController;
class RaidListScollViewController;
class MXButton;
namespace FlatData { class Difficulty; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIRAIDLOBBY_LIST_ONDIFFICULTYCHANGED_OFFSET UNITYSDK_OFFSET(0x27A6530)
#define UIRAIDLOBBY_LIST_HANDELRAIDLISTMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A6630)
#define UIRAIDLOBBY_LIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27A6950)
#define UIRAIDLOBBY_LIST_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27A6DF0)
#define UIRAIDLOBBY_LIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A6FB0)
#define UIRAIDLOBBY_LIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x27A70C0)
#define UIRAIDLOBBY_LIST_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x27A71F0)
#define UIRAIDLOBBY_LIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A7280)
#define UIRAIDLOBBY_LIST_ONBOSSCHANGED_OFFSET UNITYSDK_OFFSET(0x27A73E0)
#define UIRAIDLOBBY_LIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x27A65C0)
#define UIRAIDLOBBY_LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A78A0)

	inline static constexpr unsigned int UIRaidLobby_List_TypeDefinitionIndex = 7490;

	class UIRaidLobby_List : public Il2CppObject
	{
	public:
		::MX::Data::RaidSeasonInfo* curSeason; // 0xD8
		DifficultyTabController* DifficultyTab; // 0xE0
		IntTabController* BossTab; // 0xE8
		RaidListScollViewController* ScrollView; // 0xF0
		::Il2CppArray<::System::Object*>* GroupSelectLabel; // 0xF8
		::Il2CppArray<::System::Object*>* GroupNoneSelectLabel; // 0x100
		MXButton* RefreshButton; // 0x108
		Il2CppObject* roomList; // 0x110

		::System::Void OnDifficultyChanged(::System::Boolean arg, ::FlatData::Difficulty* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONDIFFICULTYCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandelRaidListMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_HANDELRAIDLISTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONCLICKREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnBossChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_ONBOSSCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* RefreshList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_LIST_.CTOR_OFFSET))(nullptr);
		}

	};

