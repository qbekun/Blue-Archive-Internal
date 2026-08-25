#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define GUIDEMISSIONSEASONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F845D0)
#define GUIDEMISSIONSEASONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F845E0)
#define GUIDEMISSIONSEASONLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F845F0)
#define GUIDEMISSIONSEASONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F84600)
#define GUIDEMISSIONSEASONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F84790)
#define GUIDEMISSIONSEASONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F847A0)
#define GUIDEMISSIONSEASONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F847B0)

	inline static constexpr unsigned int GuideMissionSeasonListNetworkTask_TypeDefinitionIndex = 2634;

	class GuideMissionSeasonListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ShowToast_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ShowToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

