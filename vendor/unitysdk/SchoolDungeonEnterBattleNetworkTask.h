#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCHOOLDUNGEONENTERBATTLENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F9CF30)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9CF40)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_SET_SELECTEDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1F9D170)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_SET_SELECTEDECHELON_OFFSET UNITYSDK_OFFSET(0x1F9D180)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_GET_SELECTEDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1F9D190)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9D1A0)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9D1B0)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D240)
#define SCHOOLDUNGEONENTERBATTLENETWORKTASK_GET_SELECTEDECHELON_OFFSET UNITYSDK_OFFSET(0x1F9D250)

	inline static constexpr unsigned int SchoolDungeonEnterBattleNetworkTask_TypeDefinitionIndex = 2794;

	class SchoolDungeonEnterBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedStageId_k__BackingField; // 0x40
		::System::Int32 _SelectedEchelon_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_SelectedStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_SET_SELECTEDSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedEchelon(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_SET_SELECTEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectedStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_GET_SELECTEDSTAGEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedEchelon()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONENTERBATTLENETWORKTASK_GET_SELECTEDECHELON_OFFSET))(nullptr);
		}

	};

