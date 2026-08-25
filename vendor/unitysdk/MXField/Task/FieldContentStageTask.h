#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FieldStageSaveDB; }
namespace MX::Data { class CampaignStageInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MXField::Shared::NetworkProtocol { class FieldEnterStageResponse; }

#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB5510)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEB5520)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_GET_STAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xEB5680)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xEB5690)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_REQUESTENTER_OFFSET UNITYSDK_OFFSET(0xEB5810)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_SET_STAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xEB58E0)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xEB5900)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_HANDLEUIOPENSTART_OFFSET UNITYSDK_OFFSET(0xEB5910)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_HANDLEENTERSTAGERESPONSE_OFFSET UNITYSDK_OFFSET(0xEB5B60)
#define MXFIELD_TASK_FIELDCONTENTSTAGETASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xEB5CB0)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldContentStageTask_TypeDefinitionIndex = 10813;

	class FieldContentStageTask : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x80
		::MX::GameLogic::DBModel::FieldStageSaveDB* _StageSaveDB_k__BackingField; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FieldStageSaveDB* get_StageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::FieldStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_GET_STAGESAVEDB_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void RequestEnter(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_REQUESTENTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_StageSaveDB(::MX::GameLogic::DBModel::FieldStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FieldStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_SET_STAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleUIOpenStart(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_HANDLEUIOPENSTART_OFFSET))(arg, nullptr);
		}

		::System::Void HandleEnterStageResponse(::MXField::Shared::NetworkProtocol::FieldEnterStageResponse* arg, ::MX::Data::CampaignStageInfo* arg2)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldEnterStageResponse*, ::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_HANDLEENTERSTAGERESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDCONTENTSTAGETASK_GET_SEASONID_OFFSET))(nullptr);
		}

	};
}

