#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDREMOVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7A370)
#define FRIENDREMOVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A5D0)
#define FRIENDREMOVENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7A5E0)
#define FRIENDREMOVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7A5F0)
#define FRIENDREMOVENETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7A680)
#define FRIENDREMOVENETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7A690)
#define FRIENDREMOVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7A6A0)

	inline static constexpr unsigned int FriendRemoveNetworkTask_TypeDefinitionIndex = 2571;

	class FriendRemoveNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDREMOVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

