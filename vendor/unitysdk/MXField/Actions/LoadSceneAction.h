#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xEEF9E0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_PREVIOUSSCENEGROUPID_OFFSET UNITYSDK_OFFSET(0xEEF9F0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_FINISHEDACTION_OFFSET UNITYSDK_OFFSET(0xEEFA00)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEEFA10)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xEEFA30)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISSYNCCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEEFAD0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_SET_ISSYNCCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEEFAE0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xEEFAF0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xEEFB00)
#define MXFIELD_ACTIONS_LOADSCENEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEFB10)
#define MXFIELD_ACTIONS_LOADSCENEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEFC50)
#define MXFIELD_ACTIONS_LOADSCENEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEFCA0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEFF20)
#define MXFIELD_ACTIONS_LOADSCENEACTION_HANDLESCENECHANGEDRESPONSE_OFFSET UNITYSDK_OFFSET(0xEF01D0)
#define MXFIELD_ACTIONS_LOADSCENEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF0240)
#define MXFIELD_ACTIONS_LOADSCENEACTION_REQUESTSCENECHANGED_OFFSET UNITYSDK_OFFSET(0xEF02D0)
#define MXFIELD_ACTIONS_LOADSCENEACTION__COEXECUTE_B__26_0_OFFSET UNITYSDK_OFFSET(0xEF0410)

namespace MXField::Actions
{
	inline static constexpr unsigned int LoadSceneAction_TypeDefinitionIndex = 11081;

	class LoadSceneAction : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldSceneInfo* _SceneInfo_k__BackingField; // 0x40
		::System::Int64 _PreviousSceneGroupId_k__BackingField; // 0x48
		::System::Action* _FinishedAction_k__BackingField; // 0x50
		::System::Boolean _IsSyncComplete_k__BackingField; // 0x58
		::System::Boolean _IsFinished_k__BackingField; // 0x59

		::MXField::Shared::Data::FieldSceneInfo* get_SceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_SCENEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_PreviousSceneGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_PREVIOUSSCENEGROUPID_OFFSET))(nullptr);
		}

		::System::Action* get_FinishedAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_FINISHEDACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_NEEDSYNC_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSyncComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISSYNCCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_IsSyncComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_SET_ISSYNCCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_GET_ISFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_IsFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_SET_ISFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldSceneInfo* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean HandleSceneChangedResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_HANDLESCENECHANGEDRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void RequestSceneChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_REQUESTSCENECHANGED_OFFSET))(nullptr);
		}

		::System::Void _CoExecute_b__26_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION__COEXECUTE_B__26_0_OFFSET))(nullptr);
		}

	};
}

