#pragma once
#include "unitysdk.h"

class UIWorldRaidBosslistScrollViewController;
class UIWorldRaidEnterParcel;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_WORLDRAIDBOSSLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE2960)
#define UIPOPUP_WORLDRAIDBOSSLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xBE2970)
#define UIPOPUP_WORLDRAIDBOSSLIST_SETINFO_OFFSET UNITYSDK_OFFSET(0xBE3720)
#define UIPOPUP_WORLDRAIDBOSSLIST_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBE3740)
#define UIPOPUP_WORLDRAIDBOSSLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE37D0)
#define UIPOPUP_WORLDRAIDBOSSLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBE38E0)
#define UIPOPUP_WORLDRAIDBOSSLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE38F0)
#define UIPOPUP_WORLDRAIDBOSSLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE3A60)

	inline static constexpr unsigned int UIPopup_WorldRaidBosslist_TypeDefinitionIndex = 8712;

	class UIPopup_WorldRaidBosslist : public Il2CppObject
	{
	public:
		UIWorldRaidBosslistScrollViewController* ScrollView; // 0xD8
		UIWorldRaidEnterParcel* EnterParcel; // 0xE0
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0xE8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_SETINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleWorldRaidBossListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDBOSSLIST_.CTOR_OFFSET))(nullptr);
		}

	};

