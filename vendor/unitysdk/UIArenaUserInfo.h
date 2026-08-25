#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UITexture;
class UILabel;
class MXButton;
class UIArenaSetting;
class UIEmblemParcel;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
class UIPopup_ArenaEntry;

#define UIARENAUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21FA6E0)
#define UIARENAUSERINFO__SETDATA_G__GETUSERNAME|15_0_OFFSET UNITYSDK_OFFSET(0x21FA720)
#define UIARENAUSERINFO_ISMYCARDSHIDDEN_OFFSET UNITYSDK_OFFSET(0x21FA840)
#define UIARENAUSERINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x21FAA00)
#define UIARENAUSERINFO_HIDEMAPLABEL_OFFSET UNITYSDK_OFFSET(0x21FAB80)
#define UIARENAUSERINFO_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0x21FABA0)
#define UIARENAUSERINFO__ONCLICKTHIS_B__18_0_OFFSET UNITYSDK_OFFSET(0x21FAD40)
#define UIARENAUSERINFO__SETDATA_G__GETREPRESENTCHARACTERCOSTUMEID|15_3_OFFSET UNITYSDK_OFFSET(0x21FADB0)
#define UIARENAUSERINFO_SET_ARENAUSERDB_OFFSET UNITYSDK_OFFSET(0x21FAE60)
#define UIARENAUSERINFO__SETDATA_G__GETEMBLEMID|15_2_OFFSET UNITYSDK_OFFSET(0x21FAE70)
#define UIARENAUSERINFO_GET_ARENAUSERDB_OFFSET UNITYSDK_OFFSET(0x21FAFD0)
#define UIARENAUSERINFO_SETMYOFFENSEECHELON_OFFSET UNITYSDK_OFFSET(0x21FAFE0)
#define UIARENAUSERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x21FB540)
#define UIARENAUSERINFO__SETDATA_G__GETREPRESENTCHARACTERID|15_1_OFFSET UNITYSDK_OFFSET(0x21FB9F0)

	inline static constexpr unsigned int UIArenaUserInfo_TypeDefinitionIndex = 4277;

	class UIArenaUserInfo : public ::System::Xml::XmlRegisteredNonCachedStream
	{
	public:
		UICharacterCard* characterCard; // 0x28
		UITexture* rankIcon; // 0x30
		UILabel* levelLabel; // 0x38
		UILabel* nameLabel; // 0x40
		UILabel* rankLabel; // 0x48
		MXButton* selectButton; // 0x50
		UIArenaSetting* arenaSetting; // 0x58
		UIEmblemParcel* emblemParcel; // 0x60
		::MX::GameLogic::DBModel::ArenaUserDB* _ArenaUserDB_k__BackingField; // 0x68
		Il2CppObject* hideMyCards; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* _SetData_g__GetUserName|15_0(<>c__DisplayClass15_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO__SETDATA_G__GETUSERNAME|15_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMyCardsHidden(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_ISMYCARDSHIDDEN_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void HideMapLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_HIDEMAPLABEL_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void _OnClickThis_b__18_0(UIPopup_ArenaEntry* arg)
		{
			((::System::Void(*)(UIPopup_ArenaEntry*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO__ONCLICKTHIS_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 _SetData_g__GetRepresentCharacterCostumeId|15_3(<>c__DisplayClass15_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO__SETDATA_G__GETREPRESENTCHARACTERCOSTUMEID|15_3_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArenaUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_SET_ARENAUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 _SetData_g__GetEmblemId|15_2(<>c__DisplayClass15_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO__SETDATA_G__GETEMBLEMID|15_2_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_ArenaUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_GET_ARENAUSERDB_OFFSET))(nullptr);
		}

		::System::Void SetMyOffenseEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_SETMYOFFENSEECHELON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 _SetData_g__GetRepresentCharacterId|15_1(<>c__DisplayClass15_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAUSERINFO__SETDATA_G__GETREPRESENTCHARACTERID|15_1_OFFSET))(arg, nullptr);
		}

	};

