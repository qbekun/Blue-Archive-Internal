#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANMEMBERLISTNETWORKTASK_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F28350)
#define CLANMEMBERLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F28360)
#define CLANMEMBERLISTNETWORKTASK_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F28590)
#define CLANMEMBERLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F285A0)
#define CLANMEMBERLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F28630)
#define CLANMEMBERLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F28640)
#define CLANMEMBERLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F28650)

	inline static constexpr unsigned int ClanMemberListNetworkTask_TypeDefinitionIndex = 2186;

	class ClanMemberListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x40

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_GET_CLANDBID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

