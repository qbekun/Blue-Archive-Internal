#pragma once
#include "../unitysdk.h"

namespace NPA { class NPRequestTypeTag; }

#define NPA_NXPTOYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC560)
#define NPA_NXPTOYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBF370)

namespace NPA
{
	inline static constexpr unsigned int NXPToyResult_TypeDefinitionIndex = 25549;

	class NXPToyResult : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPRequestTypeTag* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPRequestTypeTag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYRESULT_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

	};
}

