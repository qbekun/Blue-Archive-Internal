#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDACCEPTNETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F78230)
#define FRIENDACCEPTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F78240)
#define FRIENDACCEPTNETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F78250)
#define FRIENDACCEPTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F78260)
#define FRIENDACCEPTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F78270)
#define FRIENDACCEPTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F78300)
#define FRIENDACCEPTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F78310)

	inline static constexpr unsigned int FriendAcceptNetworkTask_TypeDefinitionIndex = 2556;

	class FriendAcceptNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDACCEPTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

