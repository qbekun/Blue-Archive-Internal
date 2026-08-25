#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFERELOCATEFURNITURENETWORKTASK_GET_FURNITUREDBTORELOCATE_OFFSET UNITYSDK_OFFSET(0x1F12AC0)
#define CAFERELOCATEFURNITURENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12AD0)
#define CAFERELOCATEFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F12B60)
#define CAFERELOCATEFURNITURENETWORKTASK_SET_FURNITUREDBTORELOCATE_OFFSET UNITYSDK_OFFSET(0x1F12B70)
#define CAFERELOCATEFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F12B80)
#define CAFERELOCATEFURNITURENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F12E20)
#define CAFERELOCATEFURNITURENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F12EB0)

	inline static constexpr unsigned int CafeRelocateFurnitureNetworkTask_TypeDefinitionIndex = 2041;

	class CafeRelocateFurnitureNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FurnitureDB* _FurnitureDBToRelocate_k__BackingField; // 0x40

		::MX::GameLogic::DBModel::FurnitureDB* get_FurnitureDBToRelocate()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_GET_FURNITUREDBTORELOCATE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBToRelocate(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_SET_FURNITUREDBTORELOCATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATEFURNITURENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

