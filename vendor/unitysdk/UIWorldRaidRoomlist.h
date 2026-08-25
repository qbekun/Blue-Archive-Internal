#pragma once
#include "unitysdk.h"

class UIWorldRaidBossInfo;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIWorldRaidRoomlistInfo;

#define UIWORLDRAIDROOMLIST_HANDLEENTERPOPUPOPENEDCALLBACKMESSAGE_OFFSET UNITYSDK_OFFSET(0xC08820)
#define UIWORLDRAIDROOMLIST_RESETANIMATION_OFFSET UNITYSDK_OFFSET(0xC08A00)
#define UIWORLDRAIDROOMLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC08AC0)
#define UIWORLDRAIDROOMLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xC08B30)
#define UIWORLDRAIDROOMLIST_ONCLICKROOM_OFFSET UNITYSDK_OFFSET(0xC09720)
#define UIWORLDRAIDROOMLIST_PLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC08990)
#define UIWORLDRAIDROOMLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xC09B30)

	inline static constexpr unsigned int UIWorldRaidRoomlist_TypeDefinitionIndex = 8801;

	class UIWorldRaidRoomlist : public ::System::Xml::Serialization::XmlAttributeAttribute
	{
	public:
		UIWorldRaidBossInfo* uiWorldRaidBossInfo; // 0x28
		UILabel* DifficultyLabel; // 0x30
		::UnityEngine::GameObject* Lock; // 0x38
		UILabel* LockLabel; // 0x40
		::UnityEngine::GameObject* SelectMark; // 0x48
		MXButton* RoomButton; // 0x50
		::UnityEngine::Animation* UnlockAnimation; // 0x58
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* bossDB; // 0x60

		::System::Boolean HandleEnterPopupOpenedCallBackMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_HANDLEENTERPOPUPOPENEDCALLBACKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_RESETANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(UIWorldRaidRoomlistInfo* arg)
		{
			((::System::Void(*)(UIWorldRaidRoomlistInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_ONCLICKROOM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_PLAYUNLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLIST_.CTOR_OFFSET))(nullptr);
		}

	};

