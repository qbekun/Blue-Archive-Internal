#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F10A00)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F10A90)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F111C0)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F11250)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F11260)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F11270)
#define CAFEINTERACTIONWITHCHARACTERNETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F11280)

	inline static constexpr unsigned int CafeInteractionWithCharacterNetworkTask_TypeDefinitionIndex = 2032;

	class CafeInteractionWithCharacterNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINTERACTIONWITHCHARACTERNETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};

