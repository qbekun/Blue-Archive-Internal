#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINEUTILITIES_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xA2ACCD0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngineUtilities_TypeDefinitionIndex = 37523;

	class FontEngineUtilities : public Il2CppObject
	{
	public:
		::System::Int32 MaxValue(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINEUTILITIES_MAXVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

