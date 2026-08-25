#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldDateInfo; }
namespace MXField::UI { class UIFieldDateResult; }
class UIBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_ACTIONS_ENDDATEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEE9E80)
#define MXFIELD_ACTIONS_ENDDATEACTION__HANDLEENDDATERESPONSE_B__11_1_OFFSET UNITYSDK_OFFSET(0xEE9F10)
#define MXFIELD_ACTIONS_ENDDATEACTION__COEXECUTE_B__9_0_OFFSET UNITYSDK_OFFSET(0xEE9F40)
#define MXFIELD_ACTIONS_ENDDATEACTION_DEACTIVATEALLOBJECTSINNONPERSISTENTSCENES_OFFSET UNITYSDK_OFFSET(0xEE9F50)
#define MXFIELD_ACTIONS_ENDDATEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEA080)
#define MXFIELD_ACTIONS_ENDDATEACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEA1C0)
#define MXFIELD_ACTIONS_ENDDATEACTION_HANDLEENDDATERESPONSE_OFFSET UNITYSDK_OFFSET(0xEEA310)
#define MXFIELD_ACTIONS_ENDDATEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEA4D0)
#define MXFIELD_ACTIONS_ENDDATEACTION_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEA500)
#define MXFIELD_ACTIONS_ENDDATEACTION_GET_DATEINFO_OFFSET UNITYSDK_OFFSET(0xEEA510)
#define MXFIELD_ACTIONS_ENDDATEACTION__HANDLEENDDATERESPONSE_B__11_0_OFFSET UNITYSDK_OFFSET(0xEEA520)
#define MXFIELD_ACTIONS_ENDDATEACTION_SET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEA530)

namespace MXField::Actions
{
	inline static constexpr unsigned int EndDateAction_TypeDefinitionIndex = 11041;

	class EndDateAction : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldDateInfo* _DateInfo_k__BackingField; // 0x40
		::System::Boolean _IsWaiting_k__BackingField; // 0x48

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void _HandleEndDateResponse_b__11_1(::MXField::UI::UIFieldDateResult* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldDateResult*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION__HANDLEENDDATERESPONSE_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Void _CoExecute_b__9_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION__COEXECUTE_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void DeactivateAllObjectsInNonPersistentScenes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_DEACTIVATEALLOBJECTSINNONPERSISTENTSCENES_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEndDateResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_HANDLEENDDATERESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_GET_ISWAITING_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldDateInfo* get_DateInfo()
		{
			return ((::MXField::Shared::Data::FieldDateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_GET_DATEINFO_OFFSET))(nullptr);
		}

		::System::Void _HandleEndDateResponse_b__11_0(::MXField::UI::UIFieldDateResult* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldDateResult*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION__HANDLEENDDATERESPONSE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWaiting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDDATEACTION_SET_ISWAITING_OFFSET))(arg, nullptr);
		}

	};
}

