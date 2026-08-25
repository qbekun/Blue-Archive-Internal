#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EQUIPMENTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F60FA0)
#define EQUIPMENTLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F60FB0)
#define EQUIPMENTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F60FC0)
#define EQUIPMENTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61050)
#define EQUIPMENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F61060)

	inline static constexpr unsigned int EquipmentListNetworkTask_TypeDefinitionIndex = 2397;

	class EquipmentListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

