#pragma once
#include "unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F56D80)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDEQUIPMENTSERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F56D90)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDFURNITURESERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F56DA0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDITEMSERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F56DB0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F56DC0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F57280)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDFURNITURESERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F57310)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F57320)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F573B0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK__PROCESSSESSION_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F573C0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDEQUIPMENTSERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F573D0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F573E0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F573F0)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDITEMSERVERIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0x1F57400)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CRAFTCONSUMEGOLDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F57410)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CRAFTCONSUMEGOLDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1F57420)
#define CRAFTUPDATENODEQUALITYNETWORKTASK_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F57430)

	inline static constexpr unsigned int CraftUpdateNodeQualityNetworkTask_TypeDefinitionIndex = 2332;

	class CraftUpdateNodeQualityNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _ConsumedItemServerIdAndCount_k__BackingField; // 0x40
		Il2CppObject* _ConsumedEquipmentServerIdAndCount_k__BackingField; // 0x48
		Il2CppObject* _ConsumedFurnitureServerIdAndCount_k__BackingField; // 0x50
		::System::Int64 _CraftConsumeGoldAmount_k__BackingField; // 0x58
		::System::Int64 _CraftSlotId_k__BackingField; // 0x60
		::FlatData::CraftNodeTier* _NodeType_k__BackingField; // 0x68

		::FlatData::CraftNodeTier* get_NodeType()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConsumedEquipmentServerIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDEQUIPMENTSERVERIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumedFurnitureServerIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDFURNITURESERVERIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumedItemServerIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CONSUMEDITEMSERVERIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumedFurnitureServerIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDFURNITURESERVERIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__24_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK__PROCESSSESSION_B__24_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumedEquipmentServerIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDEQUIPMENTSERVERIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CRAFTSLOTID_OFFSET))(nullptr);
		}

		::System::Void set_CraftSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CRAFTSLOTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumedItemServerIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CONSUMEDITEMSERVERIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftConsumeGoldAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_GET_CRAFTCONSUMEGOLDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CraftConsumeGoldAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_CRAFTCONSUMEGOLDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_NodeType(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYNETWORKTASK_SET_NODETYPE_OFFSET))(arg, nullptr);
		}

	};

