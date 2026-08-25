#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPNsrrsPenaltyInfo; }

#define NPA_EDITOR_NETWORK_NXPNSRRSPENALTYINFO_WRITETOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9C1A090)
#define NPA_EDITOR_NETWORK_NXPNSRRSPENALTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A240)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPNsrrsPenaltyInfo_TypeDefinitionIndex = 26619;

	class NXPNsrrsPenaltyInfo : public Il2CppObject
	{
	public:
		::System::String* releaseToken; // 0x10
		::System::String* type; // 0x18

		::System::Void WriteToJsonObject(::NPA::Editor::Network::NXPNsrrsPenaltyInfo* arg, ::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPNsrrsPenaltyInfo*, ::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNSRRSPENALTYINFO_WRITETOJSONOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNSRRSPENALTYINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

