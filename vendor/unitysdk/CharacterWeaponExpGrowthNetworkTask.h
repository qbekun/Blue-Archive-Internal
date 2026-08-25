#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERWEAPONEXPGROWTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F23760)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F23770)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F23780)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_GET_CONSUMEIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0x1F23790)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F237A0)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F237B0)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F239F0)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F23A00)
#define CHARACTERWEAPONEXPGROWTHNETWORKTASK_SET_CONSUMEIDANDCOUNTS_OFFSET UNITYSDK_OFFSET(0x1F23A90)

	inline static constexpr unsigned int CharacterWeaponExpGrowthNetworkTask_TypeDefinitionIndex = 2153;

	class CharacterWeaponExpGrowthNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _ConsumeIdAndCounts_k__BackingField; // 0x40
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumeIdAndCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_GET_CONSUMEIDANDCOUNTS_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeIdAndCounts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHNETWORKTASK_SET_CONSUMEIDANDCOUNTS_OFFSET))(arg, nullptr);
		}

	};

