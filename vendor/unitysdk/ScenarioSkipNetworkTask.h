#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOSKIPNETWORKTASK_GET_SKIPPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9B300)
#define SCENARIOSKIPNETWORKTASK_SET_SKIPPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9B310)
#define SCENARIOSKIPNETWORKTASK_SET_ID_OFFSET UNITYSDK_OFFSET(0x1F9B320)
#define SCENARIOSKIPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9B330)
#define SCENARIOSKIPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9B3C0)
#define SCENARIOSKIPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F9B4C0)
#define SCENARIOSKIPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9B4D0)
#define SCENARIOSKIPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B4E0)
#define SCENARIOSKIPNETWORKTASK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1F9B4F0)

	inline static constexpr unsigned int ScenarioSkipNetworkTask_TypeDefinitionIndex = 2783;

	class ScenarioSkipNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x40
		::System::Int32 _SkipPointCount_k__BackingField; // 0x48

		::System::Int32 get_SkipPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_GET_SKIPPOINTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SkipPointCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_SET_SKIPPOINTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSKIPNETWORKTASK_GET_ID_OFFSET))(nullptr);
		}

	};

