#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPGetBasePlateInfoResponse; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_NETWORK_NXPGETBASEPLATEINFORESPONSE_GENERATEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C29360)
#define NPA_EDITOR_NETWORK_NXPGETBASEPLATEINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29C70)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPGetBasePlateInfoResponse_TypeDefinitionIndex = 26722;

	class NXPGetBasePlateInfoResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::Editor::Network::NXPGetBasePlateInfoResponse* GenerateObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::Editor::Network::NXPGetBasePlateInfoResponse*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPGETBASEPLATEINFORESPONSE_GENERATEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPGETBASEPLATEINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

