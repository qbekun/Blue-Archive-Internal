#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_PUSH_NXPPUSHSERVICE_REGISTERPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PUSH_NXPPUSHSERVICE_HANDLEPUSHCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushService_TypeDefinitionIndex = 26552;

	class NXPPushService : public Il2CppObject
	{
	public:
		::System::Void registerPush(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHSERVICE_REGISTERPUSH_OFFSET))(str, nullptr);
		}

		::System::Void handlePushClickEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHSERVICE_HANDLEPUSHCLICKEVENT_OFFSET))(nullptr);
		}

	};
}

