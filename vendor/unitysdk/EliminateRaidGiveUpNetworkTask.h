#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDGIVEUPNETWORKTASK_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F5C2D0)
#define ELIMINATERAIDGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5C2E0)
#define ELIMINATERAIDGIVEUPNETWORKTASK_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F5C2F0)
#define ELIMINATERAIDGIVEUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C300)
#define ELIMINATERAIDGIVEUPNETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F5C310)
#define ELIMINATERAIDGIVEUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F5C320)
#define ELIMINATERAIDGIVEUPNETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F5C330)
#define ELIMINATERAIDGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5C340)
#define ELIMINATERAIDGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5C6E0)

	inline static constexpr unsigned int EliminateRaidGiveUpNetworkTask_TypeDefinitionIndex = 2367;

	class EliminateRaidGiveUpNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

