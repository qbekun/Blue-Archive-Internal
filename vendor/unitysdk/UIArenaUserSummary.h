#pragma once
#include "unitysdk.h"

class UIBattleSummary;
class UICharacterCard;
class UITexture;
class UISprite;
class UILabel;
class UIEmblemParcel;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::Logic::Battles::Summary { class GroupSummary; }

#define UIARENAUSERSUMMARY_SETDATA_OFFSET UNITYSDK_OFFSET(0x21FBA90)
#define UIARENAUSERSUMMARY_SETDATA_OFFSET UNITYSDK_OFFSET(0x21FC3E0)
#define UIARENAUSERSUMMARY_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x21FBDD0)
#define UIARENAUSERSUMMARY_GETREPRESENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0x21FBEF0)
#define UIARENAUSERSUMMARY_GETEMBLEMID_OFFSET UNITYSDK_OFFSET(0x21FBC70)
#define UIARENAUSERSUMMARY_GETREPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x21FBFA0)
#define UIARENAUSERSUMMARY_SETDATA_OFFSET UNITYSDK_OFFSET(0x21FC5C0)
#define UIARENAUSERSUMMARY_SETWIDGETS_OFFSET UNITYSDK_OFFSET(0x21FC050)
#define UIARENAUSERSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x21FC940)
#define UIARENAUSERSUMMARY__SETWIDGETS_G__GETREPRESENTCHARACTERID|16_0_OFFSET UNITYSDK_OFFSET(0x21FC680)
#define UIARENAUSERSUMMARY__SETWIDGETS_G__GETREPRESENTCHARACTERCOSTUMEID|16_1_OFFSET UNITYSDK_OFFSET(0x21FC720)
#define UIARENAUSERSUMMARY__SETWIDGETS_G__GETUSERNAME|16_2_OFFSET UNITYSDK_OFFSET(0x21FC7C0)
#define UIARENAUSERSUMMARY__SETWIDGETS_G__GETEMBLEMID|16_3_OFFSET UNITYSDK_OFFSET(0x21FC8A0)

	inline static constexpr unsigned int UIArenaUserSummary_TypeDefinitionIndex = 4279;

	class UIArenaUserSummary : public Il2CppObject
	{
	public:
		UIBattleSummary* uiBattleSummary; // 0x18
		UICharacterCard* characterCard; // 0x20
		UITexture* winImage; // 0x28
		UITexture* loseImage; // 0x30
		UISprite* attackerImage; // 0x38
		UISprite* defenderImage; // 0x40
		UILabel* nameLabel; // 0x48
		UILabel* levelLabel; // 0x50
		UIEmblemParcel* emblem; // 0x58

		::System::Void SetData(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::MX::Logic::Battles::Summary::GroupSummary* arg2, ::System::Int64 arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::MX::Logic::Battles::Summary::GroupSummary*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ArenaUserDB* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, Il2CppObject*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::String* GetUserName(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_GETUSERNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetRepresentCharacterId(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_GETREPRESENTCHARACTERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetEmblemId(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_GETEMBLEMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetRepresentCharacterCostumeId(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_GETREPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Logic::Battles::Summary::GroupSummary* arg, ::System::String* str, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Boolean arg8, ::System::Int64 arg9, ::System::Boolean arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_SETDATA_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void SetWidgets(::System::String* str, ::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Int64 arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_SETWIDGETS_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 _SetWidgets_g__GetRepresentCharacterId|16_0(<>c__DisplayClass16_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY__SETWIDGETS_G__GETREPRESENTCHARACTERID|16_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 _SetWidgets_g__GetRepresentCharacterCostumeId|16_1(<>c__DisplayClass16_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY__SETWIDGETS_G__GETREPRESENTCHARACTERCOSTUMEID|16_1_OFFSET))(arg, nullptr);
		}

		::System::String* _SetWidgets_g__GetUserName|16_2(<>c__DisplayClass16_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY__SETWIDGETS_G__GETUSERNAME|16_2_OFFSET))(arg, nullptr);
		}

		::System::Int64 _SetWidgets_g__GetEmblemId|16_3(<>c__DisplayClass16_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERSUMMARY__SETWIDGETS_G__GETEMBLEMID|16_3_OFFSET))(arg, nullptr);
		}

	};

