#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHAuthTicket; }

#define NPA_EX_STEAM_NXPGETAUTHSESSIONTICKETCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BF10)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPGetAuthSessionTicketCallbackInfo_TypeDefinitionIndex = 26051;

	class NXPGetAuthSessionTicketCallbackInfo : public Il2CppObject
	{
	public:
		::System::Int32 STEAM_AUTH_TICKET_BUFFER_SIZE; // 0x10
		::NPA::Ex::Steam::NXPHAuthTicket* authTicket; // 0x14
		::Il2CppArray<::System::Object*>* responseAuthSessionTicketBuffer; // 0x18
		::System::UInt32 actualAuthSessionTicketSize; // 0x20
		Il2CppObject* onGetAuthSessionTicketResponse; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPGETAUTHSESSIONTICKETCALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

