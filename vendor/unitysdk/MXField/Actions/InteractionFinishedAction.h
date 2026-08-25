#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MXField::Shared::Model { class FieldInteractionDB; }

#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEDDA0)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_GET_INTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEEDDB0)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEDDC0)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEDE50)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEDE80)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_HANDLEINTERACTIONRESPONSE_OFFSET UNITYSDK_OFFSET(0xEEDE90)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_SET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEE160)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEE170)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION__COEXECUTE_B__9_0_OFFSET UNITYSDK_OFFSET(0xEEE240)

namespace MXField::Actions
{
	inline static constexpr unsigned int InteractionFinishedAction_TypeDefinitionIndex = 11071;

	class InteractionFinishedAction : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldInteractionInfo* _InteractionInfo_k__BackingField; // 0x40
		::System::Boolean _IsWaiting_k__BackingField; // 0x48

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_EXECUTE_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* get_InteractionInfo()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_GET_INTERACTIONINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_GET_ISWAITING_OFFSET))(nullptr);
		}

		::System::Boolean HandleInteractionResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_HANDLEINTERACTIONRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWaiting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_SET_ISWAITING_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean _CoExecute_b__9_0(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDACTION__COEXECUTE_B__9_0_OFFSET))(arg, nullptr);
		}

	};
}

