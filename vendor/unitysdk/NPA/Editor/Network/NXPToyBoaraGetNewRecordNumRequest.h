#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYBOARAGETNEWRECORDNUMREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1F700)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyBoaraGetNewRecordNumRequest_TypeDefinitionIndex = 26651;

	class NXPToyBoaraGetNewRecordNumRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOARAGETNEWRECORDNUMREQUEST_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

