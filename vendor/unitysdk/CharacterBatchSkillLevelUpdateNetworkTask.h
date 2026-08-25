#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1E810)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1E820)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F1E8B0)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_SET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F1E8C0)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1E8D0)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_GET_SKILLLEVELUPDATEREQUESTDBS_OFFSET UNITYSDK_OFFSET(0x1F1EC50)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EC60)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_SET_SKILLLEVELUPDATEREQUESTDBS_OFFSET UNITYSDK_OFFSET(0x1F1EC70)
#define CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_GET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F1EC80)

	inline static constexpr unsigned int CharacterBatchSkillLevelUpdateNetworkTask_TypeDefinitionIndex = 2119;

	class CharacterBatchSkillLevelUpdateNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterDBId_k__BackingField; // 0x40
		Il2CppObject* _SkillLevelUpdateRequestDBs_k__BackingField; // 0x48

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_SET_TARGETCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* get_SkillLevelUpdateRequestDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_GET_SKILLLEVELUPDATEREQUESTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SkillLevelUpdateRequestDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_SET_SKILLLEVELUPDATEREQUESTDBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATENETWORKTASK_GET_TARGETCHARACTERDBID_OFFSET))(nullptr);
		}

	};

