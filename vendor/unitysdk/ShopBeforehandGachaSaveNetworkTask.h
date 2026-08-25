#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBEFOREHANDGACHASAVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA0A50)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1FA0BF0)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1FA0C00)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FA0C10)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1FA0C20)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA0C30)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_SET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1FA0C40)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C50)
#define SHOPBEFOREHANDGACHASAVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA0C60)

	inline static constexpr unsigned int ShopBeforehandGachaSaveNetworkTask_TypeDefinitionIndex = 2812;

	class ShopBeforehandGachaSaveNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetIndex_k__BackingField; // 0x40
		Il2CppObject* _SlotNumber_k__BackingField; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_SlotNumber(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SlotNumber()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_TargetIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_SET_TARGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHASAVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

