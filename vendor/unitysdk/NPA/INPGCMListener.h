#pragma once
#include "../unitysdk.h"

#define NPA_INPGCMLISTENER_ONGCMRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPGCMListener_TypeDefinitionIndex = 25641;

	class INPGCMListener : public Il2CppObject
	{
	public:
		::System::Void OnGCMResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPGCMLISTENER_ONGCMRESULT_OFFSET))(arg, nullptr);
		}

	};
}

