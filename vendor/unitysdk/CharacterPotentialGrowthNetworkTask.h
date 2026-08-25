#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F211F0)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F21200)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_POTENTIALGROWTHREQUESTDBS_OFFSET UNITYSDK_OFFSET(0x1F21530)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x1F21540)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F21550)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_POTENTIALGROWTHREQUESTDBS_OFFSET UNITYSDK_OFFSET(0x1F215E0)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F215F0)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F21600)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F21610)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x1F21620)
#define CHARACTERPOTENTIALGROWTHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F21630)

	inline static constexpr unsigned int CharacterPotentialGrowthNetworkTask_TypeDefinitionIndex = 2137;

	class CharacterPotentialGrowthNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterDBId_k__BackingField; // 0x40
		Il2CppObject* _PotentialGrowthRequestDBs_k__BackingField; // 0x48
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x50

		::System::Int64 get_TargetCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_TARGETCHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_PotentialGrowthRequestDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_POTENTIALGROWTHREQUESTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_PotentialGrowthRequestDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_GET_POTENTIALGROWTHREQUESTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_TARGETCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

	};

