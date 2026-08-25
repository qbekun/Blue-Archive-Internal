#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class UITexture;
namespace FlatData { class SchoolDungeonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class Texture; }

#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA66820)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA66920)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xA66AA0)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_REFRESHTICKET_OFFSET UNITYSDK_OFFSET(0xA66830)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO__SETDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xA66ED0)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA66F00)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA66F10)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA66F20)
#define UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA66F30)

	inline static constexpr unsigned int UISchoolDungeonStageSelectContentInfo_TypeDefinitionIndex = 7826;

	class UISchoolDungeonStageSelectContentInfo : public Il2CppObject
	{
	public:
		UILabel* title; // 0x18
		UISprite* ticketSprite; // 0x20
		UILabel* ticketLabel; // 0x28
		::UnityEngine::GameObject* rewardEventDisplay; // 0x30
		UILabel* rewardEventInfo; // 0x38
		UITexture* schoolTexture; // 0x40
		UILabel* description; // 0x48
		::FlatData::SchoolDungeonType* _Type_k__BackingField; // 0x50

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_REFRESHTICKET_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__14_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO__SETDATA_B__14_0_OFFSET))(arg, nullptr);
		}

		::FlatData::SchoolDungeonType* get_Type()
		{
			return ((::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECTCONTENTINFO_AWAKE_OFFSET))(nullptr);
		}

	};

