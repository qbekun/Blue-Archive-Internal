#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F40)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F52FA0)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F53030)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_SENDCRAFTSAVEPRESETNAME_OFFSET UNITYSDK_OFFSET(0x1F53370)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_SYNCLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1F532D0)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK__PROCESSSESSION_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F53420)
#define CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F53430)

	inline static constexpr unsigned int CraftSavePresetNameProcessNetworkTask_TypeDefinitionIndex = 2307;

	class CraftSavePresetNameProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int32 presetIndex; // 0x40
		::System::String* presetName; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SendCraftSavePresetName(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_SENDCRAFTSAVEPRESETNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void SyncLocalData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_SYNCLOCALDATA_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK__PROCESSSESSION_B__3_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

