#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FAC4B0)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FAC4C0)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAC4D0)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAC4E0)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAC790)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FAC820)
#define TIMEATTACKDUNGEONGIVEUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC830)

	inline static constexpr unsigned int TimeAttackDungeonGiveUpNetworkTask_TypeDefinitionIndex = 2868;

	class TimeAttackDungeonGiveUpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RoomId_k__BackingField; // 0x40

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_GET_ROOMID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONGIVEUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

