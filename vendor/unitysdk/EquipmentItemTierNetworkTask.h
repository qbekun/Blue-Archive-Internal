#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EQUIPMENTITEMTIERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5FFE0)
#define EQUIPMENTITEMTIERNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F5FFF0)
#define EQUIPMENTITEMTIERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F60000)
#define EQUIPMENTITEMTIERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F60090)
#define EQUIPMENTITEMTIERNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F60530)
#define EQUIPMENTITEMTIERNETWORKTASK_GET_TARGETEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1F60540)
#define EQUIPMENTITEMTIERNETWORKTASK_SET_TARGETEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1F60550)
#define EQUIPMENTITEMTIERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F60560)
#define EQUIPMENTITEMTIERNETWORKTASK__PROCESSSESSION_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F60570)

	inline static constexpr unsigned int EquipmentItemTierNetworkTask_TypeDefinitionIndex = 2392;

	class EquipmentItemTierNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetEquipmentId_k__BackingField; // 0x40
		Il2CppObject* ReplaceInfos; // 0x48
		Il2CppObject* _ConsumedItemDBIdAndCount_k__BackingField; // 0x50
		Il2CppObject* ChangePieceInfos; // 0x58

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumedItemDBIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_GET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ConsumedItemDBIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_SET_CONSUMEDITEMDBIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetEquipmentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_GET_TARGETEQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Void set_TargetEquipmentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_SET_TARGETEQUIPMENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERNETWORKTASK__PROCESSSESSION_B__10_0_OFFSET))(nullptr);
		}

	};

