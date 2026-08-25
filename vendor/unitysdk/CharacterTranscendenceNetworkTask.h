#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERTRANSCENDENCENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F229B0)
#define CHARACTERTRANSCENDENCENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F22A40)
#define CHARACTERTRANSCENDENCENETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F22EB0)
#define CHARACTERTRANSCENDENCENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F22EC0)
#define CHARACTERTRANSCENDENCENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F22ED0)
#define CHARACTERTRANSCENDENCENETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F22EE0)
#define CHARACTERTRANSCENDENCENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F22EF0)

	inline static constexpr unsigned int CharacterTranscendenceNetworkTask_TypeDefinitionIndex = 2146;

	class CharacterTranscendenceNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterId_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_TargetCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

