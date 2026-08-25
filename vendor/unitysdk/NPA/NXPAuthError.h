#pragma once
#include "../unitysdk.h"

#define NPA_NXPAUTHERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBAA10)

namespace NPA
{
	inline static constexpr unsigned int NXPAuthError_TypeDefinitionIndex = 25490;

	class NXPAuthError : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x10
		::System::String* errorText; // 0x18
		::System::String* errorDetail; // 0x20
		Il2CppObject* dataSet; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPAUTHERROR_.CTOR_OFFSET))(nullptr);
		}

	};
}

