#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::Data::Excel { class ScenarioModeExcel; }

#define SCENARIOCLEARNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F93C70)
#define SCENARIOCLEARNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F93C80)
#define SCENARIOCLEARNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F93D10)
#define SCENARIOCLEARNETWORKTASK_GET_MODEID_OFFSET UNITYSDK_OFFSET(0x1F93D20)
#define SCENARIOCLEARNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F93D30)
#define SCENARIOCLEARNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F93D40)
#define SCENARIOCLEARNETWORKTASK_SET_MODEID_OFFSET UNITYSDK_OFFSET(0x1F94940)
#define SCENARIOCLEARNETWORKTASK_SHOWSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x1F94750)
#define SCENARIOCLEARNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F94960)
#define SCENARIOCLEARNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F94970)

	inline static constexpr unsigned int ScenarioClearNetworkTask_TypeDefinitionIndex = 2743;

	class ScenarioClearNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ModeId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x48

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_GET_MODEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_SET_MODEID_OFFSET))(arg, nullptr);
		}

		::System::Void ShowSpecialReward(::MX::Data::Excel::ScenarioModeExcel* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_SHOWSPECIALREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLEARNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

	};

