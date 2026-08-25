#pragma once
#include "../unitysdk.h"

namespace NPA { class NPResult; }

#define NPA_INPPLATELISTENER_ONACTIONPERFORMEDRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPPlateListener_TypeDefinitionIndex = 25643;

	class INPPlateListener : public Il2CppObject
	{
	public:
		::System::Void OnActionPerformedResult(::NPA::NPResult* arg)
		{
			((::System::Void(*)(::NPA::NPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPPLATELISTENER_ONACTIONPERFORMEDRESULT_OFFSET))(arg, nullptr);
		}

	};
}

