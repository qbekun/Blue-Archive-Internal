#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTEREXPNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F1EF30)
#define CHARACTEREXPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1EF40)
#define CHARACTEREXPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F1F350)
#define CHARACTEREXPNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1F360)
#define CHARACTEREXPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1F370)
#define CHARACTEREXPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1F380)
#define CHARACTEREXPNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1F410)
#define CHARACTEREXPNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F1F420)
#define CHARACTEREXPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F430)

	inline static constexpr unsigned int CharacterExpNetworkTask_TypeDefinitionIndex = 2122;

	class CharacterExpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40
		Il2CppObject* _ConsumedItemDBIdAndCount_k__BackingField; // 0x48

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumedItemDBIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ConsumedItemDBIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEREXPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

