#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETJOINSERVICELISTBYNPSNREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C21B50)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetJoinServiceListByNpsnRequest_TypeDefinitionIndex = 26664;

	class NXPToyGetJoinServiceListByNpsnRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETJOINSERVICELISTBYNPSNREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

