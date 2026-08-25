#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFEREMOVEFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F13A70)
#define CAFEREMOVEFURNITURENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F13E20)
#define CAFEREMOVEFURNITURENETWORKTASK_SET_REMOVEDSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1F13EB0)
#define CAFEREMOVEFURNITURENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F13EC0)
#define CAFEREMOVEFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F13ED0)
#define CAFEREMOVEFURNITURENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F13EE0)
#define CAFEREMOVEFURNITURENETWORKTASK_GET_REMOVEDSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1F13F70)

	inline static constexpr unsigned int CafeRemoveFurnitureNetworkTask_TypeDefinitionIndex = 2047;

	class CafeRemoveFurnitureNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _RemovedServerIds_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_RemovedServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_SET_REMOVEDSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_RemovedServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURENETWORKTASK_GET_REMOVEDSERVERIDS_OFFSET))(nullptr);
		}

	};

