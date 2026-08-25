#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONTENTSWEEPMULTISWEEPPRESETLISTTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F35B20)
#define CONTENTSWEEPMULTISWEEPPRESETLISTTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F35BB0)
#define CONTENTSWEEPMULTISWEEPPRESETLISTTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F35BC0)
#define CONTENTSWEEPMULTISWEEPPRESETLISTTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F35BD0)
#define CONTENTSWEEPMULTISWEEPPRESETLISTTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F35DC0)

	inline static constexpr unsigned int ContentSweepMultiSweepPresetListTask_TypeDefinitionIndex = 2267;

	class ContentSweepMultiSweepPresetListTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPPRESETLISTTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

