#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFEACKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0EA30)
#define CAFEACKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EAC0)
#define CAFEACKNETWORKTASK_SET_DBID_OFFSET UNITYSDK_OFFSET(0x1F0EAD0)
#define CAFEACKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0EAE0)
#define CAFEACKNETWORKTASK_GET_DBID_OFFSET UNITYSDK_OFFSET(0x1F0EAF0)
#define CAFEACKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0EB00)
#define CAFEACKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0EB90)

	inline static constexpr unsigned int CafeAckNetworkTask_TypeDefinitionIndex = 2021;

	class CafeAckNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _DBId_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_SET_DBID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_DBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_GET_DBID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEACKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

