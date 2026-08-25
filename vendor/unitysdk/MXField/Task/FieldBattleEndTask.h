#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IFieldStage; }
namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_TASK_FIELDBATTLEENDTASK_HANDLEUIOPENSTART_OFFSET UNITYSDK_OFFSET(0xEB3B30)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_SET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEB3D80)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB3D90)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEB3DA0)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xEB3DB0)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEB3EB0)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_SETDATA_OFFSET UNITYSDK_OFFSET(0xEB3EC0)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_GET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEB3F00)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEB3F10)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_RETURNTOFIELD_OFFSET UNITYSDK_OFFSET(0xEB4010)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_CORETURNTOFIELD_OFFSET UNITYSDK_OFFSET(0xEB40F0)
#define MXFIELD_TASK_FIELDBATTLEENDTASK_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xEB4190)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldBattleEndTask_TypeDefinitionIndex = 10810;

	class FieldBattleEndTask : public Il2CppObject
	{
	public:
		::MX::Data::IFieldStage* _StageInfo_k__BackingField; // 0x10
		::MXField::Shared::Data::FieldSceneInfo* _NextSceneInfo_k__BackingField; // 0x18

		::System::Boolean HandleUIOpenStart(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_HANDLEUIOPENSTART_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextSceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_SET_NEXTSCENEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::IFieldStage* get_StageInfo()
		{
			return ((::MX::Data::IFieldStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::IFieldStage* arg)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::IFieldStage* arg, ::MXField::Shared::Data::FieldSceneInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_NextSceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_GET_NEXTSCENEINFO_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ReturnToField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_RETURNTOFIELD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoReturnToField(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_CORETURNTOFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDTASK_ONFINISHED_OFFSET))(nullptr);
		}

	};
}

