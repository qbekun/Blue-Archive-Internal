#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ITEMAUTOSYNTHNETWORKTASK_GET_TARGETPARCELS_OFFSET UNITYSDK_OFFSET(0x1FAA2B0)
#define ITEMAUTOSYNTHNETWORKTASK_SET_TARGETPARCELS_OFFSET UNITYSDK_OFFSET(0x1FAA2C0)
#define ITEMAUTOSYNTHNETWORKTASK_GET_VALIDATEDATAS_OFFSET UNITYSDK_OFFSET(0x1FAA2D0)
#define ITEMAUTOSYNTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAA2E0)
#define ITEMAUTOSYNTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAA370)
#define ITEMAUTOSYNTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA400)
#define ITEMAUTOSYNTHNETWORKTASK_SET_VALIDATEDATAS_OFFSET UNITYSDK_OFFSET(0x1FAA410)
#define ITEMAUTOSYNTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FAA420)
#define ITEMAUTOSYNTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAA430)

	inline static constexpr unsigned int ItemAutoSynthNetworkTask_TypeDefinitionIndex = 2856;

	class ItemAutoSynthNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetParcels_k__BackingField; // 0x40
		Il2CppObject* _ValidateDatas_k__BackingField; // 0x48

		Il2CppObject* get_TargetParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_GET_TARGETPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_TargetParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_SET_TARGETPARCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ValidateDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_GET_VALIDATEDATAS_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ValidateDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_SET_VALIDATEDATAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

