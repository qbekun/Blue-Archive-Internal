#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor::Network { class NXPNsrrsPenaltyInfo; }
namespace NPA::InfaceSDK { class NXPToyNexonUserInfoEx; }

#define NPA_INFACESDK_NXPTOYSIGNINWITHTICKETRESPONSE_FILLJSONBODY_OFFSET UNITYSDK_OFFSET(0x9CE8090)
#define NPA_INFACESDK_NXPTOYSIGNINWITHTICKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE8DB0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToySignInWithTicketResponse_TypeDefinitionIndex = 25792;

	class NXPToySignInWithTicketResponse : public Il2CppObject
	{
	public:
		::System::Int32 isNewUser; // 0x28
		Il2CppObject* termsAgree; // 0x30
		::System::Int64 npSN; // 0x38
		::System::String* guid; // 0x40
		::System::String* npToken; // 0x48
		::System::String* npaCode; // 0x50
		::System::String* umKey; // 0x58
		::System::Int32 loginResultType; // 0x60
		::System::Int32 withdrawExpiresIn; // 0x64
		::System::String* sessionToken; // 0x68
		::NPA::Editor::Network::NXPNsrrsPenaltyInfo* nsrrsPenaltyInfo; // 0x70
		::NPA::InfaceSDK::NXPToyNexonUserInfoEx* nkUserInfo; // 0x78
		::NPA::InfaceSDK::NXPToyNexonUserInfoEx* njUserInfo; // 0x80

		::System::Void FillJsonBody(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYSIGNINWITHTICKETRESPONSE_FILLJSONBODY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYSIGNINWITHTICKETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

