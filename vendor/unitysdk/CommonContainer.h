#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UITexture;
namespace FlatData { class WeekDungeonType; }
namespace UnityEngine { class Texture; }

#define COMMONCONTAINER_SET_OFFSET UNITYSDK_OFFSET(0xBCFB10)
#define COMMONCONTAINER__SET_B__9_0_OFFSET UNITYSDK_OFFSET(0xBCFE00)
#define COMMONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCFE30)
#define COMMONCONTAINER_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0xBCFE40)
#define COMMONCONTAINER_REFRESHTICKET_OFFSET UNITYSDK_OFFSET(0xBCFA10)
#define COMMONCONTAINER_SET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0xBCFE50)

	inline static constexpr unsigned int CommonContainer_TypeDefinitionIndex = 8656;

	class CommonContainer : public Il2CppObject
	{
	public:
		UILabel* TitleLabel; // 0x10
		UILabel* RemainCountLabel; // 0x18
		UILabel* TicketNameLabel; // 0x20
		UISprite* TicketSprite; // 0x28
		UITexture* Texture; // 0x30
		::FlatData::WeekDungeonType* _DungeonType_k__BackingField; // 0x38

		::System::Void Set(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER_SET_OFFSET))(arg, nullptr);
		}

		::System::Void _Set_b__9_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER__SET_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* get_DungeonType()
		{
			return ((::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Void RefreshTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER_REFRESHTICKET_OFFSET))(nullptr);
		}

		::System::Void set_DungeonType(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONCONTAINER_SET_DUNGEONTYPE_OFFSET))(arg, nullptr);
		}

	};

