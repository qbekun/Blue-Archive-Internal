#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERFAVORNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F1F720)
#define CHARACTERFAVORNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F1F730)
#define CHARACTERFAVORNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F1F740)
#define CHARACTERFAVORNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1F750)
#define CHARACTERFAVORNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F7E0)
#define CHARACTERFAVORNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1F7F0)
#define CHARACTERFAVORNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1F800)
#define CHARACTERFAVORNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1F810)
#define CHARACTERFAVORNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1FBA0)

	inline static constexpr unsigned int CharacterFavorNetworkTask_TypeDefinitionIndex = 2125;

	class CharacterFavorNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40
		Il2CppObject* _ConsumedItemDBIdAndCount_k__BackingField; // 0x48

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumedItemDBIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* get_ConsumedItemDBIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFAVORNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(nullptr);
		}

	};

