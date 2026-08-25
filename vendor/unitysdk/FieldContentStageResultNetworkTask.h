#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define FIELDCONTENTSTAGERESULTNETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1D1D070)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1D1D080)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D090)
#define FIELDCONTENTSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D1D0A0)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1D1D0B0)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D1D0C0)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1D1D660)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1D1D670)
#define FIELDCONTENTSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1D1D700)

	inline static constexpr unsigned int FieldContentStageResultNetworkTask_TypeDefinitionIndex = 1660;

	class FieldContentStageResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

	};

