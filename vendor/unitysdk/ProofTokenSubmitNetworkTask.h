#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define PROOFTOKENSUBMITNETWORKTASK_SET_ANSWER_OFFSET UNITYSDK_OFFSET(0x1F897E0)
#define PROOFTOKENSUBMITNETWORKTASK_GET_ANSWER_OFFSET UNITYSDK_OFFSET(0x1F897F0)
#define PROOFTOKENSUBMITNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F89800)
#define PROOFTOKENSUBMITNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F89990)
#define PROOFTOKENSUBMITNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F899A0)
#define PROOFTOKENSUBMITNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F89A30)
#define PROOFTOKENSUBMITNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F89A40)

	inline static constexpr unsigned int ProofTokenSubmitNetworkTask_TypeDefinitionIndex = 2668;

	class ProofTokenSubmitNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _Answer_k__BackingField; // 0x40

		::System::Void set_Answer(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_SET_ANSWER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Answer()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_GET_ANSWER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENSUBMITNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

