#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYINCRBANNERCLICKCOUNTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23070)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyIncrBannerClickCountRequest_TypeDefinitionIndex = 26673;

	class NXPToyIncrBannerClickCountRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYINCRBANNERCLICKCOUNTREQUEST_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

