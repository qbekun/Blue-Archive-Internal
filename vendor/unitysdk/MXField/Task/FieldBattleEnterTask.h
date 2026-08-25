#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IFieldStage; }
namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
class UIFormation;
namespace MXField::Actions { class CoFieldAction; }

#define MXFIELD_TASK_FIELDBATTLEENTERTASK_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xEB4AD0)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_SET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEB4C20)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB4C30)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_ONUICLOSED_OFFSET UNITYSDK_OFFSET(0xEB4C40)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_GET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEB4E30)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEB4E40)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_ACTIVATEFORMATIONUICAMERA_OFFSET UNITYSDK_OFFSET(0xEB4E50)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEB4F20)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK__INITACTION_B__14_0_OFFSET UNITYSDK_OFFSET(0xEB4F30)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_COLOADINGACTION_OFFSET UNITYSDK_OFFSET(0xEB4F40)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEB4F50)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_INITACTION_OFFSET UNITYSDK_OFFSET(0xEB5050)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xEB51F0)
#define MXFIELD_TASK_FIELDBATTLEENTERTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEB52F0)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldBattleEnterTask_TypeDefinitionIndex = 10812;

	class FieldBattleEnterTask : public Il2CppObject
	{
	public:
		::System::Int32 cullingMaskCache; // 0x10
		::MX::Data::IFieldStage* _StageInfo_k__BackingField; // 0x18
		::MXField::Shared::Data::FieldSceneInfo* _NextSceneInfo_k__BackingField; // 0x20

		::System::Void EnterBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_ENTERBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_NextSceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_SET_NEXTSCENEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnUIClosed(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_ONUICLOSED_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_NextSceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_GET_NEXTSCENEINFO_OFFSET))(nullptr);
		}

		::MX::Data::IFieldStage* get_StageInfo()
		{
			return ((::MX::Data::IFieldStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void ActivateFormationUICamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_ACTIVATEFORMATIONUICAMERA_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::IFieldStage* arg)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void _InitAction_b__14_0(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK__INITACTION_B__14_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CoLoadingAction(UIFormation* arg)
		{
			((::System::Void(*)(UIFormation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_COLOADINGACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitAction(UIFormation* arg)
		{
			((::System::Void(*)(UIFormation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_INITACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Data::IFieldStage* arg, ::MXField::Actions::CoFieldAction* arg2, ::MXField::Shared::Data::FieldSceneInfo* arg3)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::MXField::Actions::CoFieldAction*, ::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERTASK_EXECUTE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

