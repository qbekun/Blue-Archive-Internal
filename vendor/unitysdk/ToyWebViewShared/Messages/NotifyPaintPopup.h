#pragma once
#include "../../unitysdk.h"

namespace ToyWebViewShared::SharedMemory { class NXPSharedMemoryStream; }

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAINTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6180)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAINTPOPUP_SENDTOSHAREDMEMORY_OFFSET UNITYSDK_OFFSET(0x9BB7910)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyPaintPopup_TypeDefinitionIndex = 25451;

	class NotifyPaintPopup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* image; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAINTPOPUP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SendToSharedMemory(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAINTPOPUP_SENDTOSHAREDMEMORY_OFFSET))(arg, nullptr);
		}

	};
}

