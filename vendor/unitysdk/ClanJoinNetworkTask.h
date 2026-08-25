#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANJOINNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F27400)
#define CLANJOINNETWORKTASK_GET_CLANJOINDBID_OFFSET UNITYSDK_OFFSET(0x1F27410)
#define CLANJOINNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F27420)
#define CLANJOINNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F274B0)
#define CLANJOINNETWORKTASK_SET_CLANJOINDBID_OFFSET UNITYSDK_OFFSET(0x1F274C0)
#define CLANJOINNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F274D0)
#define CLANJOINNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F274E0)

	inline static constexpr unsigned int ClanJoinNetworkTask_TypeDefinitionIndex = 2180;

	class ClanJoinNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanJoinDBId_k__BackingField; // 0x40

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanJoinDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_GET_CLANJOINDBID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ClanJoinDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_SET_CLANJOINDBID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANJOINNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

