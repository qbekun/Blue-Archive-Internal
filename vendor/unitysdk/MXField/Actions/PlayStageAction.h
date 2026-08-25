#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IFieldStage; }
namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEF37D0)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xEF37E0)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_SET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0xEF37F0)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEF3800)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_SET_NEXTSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEF3810)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF3820)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF3910)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF39A0)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_HANDLEFIELDBATTLEENDDISPATCH_OFFSET UNITYSDK_OFFSET(0xEF3A30)
#define MXFIELD_ACTIONS_PLAYSTAGEACTION_SETNEXTSCENE_OFFSET UNITYSDK_OFFSET(0xEF3C50)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayStageAction_TypeDefinitionIndex = 11110;

	class PlayStageAction : public Il2CppObject
	{
	public:
		::MX::Data::IFieldStage* _StageInfo_k__BackingField; // 0x40
		::System::Boolean _IsInBattle_k__BackingField; // 0x48
		::MXField::Shared::Data::FieldSceneInfo* _NextSceneInfo_k__BackingField; // 0x50

		::MX::Data::IFieldStage* get_StageInfo()
		{
			return ((::MX::Data::IFieldStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_ISINBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_IsInBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_SET_ISINBATTLE_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_NextSceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_GET_NEXTSCENEINFO_OFFSET))(nullptr);
		}

		::System::Void set_NextSceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_SET_NEXTSCENEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::IFieldStage* arg)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFieldBattleEndDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_HANDLEFIELDBATTLEENDDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextScene(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSTAGEACTION_SETNEXTSCENE_OFFSET))(arg, nullptr);
		}

	};
}

