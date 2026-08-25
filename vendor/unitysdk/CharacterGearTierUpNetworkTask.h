#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERGEARTIERUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F20390)
#define CHARACTERGEARTIERUPNETWORKTASK_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x1F203A0)
#define CHARACTERGEARTIERUPNETWORKTASK_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x1F203B0)
#define CHARACTERGEARTIERUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F203C0)
#define CHARACTERGEARTIERUPNETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F20450)
#define CHARACTERGEARTIERUPNETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F20460)
#define CHARACTERGEARTIERUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F20470)
#define CHARACTERGEARTIERUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F207F0)
#define CHARACTERGEARTIERUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F20800)

	inline static constexpr unsigned int CharacterGearTierUpNetworkTask_TypeDefinitionIndex = 2130;

	class CharacterGearTierUpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

