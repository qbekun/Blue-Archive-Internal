#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSAVEPRESETPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F537A0)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK_SENDCRAFTSAVEPRESET_OFFSET UNITYSDK_OFFSET(0x1F53A50)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK__PROCESSSESSION_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F53B00)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK_CHECKPRESETDB_OFFSET UNITYSDK_OFFSET(0x1F53B10)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F53E40)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F53ED0)
#define CRAFTSAVEPRESETPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F53EE0)

	inline static constexpr unsigned int CraftSavePresetProcessNetworkTask_TypeDefinitionIndex = 2311;

	class CraftSavePresetProcessNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftPresetSlotDB* PresetSlotDB; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SendCraftSavePreset(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_SENDCRAFTSAVEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__3_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK__PROCESSSESSION_B__3_0_OFFSET))(nullptr);
		}

		::System::Void CheckPresetDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_CHECKPRESETDB_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

