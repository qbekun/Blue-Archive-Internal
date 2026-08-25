#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETTERMSLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C22460)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetTermsListRequest_TypeDefinitionIndex = 26669;

	class NXPToyGetTermsListRequest : public Il2CppObject
	{
	public:
		::System::String* MethodTypeApp; // 0x0
		::System::String* MethodTypeBaseplate; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETTERMSLISTREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

