#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANAPPLICATLISTNETWORKTASK_GET_PAGEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F24EB0)
#define CLANAPPLICATLISTNETWORKTASK_SET_PAGEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F24EC0)
#define CLANAPPLICATLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F24ED0)
#define CLANAPPLICATLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F250C0)
#define CLANAPPLICATLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F25150)
#define CLANAPPLICATLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F25160)
#define CLANAPPLICATLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F25170)

	inline static constexpr unsigned int ClanApplicatListNetworkTask_TypeDefinitionIndex = 2162;

	class ClanApplicatListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _PageOffSet_k__BackingField; // 0x40

		::System::Int64 get_PageOffSet()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_GET_PAGEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_PageOffSet(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_SET_PAGEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

