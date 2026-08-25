#pragma once
#include "unitysdk.h"

class ChatDialogEvent;
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define SPINECHATDIALOGCONTAINEREVENT_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xC1C240)
#define SPINECHATDIALOGCONTAINEREVENT_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xC1C250)
#define SPINECHATDIALOGCONTAINEREVENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xC1C260)
#define SPINECHATDIALOGCONTAINEREVENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC1C290)
#define SPINECHATDIALOGCONTAINEREVENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC1C390)
#define SPINECHATDIALOGCONTAINEREVENT_INITCATEGORYANDSEASONINFO_OFFSET UNITYSDK_OFFSET(0xC1C3C0)
#define SPINECHATDIALOGCONTAINEREVENT_CONNECTSPINECHARACTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xC1C550)
#define SPINECHATDIALOGCONTAINEREVENT_SETRANDOMCHARACTER_OFFSET UNITYSDK_OFFSET(0xC1C720)
#define SPINECHATDIALOGCONTAINEREVENT_SETCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xC1C830)
#define SPINECHATDIALOGCONTAINEREVENT_PLAYDIALOGONPURCHASE_OFFSET UNITYSDK_OFFSET(0xC1C840)
#define SPINECHATDIALOGCONTAINEREVENT_INITSPINE_OFFSET UNITYSDK_OFFSET(0xC1C890)
#define SPINECHATDIALOGCONTAINEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1CAA0)
#define SPINECHATDIALOGCONTAINEREVENT__CONNECTSPINECHARACTERCALLBACKS_B__12_0_OFFSET UNITYSDK_OFFSET(0xC1CAC0)

	inline static constexpr unsigned int SpineChatDialogContainerEvent_TypeDefinitionIndex = 8861;

	class SpineChatDialogContainerEvent : public Il2CppObject
	{
	public:
		ChatDialogEvent* chatDialogEvent; // 0x58
		::System::Int64 _CostumeId_k__BackingField; // 0x60
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x68
		::System::Int32 SpineCharacterOriginalDepth; // 0x70

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::FlatData::DialogCategory* arg, ::MX::Data::EventContentSeasonInfo* arg2)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_ONOPENED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitCategoryAndSeasonInfo(::FlatData::DialogCategory* arg, ::MX::Data::EventContentSeasonInfo* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_INITCATEGORYANDSEASONINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ConnectSpineCharacterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_CONNECTSPINECHARACTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void SetRandomCharacter(::MX::Data::EventContentSeasonInfo* arg, ::FlatData::DialogCategory* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_SETRANDOMCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_SETCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean PlayDialogOnPurchase(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_PLAYDIALOGONPURCHASE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitSpine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_INITSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ConnectSpineCharacterCallbacks_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINEREVENT__CONNECTSPINECHARACTERCALLBACKS_B__12_0_OFFSET))(nullptr);
		}

	};

