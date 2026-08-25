#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NPListener; }
namespace NPA { class NXPPushPolicies; }

#define NPA_EDITOR_PUSH_NXPPUSHSETTING_GETPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PUSH_NXPPUSHSETTING_SETPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushSetting_TypeDefinitionIndex = 26553;

	class NXPPushSetting : public Il2CppObject
	{
	public:
		::System::Void getPolicy(::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHSETTING_GETPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void setPolicy(::NPA::NXPPushPolicies* arg, ::System::String* str, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicies*, ::System::String*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHSETTING_SETPOLICY_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

