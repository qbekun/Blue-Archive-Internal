#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F54A00)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F54A90)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CRAFTSHIFTINGRECIPEID_OFFSET UNITYSDK_OFFSET(0x1F54AA0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F54AB0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F54AC0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F54AD0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F54AE0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F54DA0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F54DB0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CRAFTSHIFTINGRECIPEID_OFFSET UNITYSDK_OFFSET(0x1F54DC0)
#define CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F54DD0)

	inline static constexpr unsigned int CraftShiftingBeginProcessNetworkTask_TypeDefinitionIndex = 2317;

	class CraftShiftingBeginProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftShiftingSlotId_k__BackingField; // 0x40
		::System::Int64 _CraftShiftingRecipeId_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeDB_k__BackingField; // 0x50

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftShiftingSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftShiftingRecipeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CRAFTSHIFTINGRECIPEID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_GET_CONSUMEDB_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CONSUMEDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CraftShiftingSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftShiftingRecipeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_SET_CRAFTSHIFTINGRECIPEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

