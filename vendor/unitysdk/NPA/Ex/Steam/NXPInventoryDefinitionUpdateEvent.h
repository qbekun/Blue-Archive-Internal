#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BB20)
#define NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BBF0)
#define NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BC00)
#define NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BC70)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPInventoryDefinitionUpdateEvent_TypeDefinitionIndex = 26045;

	class NXPInventoryDefinitionUpdateEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPINVENTORYDEFINITIONUPDATEEVENT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

