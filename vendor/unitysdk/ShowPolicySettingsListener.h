#pragma once
#include "unitysdk.h"

namespace NPA { class NXPResult; }

#define SHOWPOLICYSETTINGSLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D775D0)
#define SHOWPOLICYSETTINGSLISTENER_ONRESULT_OFFSET UNITYSDK_OFFSET(0x9D77600)

	inline static constexpr unsigned int ShowPolicySettingsListener_TypeDefinitionIndex = 26209;

	class ShowPolicySettingsListener : public Il2CppObject
	{
	public:
		Il2CppObject* action; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOWPOLICYSETTINGSLISTENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void onResult(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + SHOWPOLICYSETTINGSLISTENER_ONRESULT_OFFSET))(arg, nullptr);
		}

	};

