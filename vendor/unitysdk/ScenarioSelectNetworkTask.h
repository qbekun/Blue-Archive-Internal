#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOSELECTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9A850)
#define SCENARIOSELECTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9A950)
#define SCENARIOSELECTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9A9E0)
#define SCENARIOSELECTNETWORKTASK_SET_SCRIPTSELECTGROUP_OFFSET UNITYSDK_OFFSET(0x1F9A9F0)
#define SCENARIOSELECTNETWORKTASK_GET_SCRIPTSELECTGROUP_OFFSET UNITYSDK_OFFSET(0x1F9AA00)
#define SCENARIOSELECTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9AA10)
#define SCENARIOSELECTNETWORKTASK_SET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x1F9AA20)
#define SCENARIOSELECTNETWORKTASK_GET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x1F9AA30)
#define SCENARIOSELECTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F9AA40)

	inline static constexpr unsigned int ScenarioSelectNetworkTask_TypeDefinitionIndex = 2778;

	class ScenarioSelectNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ScriptGroupId_k__BackingField; // 0x40
		::System::Int64 _ScriptSelectGroup_k__BackingField; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ScriptSelectGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_SET_SCRIPTSELECTGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScriptSelectGroup()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_GET_SCRIPTSELECTGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScriptGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_SET_SCRIPTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScriptGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK_GET_SCRIPTGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

