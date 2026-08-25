#pragma once
#include "unitysdk.h"

class UIArenaUserSummary;
class MXButton;
namespace MX::GameLogic::DBModel { class ArenaHistoryDB; }
namespace MX::GameLogic::DBModel { class ArenaDamageReportDB; }
namespace MX::Logic::Battles { class Battle; }

#define UIPOPUP_ARENASUMMARY_AWAKE_OFFSET UNITYSDK_OFFSET(0x22037C0)
#define UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22038F0)
#define UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2203D80)
#define UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22044D0)
#define UIPOPUP_ARENASUMMARY_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2204740)
#define UIPOPUP_ARENASUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2204760)

	inline static constexpr unsigned int UIPopup_ArenaSummary_TypeDefinitionIndex = 4304;

	class UIPopup_ArenaSummary : public Il2CppObject
	{
	public:
		UIArenaUserSummary* playerSummary; // 0xD8
		UIArenaUserSummary* opponentSummary; // 0xE0
		MXButton* closeButton; // 0xE8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ArenaHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ArenaDamageReportDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaDamageReportDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENASUMMARY_.CTOR_OFFSET))(nullptr);
		}

	};

