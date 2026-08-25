#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSHIFTINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F56670)
#define CRAFTSHIFTINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F56950)
#define CRAFTSHIFTINGREWARDNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F569E0)
#define CRAFTSHIFTINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F569F0)
#define CRAFTSHIFTINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F56A00)
#define CRAFTSHIFTINGREWARDNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET UNITYSDK_OFFSET(0x1F56A90)
#define CRAFTSHIFTINGREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F56AA0)

	inline static constexpr unsigned int CraftShiftingRewardNetworkTask_TypeDefinitionIndex = 2329;

	class CraftShiftingRewardNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftShiftingSlotId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_CraftShiftingSlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_SET_CRAFTSHIFTINGSLOTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftShiftingSlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_GET_CRAFTSHIFTINGSLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

