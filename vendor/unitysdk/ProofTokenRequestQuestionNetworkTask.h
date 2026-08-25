#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_SET_QUESTION_OFFSET UNITYSDK_OFFSET(0x1F892C0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F892D0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_GET_QUESTION_OFFSET UNITYSDK_OFFSET(0x1F892E0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F892F0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F89300)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F894B0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_GET_HINT_OFFSET UNITYSDK_OFFSET(0x1F894C0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_SET_HINT_OFFSET UNITYSDK_OFFSET(0x1F894D0)
#define PROOFTOKENREQUESTQUESTIONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F894E0)

	inline static constexpr unsigned int ProofTokenRequestQuestionNetworkTask_TypeDefinitionIndex = 2666;

	class ProofTokenRequestQuestionNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _Hint_k__BackingField; // 0x40
		::System::String* _Question_k__BackingField; // 0x48

		::System::Void set_Question(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_SET_QUESTION_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::String* get_Question()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_GET_QUESTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_Hint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_GET_HINT_OFFSET))(nullptr);
		}

		::System::Void set_Hint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_SET_HINT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROOFTOKENREQUESTQUESTIONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

