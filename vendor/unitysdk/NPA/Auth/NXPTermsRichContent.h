#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTERMSRICHCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BA0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPTermsRichContent_TypeDefinitionIndex = 27483;

	class NXPTermsRichContent : public Il2CppObject
	{
	public:
		::System::String* target; // 0x10
		::System::String* replacement; // 0x18
		::System::String* link; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTERMSRICHCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

