#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDGIVEUPNETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8E6E0)
#define RAIDGIVEUPNETWORKTASK_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8E6F0)
#define RAIDGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8E700)
#define RAIDGIVEUPNETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8E790)
#define RAIDGIVEUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E7A0)
#define RAIDGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8E7B0)
#define RAIDGIVEUPNETWORKTASK_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8EB50)
#define RAIDGIVEUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F8EB60)
#define RAIDGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8EB70)

	inline static constexpr unsigned int RaidGiveUpNetworkTask_TypeDefinitionIndex = 2700;

	class RaidGiveUpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

