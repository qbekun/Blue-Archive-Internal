#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define WORLDRAIDRECEIVEREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FB1970)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB1A00)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB1A10)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FB1A20)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB1C00)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1FB1C10)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB1C20)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB1C30)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1C40)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FB1C50)
#define WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FB1C60)

	inline static constexpr unsigned int WorldRaidReceiveRewardNetworkTask_TypeDefinitionIndex = 2901;

	class WorldRaidReceiveRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::System::Int64 _PhaseId_k__BackingField; // 0x48
		::System::Action* _errorCallback_k__BackingField; // 0x50

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_errorCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_SET_ERRORCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Action* get_errorCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRECEIVEREWARDNETWORKTASK_GET_ERRORCALLBACK_OFFSET))(nullptr);
		}

	};

