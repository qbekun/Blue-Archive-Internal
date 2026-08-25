#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANMEMBERNETWORKTASK_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F288D0)
#define CLANMEMBERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F288E0)
#define CLANMEMBERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F28970)
#define CLANMEMBERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F28BC0)
#define CLANMEMBERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F28BD0)
#define CLANMEMBERNETWORKTASK_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F28BE0)
#define CLANMEMBERNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F28BF0)
#define CLANMEMBERNETWORKTASK_SET_CLANMEMBERDBID_OFFSET UNITYSDK_OFFSET(0x1F28C00)
#define CLANMEMBERNETWORKTASK_GET_CLANMEMBERDBID_OFFSET UNITYSDK_OFFSET(0x1F28C10)

	inline static constexpr unsigned int ClanMemberNetworkTask_TypeDefinitionIndex = 2188;

	class ClanMemberNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x40
		::System::Int64 _ClanMemberDBId_k__BackingField; // 0x48

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_GET_CLANDBID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_SET_CLANMEMBERDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanMemberDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERNETWORKTASK_GET_CLANMEMBERDBID_OFFSET))(nullptr);
		}

	};

