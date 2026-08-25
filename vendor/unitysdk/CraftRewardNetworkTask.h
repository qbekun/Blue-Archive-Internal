#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F527B0)
#define CRAFTREWARDNETWORKTASK_SET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F52B10)
#define CRAFTREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52B20)
#define CRAFTREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F52B30)
#define CRAFTREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F52BC0)
#define CRAFTREWARDNETWORKTASK_GET_CRAFTSLOTID_OFFSET UNITYSDK_OFFSET(0x1F52C50)
#define CRAFTREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F52C60)

	inline static constexpr unsigned int CraftRewardNetworkTask_TypeDefinitionIndex = 2304;

	class CraftRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftSlotId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CraftSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_SET_CRAFTSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK_GET_CRAFTSLOTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

