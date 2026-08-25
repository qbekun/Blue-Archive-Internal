#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDGETFRIENDDETAILEDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F79330)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F79340)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F79350)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F79360)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F795F0)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F79600)
#define FRIENDGETFRIENDDETAILEDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F79610)

	inline static constexpr unsigned int FriendGetFriendDetailedNetworkTask_TypeDefinitionIndex = 2564;

	class FriendGetFriendDetailedNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETFRIENDDETAILEDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

