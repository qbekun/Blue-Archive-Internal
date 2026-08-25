#pragma once
#include "unitysdk.h"

class UICharacterCard;
class MXButton;
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIEmblemParcel;
namespace MX::GameLogic::DBModel { class ArenaDamageReportDB; }
class UIPopup_ArenaSummary;

#define UIARENAHISTORYELEMENT_GET_ARENADAMAGEREPORTDB_OFFSET UNITYSDK_OFFSET(0x21F4CA0)
#define UIARENAHISTORYELEMENT_SETTIMESPANLABEL_OFFSET UNITYSDK_OFFSET(0x21F4CB0)
#define UIARENAHISTORYELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21F4FB0)
#define UIARENAHISTORYELEMENT_SET_ARENADAMAGEREPORTDB_OFFSET UNITYSDK_OFFSET(0x21F5340)
#define UIARENAHISTORYELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F5350)
#define UIARENAHISTORYELEMENT__ONCLICKSUMMARY_B__17_0_OFFSET UNITYSDK_OFFSET(0x21F5490)
#define UIARENAHISTORYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F54C0)
#define UIARENAHISTORYELEMENT_ONCLICKSUMMARY_OFFSET UNITYSDK_OFFSET(0x21F5500)

	inline static constexpr unsigned int UIArenaHistoryElement_TypeDefinitionIndex = 4261;

	class UIArenaHistoryElement : public ::System::Xml::XmlDownloadManager
	{
	public:
		UICharacterCard* characterCard; // 0x28
		MXButton* summaryButton; // 0x30
		UITexture* winImage; // 0x38
		UITexture* loseImage; // 0x40
		UILabel* nameLabel; // 0x48
		UILabel* levelLabel; // 0x50
		UILabel* timeSpanLabel; // 0x58
		::UnityEngine::GameObject* attackerObject; // 0x60
		::UnityEngine::GameObject* defenderObject; // 0x68
		UIEmblemParcel* emblem; // 0x70
		::MX::GameLogic::DBModel::ArenaDamageReportDB* _arenaDamageReportDB_k__BackingField; // 0x78

		::MX::GameLogic::DBModel::ArenaDamageReportDB* get_arenaDamageReportDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaDamageReportDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_GET_ARENADAMAGEREPORTDB_OFFSET))(nullptr);
		}

		::System::Void SetTimeSpanLabel(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_SETTIMESPANLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ArenaDamageReportDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaDamageReportDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_arenaDamageReportDB(::MX::GameLogic::DBModel::ArenaDamageReportDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaDamageReportDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_SET_ARENADAMAGEREPORTDB_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSummary_b__17_0(UIPopup_ArenaSummary* arg)
		{
			((::System::Void(*)(UIPopup_ArenaSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT__ONCLICKSUMMARY_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSummary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYELEMENT_ONCLICKSUMMARY_OFFSET))(nullptr);
		}

	};

