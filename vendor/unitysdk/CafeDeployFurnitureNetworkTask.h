#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFEDEPLOYFURNITURENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F590)
#define CAFEDEPLOYFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0F5A0)
#define CAFEDEPLOYFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0F5B0)
#define CAFEDEPLOYFURNITURENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0F930)
#define CAFEDEPLOYFURNITURENETWORKTASK_GET_FURNITUREDBTODEPLOY_OFFSET UNITYSDK_OFFSET(0x1F0F9C0)
#define CAFEDEPLOYFURNITURENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0F9D0)
#define CAFEDEPLOYFURNITURENETWORKTASK_SET_FURNITUREDBTODEPLOY_OFFSET UNITYSDK_OFFSET(0x1F0FA60)

	inline static constexpr unsigned int CafeDeployFurnitureNetworkTask_TypeDefinitionIndex = 2026;

	class CafeDeployFurnitureNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FurnitureDB* _FurnitureDBToDeploy_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* get_FurnitureDBToDeploy()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_GET_FURNITUREDBTODEPLOY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBToDeploy(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYFURNITURENETWORKTASK_SET_FURNITUREDBTODEPLOY_OFFSET))(arg, nullptr);
		}

	};

