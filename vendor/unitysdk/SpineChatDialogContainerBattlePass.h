#pragma once
#include "unitysdk.h"

namespace MX::Data { class BattlePassSeasonInfo; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define SPINECHATDIALOGCONTAINERBATTLEPASS_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xC1BA40)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xC1BA50)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xC1BA60)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC1BA90)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC1BC00)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1BCD0)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_INITCATEGORYANDSEASONINFO_OFFSET UNITYSDK_OFFSET(0xC1BAF0)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_CONNECTSPINECHARACTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xC1BD00)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_SETRANDOMCHARACTER_OFFSET UNITYSDK_OFFSET(0xC1BEA0)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_PLAYDIALOG_OFFSET UNITYSDK_OFFSET(0xC1BF30)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_INITSPINE_OFFSET UNITYSDK_OFFSET(0xC1BF80)
#define SPINECHATDIALOGCONTAINERBATTLEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1C190)
#define SPINECHATDIALOGCONTAINERBATTLEPASS__CONNECTSPINECHARACTERCALLBACKS_B__11_0_OFFSET UNITYSDK_OFFSET(0xC1C1A0)

	inline static constexpr unsigned int SpineChatDialogContainerBattlePass_TypeDefinitionIndex = 8859;

	class SpineChatDialogContainerBattlePass : public Il2CppObject
	{
	public:
		::System::Int64 _CostumeId_k__BackingField; // 0x58
		::MX::Data::BattlePassSeasonInfo* seasonInfo; // 0x60

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::FlatData::DialogCategory* arg, ::MX::Data::BattlePassSeasonInfo* arg2)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::MX::Data::BattlePassSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_ONOPENED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void InitCategoryAndSeasonInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_INITCATEGORYANDSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectSpineCharacterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_CONNECTSPINECHARACTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void SetRandomCharacter(::MX::Data::BattlePassSeasonInfo* arg, ::FlatData::DialogCategory* arg2)
		{
			((::System::Void(*)(::MX::Data::BattlePassSeasonInfo*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_SETRANDOMCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean PlayDialog(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_PLAYDIALOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitSpine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_INITSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ConnectSpineCharacterCallbacks_b__11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINERBATTLEPASS__CONNECTSPINECHARACTERCALLBACKS_B__11_0_OFFSET))(nullptr);
		}

	};

